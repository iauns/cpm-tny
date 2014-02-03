#include <iostream>
#include "tny/tny.hpp"

int main(int /*argc*/, char** /*argv*/)
{
  int32_t value = 23;

  Tny *root = NULL;
  root = Tny_add(NULL, TNY_DICT, NULL, NULL, 0);
  root = Tny_add(root, TNY_INT32, const_cast<char*>("armor"), static_cast<void*>(&value), 0);
  Tny_free(root);

  return 0;
}
