#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class Vec3;
// clang-format on

class ListenerInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(::BlockPos const&, uint, ::Block const&, ::Actor*)>> mCallback;
    ::ll::TypedStorage<4, 12, ::Vec3>                                                                   mPosition;
    ::ll::TypedStorage<4, 4, float>                                                                     mRadiusSqr;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float const& SQRT_FLT_MAX();
    // NOLINTEND
};
