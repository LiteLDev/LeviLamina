#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

struct EditorRealmsWorld {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf2d294;
    ::ll::UntypedStorage<8, 32> mUnk6531eb;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorRealmsWorld& operator=(EditorRealmsWorld const&);
    EditorRealmsWorld(EditorRealmsWorld const&);
    EditorRealmsWorld();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::Services::EditorRealmsWorld& operator=(::Editor::Services::EditorRealmsWorld&&);
    // NOLINTEND

};

}
