#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class FileOpenMode {
public:
    // member variables
    // NOLINTBEGIN
    bool mUnkd21c33 : 1;
    bool mUnkb28032 : 1;
    bool mUnk379bb9 : 1;
    bool mUnke8464a : 1;
    bool mUnkac531a : 1;
    bool mUnkf14fe5 : 1;
    bool mUnk7660af : 1;
    // NOLINTEND

public:
    // prevent constructor by default
    FileOpenMode& operator=(FileOpenMode const&);
    FileOpenMode(FileOpenMode const&);
    FileOpenMode();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit FileOpenMode(char const* p);

    MCAPI wchar_t const* cModeWide();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(char const* p);
    // NOLINTEND
};

} // namespace Core
