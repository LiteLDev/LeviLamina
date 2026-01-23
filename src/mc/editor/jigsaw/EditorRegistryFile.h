#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

struct EditorRegistryFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk5a5bbd;
    ::ll::UntypedStorage<8, 32> mUnk3ab09d;
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
