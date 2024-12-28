#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TickingAreaDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk1c3e62;
    ::ll::UntypedStorage<4, 12> mUnk10c34b;
    ::ll::UntypedStorage<4, 4>  mUnk77dd1d;
    ::ll::UntypedStorage<8, 32> mUnkb4cc1f;
    ::ll::UntypedStorage<1, 1>  mUnk95b941;
    ::ll::UntypedStorage<1, 1>  mUnkb50ebe;
    // NOLINTEND

public:
    // prevent constructor by default
    TickingAreaDescription& operator=(TickingAreaDescription const&);
    TickingAreaDescription(TickingAreaDescription const&);
    TickingAreaDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string asString() const;

    MCAPI ~TickingAreaDescription();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
