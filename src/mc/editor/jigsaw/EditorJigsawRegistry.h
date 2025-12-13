#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

struct EditorJigsawRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk9d4627;
    ::ll::UntypedStorage<8, 16> mUnk559a9c;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorJigsawRegistry& operator=(EditorJigsawRegistry const&);
    EditorJigsawRegistry(EditorJigsawRegistry const&);
    EditorJigsawRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~EditorJigsawRegistry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Services
