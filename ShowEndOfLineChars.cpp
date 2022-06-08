// Related to https://github.com/isocpp/CppCoreGuidelines/pull/1920
// -- Niels Dekker, LKEB, Leiden University Medical Center, 2022

#include <iostream>
#include <fstream>

int main()
{
  const auto fileName = "file.txt";
  {
    std::ofstream outputFileStream(fileName);

    for (int i{}; i < 8; ++i)
    {
      outputFileStream << i << '\n';
    }
  }
  std::ifstream inputFileStream(fileName, std::ios_base::binary);

  for(const int c: std::string(std::istreambuf_iterator<char>{inputFileStream}, {}))
  {
    std::cout << "0x" << std::uppercase << std::hex << c << ' ';
  }
  std::cout << '\n';
}
