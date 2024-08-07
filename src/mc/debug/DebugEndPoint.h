#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/ContentLogEndPoint.h"
#include "mc/enums/LogArea.h"
#include "mc/enums/LogLevel.h"
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

    MCAPI explicit DebugEndPoint(std::optional<::LogLevel>);

    MCAPI void initializeContentLogging(class ResourcePackManager& mgr, class Core::Path const& levelPath);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::unordered_map<::LogArea, bool> const mAssertAreas;

    // NOLINTEND
};
