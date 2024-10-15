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
    MCAPI explicit FileOpenMode(char const* p);

    MCAPI wchar_t const* cModeWide();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(char const* p);

    // NOLINTEND
};

}; // namespace Core
