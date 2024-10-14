#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemStackResponseInfo {
public:
    // prevent constructor by default
    ItemStackResponseInfo& operator=(ItemStackResponseInfo const&);
    ItemStackResponseInfo(ItemStackResponseInfo const&);

public:
    // NOLINTBEGIN
    MCAPI ItemStackResponseInfo();

    MCAPI ItemStackResponseInfo(struct ItemStackResponseInfo&&);

    MCAPI ~ItemStackResponseInfo();

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
