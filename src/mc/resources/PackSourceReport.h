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
    PackSourceReport(PackSourceReport const&);
    PackSourceReport();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::PackReport const* getReport(::PackIdVersion const& packId) const;
#endif

#ifdef LL_PLAT_S
    MCNAPI ::std::unordered_map<::PackIdVersion, ::PackReport> const& getReports() const;
#endif

    MCNAPI bool hasErrors() const;

    MCNAPI void merge(::PackSourceReport&& other);
    // NOLINTEND
};
