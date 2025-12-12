#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BiomeChunkVolume {

struct BiomeSamplesContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnke5f5e5;
    ::ll::UntypedStorage<4, 12> mUnk7b9f0d;
    ::ll::UntypedStorage<4, 4>  mUnk306b8d;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeSamplesContainer& operator=(BiomeSamplesContainer const&);
    BiomeSamplesContainer(BiomeSamplesContainer const&);
    BiomeSamplesContainer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BiomeSamplesContainer();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace BiomeChunkVolume
