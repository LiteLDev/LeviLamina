#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/structure/StructureData.h"

namespace Editor {

struct EditorBPStructureData : public ::Editor::StructureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkb246e1;
    ::ll::UntypedStorage<8, 32> mUnk78652e;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorBPStructureData& operator=(EditorBPStructureData const&);
    EditorBPStructureData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EditorBPStructureData(::Editor::EditorBPStructureData const&);

    MCNAPI ~EditorBPStructureData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::EditorBPStructureData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor
