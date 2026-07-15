#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/deps/core/debug/log/LogEndPoint.h"
#include "mc/deps/core/debug/log/LogLevel.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/typeid_t.h"

// auto generated forward declare list
// clang-format off
class ContentLog;
// clang-format on

class ContentLogEndPoint : public ::Bedrock::EnableNonOwnerReferences, public ::Bedrock::LogEndPoint {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContentLogEndPoint() /*override*/;

    virtual void log(::LogArea const area, ::LogLevel const level, char const* message) = 0;

    virtual void log(char const*) /*override*/;

    virtual bool logOnlyOnce() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _register(::Bedrock::typeid_t<::ContentLog> id);

    MCNAPI void _unregister();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $log(char const*);


    // NOLINTEND
};
