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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
