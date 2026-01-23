#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/structure/StructureData.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class EditorStructureTemplate; }
// clang-format on

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

    MCNAPI EditorProjectStructureData(
        ::std::string                            strucNamespace,
        ::std::string                            name,
        ::Editor::EditorStructureTemplate const& structureTemplate
    );

    MCNAPI ~EditorProjectStructureData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string strucNamespace, ::std::string name);

    MCNAPI void*
    $ctor(::std::string strucNamespace, ::std::string name, ::Editor::EditorStructureTemplate const& structureTemplate);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor
