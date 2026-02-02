#include "TaskManager.h"

void TaskManager::submitTask(const std::vector<int>& encryptedData) {
    SecureEnclave enclave;
    enclave.loadData(encryptedData);
    tasks_.push_back(enclave);
}

void TaskManager::runTasks() {
    results_.clear();
    for (auto& task : tasks_) {
        task.decryptData();
        int res = task.computeSum();
        task.encryptResult();
        results_.push_back(res);
    }
}

std::vector<int> TaskManager::getResults() const {
    return results_;
}
