#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/CrashDumpLogStringID.h"

struct CrashDumpKeyValueData {
public:
    // prevent constructor by default
    CrashDumpKeyValueData& operator=(CrashDumpKeyValueData const&);
    CrashDumpKeyValueData(CrashDumpKeyValueData const&);
    CrashDumpKeyValueData();

public:
    // NOLINTBEGIN
    MCAPI CrashDumpKeyValueData(::CrashDumpLogStringID, ::CrashDumpLogStringID, int, uint64);

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
