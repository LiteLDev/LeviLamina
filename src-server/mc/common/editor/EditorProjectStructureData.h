#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/StructureData.h"

namespace Editor {

struct EditorProjectStructureData : public ::Editor::StructureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 408> mUnkb3f16f;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorProjectStructureData& operator=(EditorProjectStructureData const&);
    EditorProjectStructureData(EditorProjectStructureData const&);
    EditorProjectStructureData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EditorProjectStructureData(::std::string strucNamespace, ::std::string name);

    MCNAPI ~EditorProjectStructureData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string strucNamespace, ::std::string name);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
