#include <optional>

struct S {
  int a;
  float b;
};

int main(int, char **) {
  std::optional<S> opt;
  return 0;
}
