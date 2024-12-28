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
    // vIndex: 1
    virtual void log(::LogArea const area, ::LogLevel const level, char const* message) /*override*/;

    // vIndex: 2
    virtual void flush() /*override*/;

    // vIndex: 3
    virtual void setEnabled(bool enabled) /*override*/;

    // vIndex: 4
    virtual bool isEnabled() const /*override*/;

    // vIndex: 2
    virtual bool logOnlyOnce() const /*override*/;

    // vIndex: 0
    virtual ~WorldSessionEndPoint() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit WorldSessionEndPoint(::IMinecraftEventing& eventing);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::IMinecraftEventing& eventing);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $log(::LogArea const area, ::LogLevel const level, char const* message);

    MCAPI void $flush();

    MCAPI void $setEnabled(bool enabled);

    MCAPI bool $isEnabled() const;

    MCAPI bool $logOnlyOnce() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForLogEndPoint();

    MCAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
