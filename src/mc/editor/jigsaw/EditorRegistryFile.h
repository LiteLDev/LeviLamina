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
    EditorRegistryFile(EditorRegistryFile const&);
    EditorRegistryFile();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::Services::EditorRegistryFile& operator=(::Editor::Services::EditorRegistryFile&&);

    MCNAPI ::Editor::Services::EditorRegistryFile& operator=(::Editor::Services::EditorRegistryFile const&);

    MCNAPI ~EditorRegistryFile();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Services
