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
    ::ll::UntypedStorage<8, 32> mUnk6f25b1;
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
#ifdef LL_PLAT_S
    virtual ~ContentLogFileEndPoint() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~ContentLogFileEndPoint() /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void log(::LogArea const, ::LogLevel const, char const*) /*override*/;
#else // LL_PLAT_C
    virtual void log(::LogArea const area, ::LogLevel const level, char const* message) /*override*/;
#endif

    virtual void flush() /*override*/;

#ifdef LL_PLAT_S
    virtual void setEnabled(bool) /*override*/;
#else // LL_PLAT_C
    virtual void setEnabled(bool newState) /*override*/;
#endif

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

#ifdef LL_PLAT_C
    MCNAPI void deleteAllContentLogs() const;
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static ::std::string sanitizePathPrefixForDisplay(::std::string_view text);
#endif
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
#ifdef LL_PLAT_C
    MCNAPI void $log(::LogArea const area, ::LogLevel const level, char const* message);

    MCNAPI void $flush();

    MCNAPI void $setEnabled(bool newState);

    MCNAPI bool $isEnabled() const;

    MCNAPI bool $logOnlyOnce() const;
#endif


    // NOLINTEND
};
