#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/ContentLogEndPoint.h"
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/deps/core/debug/log/LogLevel.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class ContentLogFileEndPoint : public ::ContentLogEndPoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkd6cbc8;
    ::ll::UntypedStorage<8, 32> mUnk5cdc54;
    ::ll::UntypedStorage<8, 32> mUnk29444e;
    ::ll::UntypedStorage<4, 4>  mUnkbe8544;
    ::ll::UntypedStorage<1, 1>  mUnke5cbb0;
    ::ll::UntypedStorage<4, 8>  mUnk299ac4;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentLogFileEndPoint& operator=(ContentLogFileEndPoint const&);
    ContentLogFileEndPoint(ContentLogFileEndPoint const&);
    ContentLogFileEndPoint();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContentLogFileEndPoint() /*override*/;

    virtual void log(::LogArea const area, ::LogLevel const level, char const* message) /*override*/;

    virtual void flush() /*override*/;

    virtual void setEnabled(bool newState) /*override*/;

    virtual bool isEnabled() const /*override*/;

    virtual bool logOnlyOnce() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ContentLogFileEndPoint(
        ::Core::Path                debugLogDirectory,
        ::Core::Path                fileName,
        ::std::optional<::LogLevel> minLogLevel
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& FILE_NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::Path debugLogDirectory, ::Core::Path fileName, ::std::optional<::LogLevel> minLogLevel);
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

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForLogEndPoint();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
