#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

struct EditorRegistryFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkaab233;
    ::ll::UntypedStorage<8, 32> mUnk522137;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorRegistryFile& operator=(EditorRegistryFile const&);
    EditorRegistryFile();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EditorRegistryFile(::Editor::Services::EditorRegistryFile const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Services::EditorRegistryFile const&);
    // NOLINTEND
};

} // namespace Editor::Services
