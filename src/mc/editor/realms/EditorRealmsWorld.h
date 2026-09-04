#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

struct EditorRealmsWorld {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3fdb9e;
    ::ll::UntypedStorage<8, 32> mUnk5d5b20;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorRealmsWorld& operator=(EditorRealmsWorld const&);
    EditorRealmsWorld();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EditorRealmsWorld(::Editor::Services::EditorRealmsWorld const&);

    MCNAPI ::Editor::Services::EditorRealmsWorld& operator=(::Editor::Services::EditorRealmsWorld&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Services::EditorRealmsWorld const&);
    // NOLINTEND
};

} // namespace Editor::Services
