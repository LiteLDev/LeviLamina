#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ChannelTransform_Float;
class Vec3;
// clang-format on

class ChannelTransform {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk2837bb;
    ::ll::UntypedStorage<4, 12> mUnkcedb21;
    ::ll::UntypedStorage<4, 4> mUnk44ec16;
    // NOLINTEND

public:
    // prevent constructor by default
    ChannelTransform& operator=(ChannelTransform const&);
    ChannelTransform(ChannelTransform const&);
    ChannelTransform();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ChannelTransform(::ChannelTransform_Float const& rhs);

    MCNAPI bool getDataValues(::Vec3& minValue, ::Vec3& maxValue) const;

    MCNAPI bool operator==(::ChannelTransform const& rhs) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ChannelTransform_Float const& rhs);
    // NOLINTEND

};
