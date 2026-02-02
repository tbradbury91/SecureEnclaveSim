#include "TaskManager.h"
#include <iostream>

int main() {
    TaskManager manager;

    // demo - submit 3 “encrypted” datasets
    manager.submitTask({1, 2, 3});
    manager.submitTask({4, 5, 6});
    manager.submitTask({7, 8, 9});

    manager.runTasks();

    auto results = manager.getResults();
    std::cout << "Results: ";
    for (auto r : results) std::cout << r << " ";
    std::cout << std::endl;

    return 0;
}
