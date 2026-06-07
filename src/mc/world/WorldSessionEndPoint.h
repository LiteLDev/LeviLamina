#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/ContentLogEndPoint.h"
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/deps/core/debug/log/LogLevel.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
// clang-format on

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
    virtual void log(::LogArea const area, ::LogLevel const level, char const*) /*override*/;

    virtual void flush() /*override*/;

    virtual void setEnabled(bool newState) /*override*/;

    virtual bool isEnabled() const /*override*/;

    virtual bool logOnlyOnce() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit WorldSessionEndPoint(::IMinecraftEventing& eventing);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IMinecraftEventing& eventing);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $log(::LogArea const area, ::LogLevel const level, char const*);

    MCNAPI void $flush();

    MCNAPI void $setEnabled(bool newState);

    MCNAPI bool $isEnabled() const;

    MCNAPI bool $logOnlyOnce() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForLogEndPoint();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
