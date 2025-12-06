#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Pos.h"

struct Bounds {
public:
    // Bounds inner types declare
    // clang-format off
    struct Iterator;
    // clang-format on

    // Bounds inner types define
    struct Iterator {};

    enum class Option : uint {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Pos> mMin;
    ::ll::TypedStorage<4, 12, ::Pos> mMax;
    ::ll::TypedStorage<4, 12, ::Pos> mDim;
    ::ll::TypedStorage<4, 4, int>    mArea;
    ::ll::TypedStorage<4, 4, int>    mVolume;
    ::ll::TypedStorage<4, 4, int>    mSide;
    // NOLINTEND
};
