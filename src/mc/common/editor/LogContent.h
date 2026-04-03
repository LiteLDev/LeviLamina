#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

struct LogContent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnkc5c790;
    ::ll::UntypedStorage<8, 80> mUnk4062c3;
    // NOLINTEND

public:
    // prevent constructor by default
    LogContent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LogContent(::Editor::LogContent&&);

    MCNAPI LogContent(::Editor::LogContent const&);

    MCNAPI ::Editor::LogContent& operator=(::Editor::LogContent&&);

    MCNAPI ::Editor::LogContent& operator=(::Editor::LogContent const&);

    MCNAPI ~LogContent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::LogContent&&);

    MCNAPI void* $ctor(::Editor::LogContent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor
