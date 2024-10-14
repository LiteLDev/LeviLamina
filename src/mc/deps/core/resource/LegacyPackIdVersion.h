#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LegacyPackIdVersion {
public:
    // prevent constructor by default
    LegacyPackIdVersion& operator=(LegacyPackIdVersion const&);
    LegacyPackIdVersion(LegacyPackIdVersion const&);
    LegacyPackIdVersion();

public:
    // NOLINTBEGIN
    MCAPI LegacyPackIdVersion(std::string const& id, std::string const& version);

    MCAPI struct PackIdVersion getUpgradedPackId() const;

    MCAPI ~LegacyPackIdVersion();

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
