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
    bool mUnk8dc531 : 1;
    bool mUnk7357bd : 1;
    // NOLINTEND

public:
    // prevent constructor by default
    FileOpenMode& operator=(FileOpenMode const&);
    FileOpenMode(FileOpenMode const&);
    FileOpenMode();

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_S void* $ctor(::std::string_view spec);
    // NOLINTEND
};

} // namespace Core
