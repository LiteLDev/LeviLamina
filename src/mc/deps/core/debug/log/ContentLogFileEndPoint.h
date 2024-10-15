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
    // prevent constructor by default
    ContentLogFileEndPoint& operator=(ContentLogFileEndPoint const&);
    ContentLogFileEndPoint(ContentLogFileEndPoint const&);
    ContentLogFileEndPoint();

public:
    // NOLINTBEGIN
    MCVAPI void flush();

    MCVAPI bool isEnabled() const;

    MCVAPI void log(::LogArea area, ::LogLevel level, char const* message);

    MCVAPI bool logOnlyOnce() const;

    MCVAPI void setEnabled(bool newState);

    MCAPI ContentLogFileEndPoint(
        class Core::Path          debugLogDirectory,
        class Core::Path          fileName,
        std::optional<::LogLevel> minLogLevel
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftableForBedrockEnableNonOwnerReferences();

    MCAPI static void** $vftableForBedrockLogEndPoint();

    MCAPI void*
    ctor$(class Core::Path debugLogDirectory, class Core::Path fileName, std::optional<::LogLevel> minLogLevel);

    MCAPI void flush$();

    MCAPI bool isEnabled$() const;

    MCAPI void log$(::LogArea area, ::LogLevel level, char const* message);

    MCAPI bool logOnlyOnce$() const;

    MCAPI void setEnabled$(bool newState);

    MCAPI static std::string_view const& FILE_NAME();

    // NOLINTEND
};
