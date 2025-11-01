#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

struct EditorStructureMetadataDeleteEditResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk96d95f;
    ::ll::UntypedStorage<8, 40> mUnkbcccc8;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorStructureMetadataDeleteEditResult(EditorStructureMetadataDeleteEditResult const&);
    EditorStructureMetadataDeleteEditResult();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::EditorStructureMetadataDeleteEditResult& operator=(::Editor::EditorStructureMetadataDeleteEditResult const&);

    MCNAPI ::Editor::EditorStructureMetadataDeleteEditResult& operator=(::Editor::EditorStructureMetadataDeleteEditResult&&);

    MCNAPI ~EditorStructureMetadataDeleteEditResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
