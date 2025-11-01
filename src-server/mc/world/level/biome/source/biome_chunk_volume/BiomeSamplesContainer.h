#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/versionless/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Biome;
// clang-format on

namespace BiomeChunkVolume {

struct BiomeSamplesContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::Biome const*>> mBiomeBuffer;
    ::ll::TypedStorage<4, 12, ::BlockPos const> mBufferWorldOrigin;
    ::ll::TypedStorage<4, 4, int const> mBufferSizeY;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~BiomeSamplesContainer();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};

}
