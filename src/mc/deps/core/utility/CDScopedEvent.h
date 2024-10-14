#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/CrashDumpLogStringID.h"

class CDScopedEvent {
public:
    // prevent constructor by default
    CDScopedEvent& operator=(CDScopedEvent const&);
    CDScopedEvent(CDScopedEvent const&);
    CDScopedEvent();

public:
    // NOLINTBEGIN
    MCAPI CDScopedEvent(::CrashDumpLogStringID, ::CrashDumpLogStringID, ::CrashDumpLogStringID);

    MCAPI ~CDScopedEvent();

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
