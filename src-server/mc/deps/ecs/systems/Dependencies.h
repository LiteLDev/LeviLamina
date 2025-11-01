#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Dependencies {
public:
    // Dependencies inner types define
    enum class AccessType : int {
        Filter      = 0,
        Read        = 1,
        Write       = 2,
        AddRemove   = 3,
        GlobalRead  = 4,
        GlobalWrite = 5,
        Count       = 6,
    };

public:
    // member variables
    // NOLINTBEGIN
    bool                                                                   mBlocking;
    bool                                                                   mUsesEntityFactory;
    ::std::array<::std::vector<uint>, 6> mAccessGroups;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~Dependencies();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
