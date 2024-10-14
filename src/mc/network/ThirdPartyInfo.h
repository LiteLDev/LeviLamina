#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ThirdPartyInfo {
public:
    // prevent constructor by default
    ThirdPartyInfo& operator=(ThirdPartyInfo const&);

public:
    // NOLINTBEGIN
    MCAPI ThirdPartyInfo();

    MCAPI ThirdPartyInfo(class ThirdPartyInfo const&);

    MCAPI ~ThirdPartyInfo();

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
