#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/ContentLogEndPoint.h"
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/deps/core/debug/log/LogLevel.h"
#include "mc/resources/ResourcePackListener.h"

// auto generated forward declare list
// clang-format off
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
        // prevent constructor by default
        VanillaWorldChecker& operator=(VanillaWorldChecker const&);
        VanillaWorldChecker(VanillaWorldChecker const&);
        VanillaWorldChecker();

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~VanillaWorldChecker();

        // vIndex: 1
        virtual void onActiveResourcePacksChanged(class ResourcePackManager& mgr);

        // vIndex: 5
        virtual void onResourceManagerDestroyed(class ResourcePackManager& mgr);

        MCAPI void checkWorldData(class Core::Path const& levelPath);

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI static void** vftable();

        MCAPI void dtor$();

        MCAPI void onActiveResourcePacksChanged$(class ResourcePackManager& mgr);

        MCAPI void onResourceManagerDestroyed$(class ResourcePackManager& mgr);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    DebugEndPoint& operator=(DebugEndPoint const&);
    DebugEndPoint(DebugEndPoint const&);
    DebugEndPoint();

public:
    // NOLINTBEGIN
    MCVAPI void contentAssert(::LogArea area, ::LogLevel level, char const* message);

    MCVAPI void flush();

    MCVAPI bool isEnabled() const;

    MCVAPI void log(::LogArea area, ::LogLevel level, char const* message);

    MCVAPI bool logOnlyOnce() const;

    MCVAPI void setEnabled(bool newState);

    MCAPI explicit DebugEndPoint(std::optional<::LogLevel> minLogLevel);

    MCAPI void initializeContentLogging(class ResourcePackManager& mgr, class Core::Path const& levelPath);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftableForBedrockEnableNonOwnerReferences();

    MCAPI static void** vftableForBedrockLogEndPoint();

    MCAPI void* ctor$(std::optional<::LogLevel> minLogLevel);

    MCAPI void contentAssert$(::LogArea area, ::LogLevel level, char const* message);

    MCAPI void flush$();

    MCAPI bool isEnabled$() const;

    MCAPI void log$(::LogArea area, ::LogLevel level, char const* message);

    MCAPI bool logOnlyOnce$() const;

    MCAPI void setEnabled$(bool newState);

    MCAPI static std::unordered_map<::LogArea, bool> const& mAssertAreas();

    // NOLINTEND
};
