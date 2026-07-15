#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/JigsawJsonType.h"
#include "mc/world/level/levelgen/v2/JigsawStructureLoader.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Services { struct EditorRegistryFile; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class EditorJigsawStructureLoader : public ::JigsawStructureLoader {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorJigsawStructureLoader() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::map<::Editor::Services::JigsawJsonType, ::std::string>
    createEmptyJigsawFiles(::cereal::ReflectionCtx& ctx);

    MCNAPI void loadJigsawStructureData(
        ::std::map<::Editor::Services::JigsawJsonType, ::std::vector<::Editor::Services::EditorRegistryFile>>& data
    );
    // NOLINTEND
};
