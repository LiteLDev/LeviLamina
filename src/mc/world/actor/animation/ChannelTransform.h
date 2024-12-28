#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

class ChannelTransform {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 648> mUnk2837bb;
    ::ll::UntypedStorage<4, 12>  mUnkcedb21;
    ::ll::UntypedStorage<4, 4>   mUnk44ec16;
    // NOLINTEND

public:
    // prevent constructor by default
    ChannelTransform& operator=(ChannelTransform const&);
    ChannelTransform(ChannelTransform const&);
    ChannelTransform();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool getDataValues(::Vec3& minValue, ::Vec3& maxValue) const;
    // NOLINTEND
};
