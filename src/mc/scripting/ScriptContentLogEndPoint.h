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
    virtual ~ScriptContentLogEndPoint() /*override*/;

    virtual void log(::LogArea const logLevel, ::LogLevel const message, char const*) /*override*/;

    virtual bool logOnlyOnce() const /*override*/;

    virtual void flush() /*override*/;

    virtual void setEnabled(bool newState) /*override*/;

    virtual bool isEnabled() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptContentLogEndPoint(::ScriptDebugger& debugger);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptDebugger& debugger);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $log(::LogArea const logLevel, ::LogLevel const message, char const*);

    MCNAPI bool $logOnlyOnce() const;

    MCNAPI void $flush();

    MCNAPI void $setEnabled(bool newState);

    MCNAPI bool $isEnabled() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForLogEndPoint();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
