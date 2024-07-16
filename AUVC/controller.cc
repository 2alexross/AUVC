#include "controller.h"

#include <dlfcn.h>
#include <mujoco/mujoco.h>
#include <stdio.h>

extern "C" void controllerTestFunc(void) { printf("Hi from Plugin!\n"); }

extern "C" int controllerInitPlug(mjModel *m, mjData *d) {
  printf("Init Plug!\n");
  return 0;
}

extern "C" bool controllerUpdatePlug(mjModel *m, mjData *d) {
    printf(" #######3 Update Plug!\n");
  return true;
}
