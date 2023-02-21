
#include "rclcpp/rclcpp.hpp"
#include <chrono>
#include <cstdio>
#include <memory>

class TransbotMinimalDriver : public rclcpp::Node
{
public:
  TransbotMinimalDriver() : Node("TransbotNode") { }
};

int main(int argc, char** argv)
{
  (void)argc;
  (void)argv;

  printf("hello world my_package package\n");
  return 0;
}
