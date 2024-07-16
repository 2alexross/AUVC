#include "controller.h"

#include <dlfcn.h>
#include <mujoco/mujoco.h>
#include <stdio.h>

extern "C" void test_func(void) { printf("Hi from Plugin!\n"); }

extern "C" int initPlug(mjModel *m, mjData *d) {
  printf("Init Plug!\n");
  return 0;
}

extern "C" bool updatePlug(mjModel *m, mjData *d) {
    printf("########### Update Plug!\n");
  return true;
}
