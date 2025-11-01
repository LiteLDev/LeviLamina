#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
// clang-format on

class EntitySet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkcf9ab5;
    // NOLINTEND

public:
    // prevent constructor by default
    EntitySet& operator=(EntitySet const&);
    EntitySet(EntitySet const&);
    EntitySet();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EntitySet(::EntitySet&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::EntitySet&&);
    // NOLINTEND

};
