#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/ContentLogEndPoint.h"
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/deps/core/debug/log/LogLevel.h"

// auto generated forward declare list
// clang-format off
class ScriptDebugger;
// clang-format on

class ScriptContentLogEndPoint : public ::ContentLogEndPoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk56e480;
    ::ll::UntypedStorage<1, 1> mUnk195740;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptContentLogEndPoint& operator=(ScriptContentLogEndPoint const&);
    ScriptContentLogEndPoint(ScriptContentLogEndPoint const&);
    ScriptContentLogEndPoint();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptContentLogEndPoint() /*override*/ = default;

    // vIndex: 1
    virtual void log(::LogArea const, ::LogLevel const logLevel, char const* message) /*override*/;

    // vIndex: 2
    virtual bool logOnlyOnce() const /*override*/;

    // vIndex: 2
    virtual void flush() /*override*/;

    // vIndex: 3
    virtual void setEnabled(bool enabled) /*override*/;

    // vIndex: 4
    virtual bool isEnabled() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptContentLogEndPoint(::ScriptDebugger& debugger);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptDebugger& debugger);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $log(::LogArea const, ::LogLevel const logLevel, char const* message);

    MCFOLD bool $logOnlyOnce() const;

    MCFOLD void $flush();

    MCFOLD void $setEnabled(bool enabled);

    MCFOLD bool $isEnabled() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForLogEndPoint();

    MCAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
