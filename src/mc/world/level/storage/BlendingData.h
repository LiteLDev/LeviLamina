#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ScalarOptional.h"
#include "mc/world/level/storage/BlendingBlockType.h"

// auto generated forward declare list
// clang-format off
struct BiomeIdType;
// clang-format on

class BlendingData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16>  mUnk2236bb;
    ::ll::UntypedStorage<1, 1>   mUnk221f9b;
    ::ll::UntypedStorage<2, 32>  mUnkf2a2f1;
    ::ll::UntypedStorage<8, 384> mUnkad10ef;
    ::ll::UntypedStorage<8, 384> mUnk63ba47;
    ::ll::UntypedStorage<8, 384> mUnk4d055d;
    // NOLINTEND

public:
    // prevent constructor by default
    BlendingData& operator=(BlendingData const&);
    BlendingData(BlendingData const&);
    BlendingData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScalarOptional<::BiomeIdType> getBiome(int cellX, int cellZ, int quartY) const;

    MCNAPI ::BlendingBlockType getBlockType(int cellX, int cellZ, int cellY) const;

    MCNAPI ::ScalarOptional<float> getDensity(int cellX, int cellZ, int cellY) const;

    MCNAPI ::ScalarOptional<short> getHeight(int cellX, int cellZ) const;

    MCNAPI bool hasBlendDataAt(int cellX, int cellZ) const;

    MCNAPI ~BlendingData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
