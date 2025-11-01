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
    EditorRegistryFile& operator=(EditorRegistryFile const&);
    EditorRegistryFile(EditorRegistryFile const&);
    EditorRegistryFile();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EditorRegistryFile(::std::string const& fileName, ::std::string const& fileJson);

    MCNAPI ::Editor::Services::EditorRegistryFile& operator=(::Editor::Services::EditorRegistryFile&&);

    MCNAPI ~EditorRegistryFile();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& fileName, ::std::string const& fileJson);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Services
