#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/edu/Role.h"

class RoleChecker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 336> mUnkeab699;
    ::ll::UntypedStorage<8, 16>  mUnk448721;
    // NOLINTEND

public:
    // prevent constructor by default
    RoleChecker& operator=(RoleChecker const&);
    RoleChecker(RoleChecker const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RoleChecker();

    MCAPI void checkRole(
        ::std::string const&                                                           jsonCredentials,
        ::std::function<void(::edu::Role, ::std::string const&, ::std::string const&)> callback
    );

    MCAPI bool lookupInProgress() const;

    MCAPI ~RoleChecker();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
