#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class MainProcScope {
public:
    // prevent constructor by default
    MainProcScope& operator=(MainProcScope const&);
    MainProcScope(MainProcScope const&);

public:
    // NOLINTBEGIN
    MCAPI MainProcScope();

    MCAPI ~MainProcScope();

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

}; // namespace Bedrock::Threading
