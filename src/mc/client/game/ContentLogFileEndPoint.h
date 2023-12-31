#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/ContentLogEndPoint.h"
#include "mc/enums/LogArea.h"
#include "mc/enums/LogLevel.h"

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
    // symbol: ?flush@ContentLogFileEndPoint@@UEAAXXZ
    MCVAPI void flush();

    // symbol: ?isEnabled@ContentLogFileEndPoint@@UEBA_NXZ
    MCVAPI bool isEnabled() const;

    // symbol: ?log@ContentLogFileEndPoint@@UEAAXW4LogArea@@W4LogLevel@@PEBD@Z
    MCVAPI void log(::LogArea area, ::LogLevel level, char const* message);

    // symbol: ?logOnlyOnce@ContentLogFileEndPoint@@UEBA_NXZ
    MCVAPI bool logOnlyOnce() const;

    // symbol: ?setEnabled@ContentLogFileEndPoint@@UEAAX_N@Z
    MCVAPI void setEnabled(bool newState);

    // symbol: ??0ContentLogFileEndPoint@@QEAA@VPath@Core@@0V?$optional@W4LogLevel@@@std@@@Z
    MCAPI ContentLogFileEndPoint(class Core::Path, class Core::Path, std::optional<::LogLevel>);

    // symbol: ?FILE_NAME@ContentLogFileEndPoint@@2V?$basic_string_view@DU?$char_traits@D@std@@@std@@B
    MCAPI static std::string_view const FILE_NAME;

    // NOLINTEND
};
