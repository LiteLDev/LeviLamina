#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class ContentLogFileEndPoint {

public:
    // prevent constructor by default
    ContentLogFileEndPoint& operator=(ContentLogFileEndPoint const&) = delete;
    ContentLogFileEndPoint(ContentLogFileEndPoint const&)            = delete;
    ContentLogFileEndPoint()                                         = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTENTLOGFILEENDPOINT
    /**
     * @symbol ?flush\@ContentLogFileEndPoint\@\@UEAAXXZ
     */
    MCVAPI void flush(); // NOLINT
    /**
     * @symbol ?isEnabled\@ContentLogFileEndPoint\@\@UEBA_NXZ
     */
    MCVAPI bool isEnabled() const; // NOLINT
    /**
     * @symbol ?log\@ContentLogFileEndPoint\@\@UEAAXW4LogArea\@\@W4LogLevel\@\@PEBD\@Z
     */
    MCVAPI void log(enum class LogArea, enum class LogLevel, char const*); // NOLINT
    /**
     * @symbol ?logOnlyOnce\@ContentLogFileEndPoint\@\@UEBA_NXZ
     */
    MCVAPI bool logOnlyOnce() const; // NOLINT
    /**
     * @symbol ?setEnabled\@ContentLogFileEndPoint\@\@UEAAX_N\@Z
     */
    MCVAPI void setEnabled(bool); // NOLINT
#endif
    /**
     * @symbol ??0ContentLogFileEndPoint\@\@QEAA\@VPath\@Core\@\@0V?$optional\@W4LogLevel\@\@\@std\@\@\@Z
     */
    MCAPI
        ContentLogFileEndPoint(class Core::Path, class Core::Path, class std::optional<enum class LogLevel>); // NOLINT
    /**
     * @symbol ?FILE_NAME\@ContentLogFileEndPoint\@\@2V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@B
     */
    MCAPI static class std::basic_string_view<char, struct std::char_traits<char>> const FILE_NAME; // NOLINT
};
