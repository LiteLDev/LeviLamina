#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct TypeNameInfo {
public:
    // prevent constructor by default
    TypeNameInfo& operator=(TypeNameInfo const&);
    TypeNameInfo(TypeNameInfo const&);
    TypeNameInfo();

public:
    // NOLINTBEGIN
    MCAPI TypeNameInfo(std::string, std::string, bool);

    MCAPI ~TypeNameInfo();

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

}; // namespace Scripting
