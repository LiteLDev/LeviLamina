#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

struct TrailComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk7e3696;
    ::ll::UntypedStorage<4, 12> mUnkb5faa3;
    // NOLINTEND

public:
    // prevent constructor by default
    TrailComponent& operator=(TrailComponent const&);
    TrailComponent(TrailComponent const&);
    TrailComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initFromDefinition(::Actor const& actor);
    // NOLINTEND
};
