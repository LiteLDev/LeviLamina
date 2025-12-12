#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class PackReport;
struct PackIdVersion;
// clang-format on

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

    MCNAPI PackSourceReport(::PackSourceReport&&);

    MCNAPI PackSourceReport(::PackSourceReport const&);

    MCNAPI_C ::PackReport const* getReport(::PackIdVersion const& packId) const;

    MCNAPI_S bool hasErrors() const;

    MCNAPI ::PackSourceReport& operator=(::PackSourceReport&&);

    MCNAPI ~PackSourceReport();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::PackSourceReport&&);

    MCNAPI void* $ctor(::PackSourceReport const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
