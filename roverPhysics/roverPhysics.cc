#include "roverPhysics.h"

#include <dlfcn.h>
#include <mujoco/mujoco.h>
#include <stdio.h>

extern "C" void roverPhysicsTestPlug(void) { printf("Hi from Rover!\n"); }

extern "C" int roverPhysicsInitPlug(mjModel *m, mjData *d) {
  printf("Init Rover Plug!\n");
  return 0;
}

extern "C" bool roverPhysicsUpdatePlug(mjModel *m, mjData *d) {
    printf("Update Rover Plug!\n");
  return true;
}
