#pragma once

#include <memory>

#include "../Core/AutomaticID.h"
#include "../Core/NBT.h"
#include "../Math/Vec3.h"

class Dimension;

class ChangeDimensionRequest {
public:
    int                          unk0 = 0;
    AutomaticID<Dimension, int>  from, to;
    Vec3                         pos;
    bool                         flag1 = false, flag2 = false;
    std::unique_ptr<CompoundTag> nbt;
};