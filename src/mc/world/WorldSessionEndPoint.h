#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/ContentLogEndPoint.h"
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/deps/core/debug/log/LogLevel.h"

class WorldSessionEndPoint : public ::ContentLogEndPoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk5ccb44;
    ::ll::UntypedStorage<1, 1> mUnk4ec654;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldSessionEndPoint& operator=(WorldSessionEndPoint const&);
    WorldSessionEndPoint(WorldSessionEndPoint const&);
    WorldSessionEndPoint();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void log(::LogArea const area, ::LogLevel const level, char const* message) /*override*/;

    virtual void flush() /*override*/;

    virtual void setEnabled(bool newState) /*override*/;

    virtual bool isEnabled() const /*override*/;

    virtual bool logOnlyOnce() const /*override*/;

    virtual ~WorldSessionEndPoint() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $log(::LogArea const area, ::LogLevel const level, char const* message);

    MCNAPI void $flush();

    MCNAPI void $setEnabled(bool newState);

    MCNAPI bool $isEnabled() const;

    MCNAPI bool $logOnlyOnce() const;


    // NOLINTEND
};
