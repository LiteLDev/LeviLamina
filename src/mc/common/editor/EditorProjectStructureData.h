#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/StructureData.h"

namespace Editor {

struct EditorProjectStructureData : public ::Editor::StructureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 536> mUnkb3f16f;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorProjectStructureData& operator=(EditorProjectStructureData const&);
    EditorProjectStructureData(EditorProjectStructureData const&);
    EditorProjectStructureData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EditorProjectStructureData(::std::string const& strucNamespace, ::std::string const& name);

    MCNAPI ~EditorProjectStructureData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& strucNamespace, ::std::string const& name);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor
