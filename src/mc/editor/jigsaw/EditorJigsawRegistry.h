#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

struct EditorJigsawRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk229b3b;
    ::ll::UntypedStorage<8, 16> mUnk2ff257;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorJigsawRegistry& operator=(EditorJigsawRegistry const&);
    EditorJigsawRegistry(EditorJigsawRegistry const&);
    EditorJigsawRegistry();
};

} // namespace Editor::Services
