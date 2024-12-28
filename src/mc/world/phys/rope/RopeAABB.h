#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec3;
struct AABBContactPoint;
// clang-format on

struct RopeAABB {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 24> mUnk9d4fdf;
    ::ll::UntypedStorage<1, 1>  mUnkfcf383;
    // NOLINTEND

public:
    // prevent constructor by default
    RopeAABB& operator=(RopeAABB const&);
    RopeAABB(RopeAABB const&);
    RopeAABB();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool getContactPoint(::Vec3 const& nodePos, float nodeSize, ::AABBContactPoint& result) const;
    // NOLINTEND
};
