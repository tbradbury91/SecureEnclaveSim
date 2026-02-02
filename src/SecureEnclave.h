#pragma once
#include <vector>
#include <string>

class SecureEnclave {
public:
    SecureEnclave();
    void loadData(const std::vector<int>& encryptedData);
    void decryptData();
    int computeSum(); //demo op
    void encryptResult();
    int getResult() const;

private:
    std::vector<int> data_;
    int result_;
};
