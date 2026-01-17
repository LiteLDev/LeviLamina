#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

struct DebugDump {
public:
    // DebugDump inner types define
    enum class DumpFlags : int {
        None          = 0,
        IncludeStyles = 2,
        IncludeLayout = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk21657e;
    // NOLINTEND

public:
    // prevent constructor by default
    DebugDump& operator=(DebugDump const&);
    DebugDump(DebugDump const&);
    DebugDump();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void Release() = 0;

    virtual ~DebugDump() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cohtml
