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
    EditorRealmsWorld(EditorRealmsWorld const&);
    EditorRealmsWorld();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::Services::EditorRealmsWorld& operator=(::Editor::Services::EditorRealmsWorld&&);

    MCNAPI ::Editor::Services::EditorRealmsWorld& operator=(::Editor::Services::EditorRealmsWorld const&);

#ifdef LL_PLAT_C
    MCNAPI ~EditorRealmsWorld();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace Editor::Services
