#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/CompoundTagUpdaterResult.h"

class CompoundTagUpdaterContext {
public:
    // prevent constructor by default
    CompoundTagUpdaterContext& operator=(CompoundTagUpdaterContext const&);
    CompoundTagUpdaterContext(CompoundTagUpdaterContext const&);

public:
    // NOLINTBEGIN
    MCAPI CompoundTagUpdaterContext();

    MCAPI class CompoundTagUpdaterNodeBuilder addUpdater(uchar major, uchar minor, uchar patch);

    MCAPI ::CompoundTagUpdaterResult update(class CompoundTag& tag, uint version) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
