#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

struct EditorStructureMetadataQueryParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkbeeab5;
    ::ll::UntypedStorage<8, 32> mUnke1b7c6;
    ::ll::UntypedStorage<8, 40> mUnka6558f;
    ::ll::UntypedStorage<8, 40> mUnkeffe77;
    ::ll::UntypedStorage<8, 40> mUnkc8f5c7;
    ::ll::UntypedStorage<4, 8> mUnkefbac6;
    ::ll::UntypedStorage<1, 2> mUnk194cee;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorStructureMetadataQueryParams();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EditorStructureMetadataQueryParams(::Editor::EditorStructureMetadataQueryParams&&);

    MCNAPI EditorStructureMetadataQueryParams(::Editor::EditorStructureMetadataQueryParams const&);

    MCNAPI ::Editor::EditorStructureMetadataQueryParams& operator=(::Editor::EditorStructureMetadataQueryParams const&);

    MCNAPI ::Editor::EditorStructureMetadataQueryParams& operator=(::Editor::EditorStructureMetadataQueryParams&&);

    MCNAPI ~EditorStructureMetadataQueryParams();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::EditorStructureMetadataQueryParams&&);

    MCNAPI void* $ctor(::Editor::EditorStructureMetadataQueryParams const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
