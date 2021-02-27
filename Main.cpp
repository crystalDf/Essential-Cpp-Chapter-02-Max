#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int Max(const int& val1, const int& val2)
{
    return val1 > val2 ? val1 : val2;
}

float Max(const float& val1, const float& val2)
{
    return val1 > val2 ? val1 : val2;
}

std::string Max(const std::string& val1, const std::string& val2)
{
    return val1 > val2 ? val1 : val2;
}

int Max(const std::vector<int>& iv)
{
    return *std::max_element(iv.begin(), iv.end());
}

float Max(const std::vector<float>& iv)
{
    return *std::max_element(iv.begin(), iv.end());
}

std::string Max(const std::vector<std::string>& iv)
{
    return *std::max_element(iv.begin(), iv.end());
}

int Max(const int ia[], const int size)
{
    return *std::max_element(ia, ia + size);
}

float Max(const float ia[], const int size)
{
    return *std::max_element(ia, ia + size);
}

std::string Max(const std::string ia[], const int size)
{
    return *std::max_element(ia, ia + size);
}

template<typename T>
T MaxT(const T val1, T val2)
{
    return val1 > val2 ? val1 : val2;
}

template<typename T>
T MaxT(const std::vector<T>& iv)
{
    return *std::max_element(iv.begin(), iv.end());
}

template<typename T>
T MaxT(const T ia[], const int size)
{
    return *std::max_element(ia, ia + size);
}

int main()
{
    std::cout << Max(1, 2) << std::endl;
    std::cout << Max(3.0f, 4.0f) << std::endl;
    std::cout << Max("a", "b") << std::endl;
    std::cout << Max(std::vector<int> { 1, 2 }) << std::endl;
    std::cout << Max(std::vector<float> { 3.0f, 4.0f }) << std::endl;
    std::cout << Max(std::vector<std::string> { "a", "b" }) << std::endl;
    std::cout << Max((int[]) { 1, 2 }, 2) << std::endl;
    std::cout << Max((float[]) { 3.0f, 4.0f }, 2) << std::endl;
    std::cout << Max((std::string[]) { "a", "b" }, 2) << std::endl;

    std::cout << MaxT(1, 2) << std::endl;
    std::cout << MaxT(3.0f, 4.0f) << std::endl;
    std::cout << MaxT("a", "b") << std::endl;
    std::cout << MaxT(std::vector<int> { 1, 2 }) << std::endl;
    std::cout << MaxT(std::vector<float> { 3.0f, 4.0f }) << std::endl;
    std::cout << MaxT(std::vector<std::string> { "a", "b" }) << std::endl;
    std::cout << MaxT((int[]) { 1, 2 }, 2) << std::endl;
    std::cout << MaxT((float[]) { 3.0f, 4.0f }, 2) << std::endl;
    std::cout << MaxT((std::string[]) { "a", "b" }, 2) << std::endl;
}