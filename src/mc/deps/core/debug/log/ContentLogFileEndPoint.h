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
    ::ll::UntypedStorage<8, 8>  mUnk6b4db6;
    ::ll::UntypedStorage<8, 32> mUnk3cdcd4;
    ::ll::UntypedStorage<8, 32> mUnk355928;
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
    // vIndex: 0
    virtual ~ContentLogFileEndPoint() /*override*/ = default;

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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ContentLogFileEndPoint(
        ::Core::Path                debugLogDirectory,
        ::Core::Path                fileName,
        ::std::optional<::LogLevel> minLogLevel
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& FILE_NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Core::Path debugLogDirectory, ::Core::Path fileName, ::std::optional<::LogLevel> minLogLevel);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $log(::LogArea const area, ::LogLevel const level, char const* message);

    MCAPI void $flush();

    MCAPI void $setEnabled(bool enabled);

    MCFOLD bool $isEnabled() const;

    MCFOLD bool $logOnlyOnce() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForLogEndPoint();

    MCAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
