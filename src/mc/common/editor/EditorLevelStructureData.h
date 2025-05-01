#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/StructureData.h"

namespace Editor {

struct EditorLevelStructureData : public ::Editor::StructureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk1a86d3;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorLevelStructureData& operator=(EditorLevelStructureData const&);
    EditorLevelStructureData(EditorLevelStructureData const&);
    EditorLevelStructureData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~EditorLevelStructureData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor
