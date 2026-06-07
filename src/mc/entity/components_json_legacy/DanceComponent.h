#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class DanceComponentListener;
class Vec3;
// clang-format on

class DanceComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DanceComponentListener>> mListener;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DanceComponent();

    MCAPI bool inListenDistance(::Vec3 const& pos) const;

    MCAPI void initFromDefinition(::Actor& actor);

    MCAPI void initFromDefinition(::Actor& actor, float distance);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
