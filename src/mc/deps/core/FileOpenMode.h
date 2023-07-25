#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class FileOpenMode {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CORE_FILEOPENMODE
public:
    FileOpenMode& operator=(FileOpenMode const&) = delete;
    FileOpenMode(FileOpenMode const&)            = delete;
    FileOpenMode()                               = delete;
#endif

public:
    /**
     * @symbol ??0FileOpenMode\@Core\@\@QEAA\@PEBD\@Z
     */
    MCAPI FileOpenMode(char const*);
    /**
     * @symbol ??0FileOpenMode\@Core\@\@QEAA\@H\@Z
     */
    MCAPI FileOpenMode(int);
    /**
     * @symbol ?cModeWide\@FileOpenMode\@Core\@\@QEAAPEB_WXZ
     */
    MCAPI wchar_t const* cModeWide();
};

}; // namespace Core
