#include "SecureEnclave.h"
#include <iostream>

SecureEnclave::SecureEnclave() : result_(0) {}

void SecureEnclave::loadData(const std::vector<int>& encryptedData) {
    data_ = encryptedData;
}

void SecureEnclave::decryptData() {
    // demo use - assume data is "decrypted" directly
    // add real encrypt/decrypt
}

int SecureEnclave::computeSum() {
    result_ = 0;
    for (auto v : data_) result_ += v;
    return result_;
}

void SecureEnclave::encryptResult() {
    // demo use
}

int SecureEnclave::getResult() const {
    return result_;
}
