#pragma once

#include "../dll.h"
#include "../Actor/Actor.h"
#include "../Core/AutomaticID.h"
#include "../Core/RelativeFloat.h"
class TeleportTarget {
    char pad[48];
};
class Actor;
class TeleportCommand {
public:
    MCAPI static class TeleportTarget computeTarget(Actor& actor, Vec3 target, Vec3* old, AutomaticID<class Dimension, int> dimId, RelativeFloat yaw, RelativeFloat pitch, int flag);
    MCAPI static void                 applyTarget(Actor& actor, TeleportTarget target);
};