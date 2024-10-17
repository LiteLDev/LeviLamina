#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/edu/Role.h"

class RoleChecker {
public:
    // prevent constructor by default
    RoleChecker& operator=(RoleChecker const&);
    RoleChecker(RoleChecker const&);

public:
    // NOLINTBEGIN
    MCAPI RoleChecker();

    MCAPI void checkRole(
        std::string const&                                                       jsonCredentials,
        std::function<void(::edu::Role, std::string const&, std::string const&)> callback
    );

    MCAPI bool lookupInProgress() const;

    MCAPI ~RoleChecker();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void dtor$();

    // NOLINTEND
};
