#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class FileOpenMode {

public:
    // prevent constructor by default
    FileOpenMode& operator=(FileOpenMode const&) = delete;
    FileOpenMode(FileOpenMode const&)            = delete;
    FileOpenMode()                               = delete;

public:
    /**
     * @symbol ??0FileOpenMode\@Core\@\@QEAA\@PEBD\@Z
     */
    MCAPI FileOpenMode(char const*); // NOLINT
    /**
     * @symbol ??0FileOpenMode\@Core\@\@QEAA\@H\@Z
     */
    MCAPI FileOpenMode(int); // NOLINT
    /**
     * @symbol ?cModeWide\@FileOpenMode\@Core\@\@QEAAPEB_WXZ
     */
    MCAPI wchar_t const* cModeWide(); // NOLINT
};

}; // namespace Core
