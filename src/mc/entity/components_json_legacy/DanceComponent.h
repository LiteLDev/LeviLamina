#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Vec3;
// clang-format on

class DanceComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk3953e9;
    // NOLINTEND

public:
    // prevent constructor by default
    DanceComponent& operator=(DanceComponent const&);
    DanceComponent(DanceComponent const&);

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
