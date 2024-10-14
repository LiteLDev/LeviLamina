#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::ZipUtils {

class ZipSettings {
public:
    // prevent constructor by default
    ZipSettings& operator=(ZipSettings const&);
    ZipSettings(ZipSettings const&);

public:
    // NOLINTBEGIN
    MCAPI ZipSettings();

    MCAPI ~ZipSettings();

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

}; // namespace Core::ZipUtils
