#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ScalarOptional.h"
#include "mc/world/level/storage/BlendingBlockType.h"

class BlendingData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16>  mUnk2236bb;
    ::ll::UntypedStorage<1, 1>   mUnk221f9b;
    ::ll::UntypedStorage<2, 32>  mUnkf2a2f1;
    ::ll::UntypedStorage<8, 384> mUnk7b6598;
    ::ll::UntypedStorage<8, 384> mUnk496b9d;
    ::ll::UntypedStorage<8, 384> mUnkae2f2b;
    // NOLINTEND

public:
    // prevent constructor by default
    BlendingData& operator=(BlendingData const&);
    BlendingData(BlendingData const&);
    BlendingData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ScalarOptional<ushort> getBiome(int cellX, int cellZ, int quartY) const;

    MCAPI ::BlendingBlockType getBlockType(int cellX, int cellZ, int cellY) const;

    MCAPI ::ScalarOptional<float> getDensity(int cellX, int cellZ, int cellY) const;

    MCAPI ::ScalarOptional<short> getHeight(int cellX, int cellZ) const;

    MCAPI bool hasBlendDataAt(int cellX, int cellZ) const;
    // NOLINTEND
};
