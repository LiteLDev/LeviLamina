#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class CountTracker {
public:
    // prevent constructor by default
    CountTracker& operator=(CountTracker const&);
    CountTracker(CountTracker const&);

public:
    // NOLINTBEGIN
    MCAPI CountTracker();

    MCAPI std::shared_ptr<void*> acquire();

    MCAPI void clear();

    MCAPI uint get() const;

    MCAPI ~CountTracker();

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
