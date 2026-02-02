# SecureEnclaveSim

A C++ prototype simulating **trusted execution environments (TEE)** and **confidential computing** workloads. Designed to reason about **trust boundaries, fault isolation, and deterministic task execution**.

## Features
- Modular architecture separating **untrusted orchestration** from **secure task execution**
- Deterministic, concurrency-safe task execution
- Simulated key handling and verification boundaries
- Designed for reasoning about **reliability, security, and system-level trade-offs**

## Usage
```bash
cd src
clang++ -std=c++20 *.cpp -o enclave_sim
./enclave_sim
