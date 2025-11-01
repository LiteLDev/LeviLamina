#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PackSourceReport {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkae94ca;
    // NOLINTEND

public:
    // prevent constructor by default
    PackSourceReport& operator=(PackSourceReport const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PackSourceReport();

    MCNAPI PackSourceReport(::PackSourceReport const&);

    MCNAPI PackSourceReport(::PackSourceReport&&);

    MCNAPI bool hasErrors() const;

    MCNAPI ::PackSourceReport& operator=(::PackSourceReport&&);

    MCNAPI ~PackSourceReport();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::PackSourceReport const&);

    MCNAPI void* $ctor(::PackSourceReport&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
