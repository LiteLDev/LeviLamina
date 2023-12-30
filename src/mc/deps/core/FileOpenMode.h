#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class FileOpenMode {
public:
    // prevent constructor by default
    FileOpenMode& operator=(FileOpenMode const&);
    FileOpenMode(FileOpenMode const&);
    FileOpenMode();

public:
    // NOLINTBEGIN
    // symbol: ??0FileOpenMode@Core@@QEAA@PEBD@Z
    MCAPI explicit FileOpenMode(char const* p);

    // symbol: ?cModeWide@FileOpenMode@Core@@QEAAPEB_WXZ
    MCAPI wchar_t const* cModeWide();

    // NOLINTEND
};

}; // namespace Core
