#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/StructureData.h"

namespace Editor {

struct EditorFileStructureData : public ::Editor::StructureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkaadce8;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorFileStructureData& operator=(EditorFileStructureData const&);
    EditorFileStructureData(EditorFileStructureData const&);
    EditorFileStructureData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EditorFileStructureData(::std::string strucNamespace, ::std::string name, ::std::string path);

    MCNAPI ~EditorFileStructureData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string strucNamespace, ::std::string name, ::std::string path);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor
