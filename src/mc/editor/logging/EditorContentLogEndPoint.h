#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/ContentLogEndPoint.h"
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/deps/core/debug/log/LogLevel.h"

namespace Editor {

class EditorContentLogEndPoint : public ::ContentLogEndPoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkaacd73;
    ::ll::UntypedStorage<1, 1>  mUnk8d16ba;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorContentLogEndPoint& operator=(EditorContentLogEndPoint const&);
    EditorContentLogEndPoint(EditorContentLogEndPoint const&);
    EditorContentLogEndPoint();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorContentLogEndPoint() /*override*/;

    virtual void log(::LogArea const area, ::LogLevel const level, char const* message) /*override*/;

    virtual bool logOnlyOnce() const /*override*/;

    virtual void flush() /*override*/;

    virtual void setEnabled(bool newState) /*override*/;

    virtual bool isEnabled() const /*override*/;
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

    MCNAPI bool $logOnlyOnce() const;

    MCNAPI void $flush();

    MCNAPI void $setEnabled(bool newState);

    MCNAPI bool $isEnabled() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForLogEndPoint();
    // NOLINTEND
};

} // namespace Editor
