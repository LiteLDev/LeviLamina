#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::Profile {

class ScopeObject {
public:
    // ScopeObject inner types declare
    // clang-format off
    struct ExplicitlyInvalid;
    // clang-format on

    // ScopeObject inner types define
    struct ExplicitlyInvalid {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnke3b426;
    ::ll::UntypedStorage<1, 1>  mUnkc9b54d;
    ::ll::UntypedStorage<8, 16> mUnk12a464;
    // NOLINTEND

public:
    // prevent constructor by default
    ScopeObject& operator=(ScopeObject const&);
    ScopeObject(ScopeObject const&);
    ScopeObject();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScopeObject();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Core::Profile
