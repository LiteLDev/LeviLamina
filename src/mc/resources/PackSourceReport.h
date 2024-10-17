#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PackSourceReport {
public:
    // prevent constructor by default
    PackSourceReport& operator=(PackSourceReport const&);

public:
    // NOLINTBEGIN
    MCAPI PackSourceReport();

    MCAPI PackSourceReport(class PackSourceReport const&);

    MCAPI void addReport(struct PackIdVersion const& packId, class PackReport&& report);

    MCAPI std::unordered_map<struct PackIdVersion, class PackReport> const& getReports() const;

    MCAPI bool hasErrors() const;

    MCAPI ~PackSourceReport();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class PackSourceReport const&);

    MCAPI void* ctor$();

    MCAPI void dtor$();

    // NOLINTEND
};
