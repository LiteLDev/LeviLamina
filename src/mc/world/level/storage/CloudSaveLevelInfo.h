#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CloudSaveLevelInfo {
public:
    // prevent constructor by default
    CloudSaveLevelInfo& operator=(CloudSaveLevelInfo const&);
    CloudSaveLevelInfo();

public:
    // NOLINTBEGIN
    MCAPI CloudSaveLevelInfo(class CloudSaveLevelInfo const&);

    MCAPI explicit CloudSaveLevelInfo(class CompoundTag const& tag);

    MCAPI bool const hasInfo() const;

    MCAPI void serialize(class CompoundTag& tag) const;

    MCAPI ~CloudSaveLevelInfo();

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
