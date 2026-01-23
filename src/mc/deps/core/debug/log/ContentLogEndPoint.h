#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/deps/core/debug/log/LogEndPoint.h"
#include "mc/deps/core/debug/log/LogLevel.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

class ContentLogEndPoint : public ::Bedrock::EnableNonOwnerReferences, public ::Bedrock::LogEndPoint {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContentLogEndPoint() /*override*/;

    virtual void log(::LogArea const, ::LogLevel const, char const*) = 0;

    virtual void log(char const* message) /*override*/;

    virtual bool logOnlyOnce() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $log(char const* message);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForLogEndPoint();
    // NOLINTEND
};
