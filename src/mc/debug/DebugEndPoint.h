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
        // vIndex: 1
        virtual void onActiveResourcePacksChanged(::ResourcePackManager& mgr) /*override*/;

        // vIndex: 5
        virtual void onResourceManagerDestroyed(::ResourcePackManager& mgr) /*override*/;

        // vIndex: 0
        virtual ~VanillaWorldChecker() /*override*/;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void checkWorldData(::Core::Path const& levelPath);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCAPI void $onActiveResourcePacksChanged(::ResourcePackManager& mgr);

        MCAPI void $onResourceManagerDestroyed(::ResourcePackManager& mgr);
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCAPI static void** $vftable();
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
    // vIndex: 1
    virtual void log(::LogArea const area, ::LogLevel const level, char const* message) /*override*/;

    // vIndex: 2
    virtual void flush() /*override*/;

    // vIndex: 3
    virtual void setEnabled(bool newState) /*override*/;

    // vIndex: 4
    virtual bool isEnabled() const /*override*/;

    // vIndex: 2
    virtual bool logOnlyOnce() const /*override*/;

    // vIndex: 3
    virtual void contentAssert(::LogArea const area, ::LogLevel const level, char const* message);

    // vIndex: 0
    virtual ~DebugEndPoint() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DebugEndPoint(::std::optional<::LogLevel> minLogLevel);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::unordered_map<::LogArea, bool> const& mAssertAreas();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::optional<::LogLevel> minLogLevel);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $log(::LogArea const area, ::LogLevel const level, char const* message);

    MCFOLD void $flush();

    MCAPI void $setEnabled(bool newState);

    MCFOLD bool $isEnabled() const;

    MCFOLD bool $logOnlyOnce() const;

    MCFOLD void $contentAssert(::LogArea const area, ::LogLevel const level, char const* message);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForLogEndPoint();

    MCAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
