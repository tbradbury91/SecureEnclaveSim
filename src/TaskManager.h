#pragma once
#include "SecureEnclave.h"
#include <vector>
#include <thread>

class TaskManager {
public:
    void submitTask(const std::vector<int>& encryptedData);
    void runTasks();
    std::vector<int> getResults() const;

private:
    std::vector<SecureEnclave> tasks_;
    std::vector<int> results_;
};
