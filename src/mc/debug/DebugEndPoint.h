#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/ContentLogEndPoint.h"
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/deps/core/debug/log/LogLevel.h"
#include "mc/resources/ResourcePackListener.h"

// auto generated forward declare list
// clang-format off
class ResourcePackManager;
namespace Core { class Path; }
// clang-format on

class DebugEndPoint : public ::ContentLogEndPoint {
public:
    // DebugEndPoint inner types declare
    // clang-format off
    class VanillaWorldChecker;
    // clang-format on

    // DebugEndPoint inner types define
    class VanillaWorldChecker : public ::ResourcePackListener {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnka84c93;
        ::ll::UntypedStorage<1, 1>  mUnkac0f45;
        ::ll::UntypedStorage<1, 1>  mUnk6685cb;
        // NOLINTEND

    public:
        // prevent constructor by default
        VanillaWorldChecker& operator=(VanillaWorldChecker const&);
        VanillaWorldChecker(VanillaWorldChecker const&);
        VanillaWorldChecker();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual void onActiveResourcePacksChanged(::ResourcePackManager& mgr) /*override*/;

        virtual void onResourceManagerDestroyed(::ResourcePackManager& mgr) /*override*/;

#ifdef LL_PLAT_S
        virtual ~VanillaWorldChecker() /*override*/;
#else // LL_PLAT_C
        virtual ~VanillaWorldChecker() /*override*/ = default;
#endif

        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void checkWorldData(::Core::Path const& levelPath);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
#ifdef LL_PLAT_S
        MCNAPI void $onActiveResourcePacksChanged(::ResourcePackManager& mgr);

        MCNAPI void $onResourceManagerDestroyed(::ResourcePackManager& mgr);
#endif


        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnk9aec1e;
    ::ll::UntypedStorage<1, 1>  mUnked2556;
    ::ll::UntypedStorage<4, 8>  mUnk71077b;
    // NOLINTEND

public:
    // prevent constructor by default
    DebugEndPoint& operator=(DebugEndPoint const&);
    DebugEndPoint(DebugEndPoint const&);
    DebugEndPoint();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void log(::LogArea const area, ::LogLevel const level, char const* message) /*override*/;

    virtual void flush() /*override*/;

    virtual void setEnabled(bool newState) /*override*/;

    virtual bool isEnabled() const /*override*/;

    virtual bool logOnlyOnce() const /*override*/;

    virtual void contentAssert(::LogArea const area, ::LogLevel const level, char const* message);

#ifdef LL_PLAT_S
    virtual ~DebugEndPoint() /*override*/;
#else // LL_PLAT_C
    virtual ~DebugEndPoint() /*override*/ = default;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::unordered_map<::LogArea, bool> const& mAssertAreas();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_S void* $ctor(::std::optional<::LogLevel> minLogLevel);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void $log(::LogArea const area, ::LogLevel const level, char const* message);

    MCNAPI void $flush();

    MCNAPI void $setEnabled(bool newState);

    MCNAPI bool $isEnabled() const;

    MCNAPI bool $logOnlyOnce() const;

    MCNAPI void $contentAssert(::LogArea const area, ::LogLevel const level, char const* message);
#endif


    // NOLINTEND
};
