#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Dependencies {
public:
    // Dependencies inner types define
    enum class AccessType : uint {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                   mBlocking;
    ::ll::TypedStorage<1, 1, bool>                                   mUsesEntityFactory;
    ::ll::TypedStorage<8, 144, ::std::array<::std::vector<uint>, 6>> mAccessGroups;
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
