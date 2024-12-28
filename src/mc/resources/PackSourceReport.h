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
    MCAPI PackSourceReport();

    MCAPI PackSourceReport(::PackSourceReport const&);

    MCAPI PackSourceReport(::PackSourceReport&&);

    MCAPI void addReport(::PackIdVersion const& packId, ::PackReport&& report);

    MCAPI ::std::unordered_map<::PackIdVersion, ::PackReport> const& getReports() const;

    MCAPI bool hasErrors() const;

    MCAPI ~PackSourceReport();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::PackSourceReport const&);

    MCAPI void* $ctor(::PackSourceReport&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
