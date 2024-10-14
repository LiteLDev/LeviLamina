#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/CrashDumpLogStringID.h"

struct CrashDumpEventData {
public:
    // prevent constructor by default
    CrashDumpEventData& operator=(CrashDumpEventData const&);
    CrashDumpEventData(CrashDumpEventData const&);
    CrashDumpEventData();

public:
    // NOLINTBEGIN
    MCAPI CrashDumpEventData(::CrashDumpLogStringID, ::CrashDumpLogStringID);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI static ::ll::CArrayT<struct CrashDumpFormatEntryImpl const>& kFormat();

    // NOLINTEND
};
