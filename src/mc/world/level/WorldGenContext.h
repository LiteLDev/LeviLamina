#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Aquifer;
class Block;
class BlockPos;
class IPreliminarySurfaceProvider;
// clang-format on

struct WorldGenContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Aquifer*>                                                     mAquifer;
    ::ll::TypedStorage<8, 64, ::std::function<void(::BlockPos const&, ::Block const&, int)>> mTickUpdateFn;
    ::ll::TypedStorage<8, 8, ::IPreliminarySurfaceProvider const*> mPreliminarySurfaceProvider;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldGenContext& operator=(WorldGenContext const&);
    WorldGenContext(WorldGenContext const&);
    WorldGenContext();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~WorldGenContext();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
