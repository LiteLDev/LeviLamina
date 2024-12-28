#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/CrashDumpLogStringID.h"

class ILevelCrashDumpManager {
public:
    // prevent constructor by default
    ILevelCrashDumpManager& operator=(ILevelCrashDumpManager const&);
    ILevelCrashDumpManager(ILevelCrashDumpManager const&);
    ILevelCrashDumpManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ILevelCrashDumpManager();

    // vIndex: 1
    virtual void setCrashDumpLogStringID(::CrashDumpLogStringID) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
