#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/JigsawJsonType.h"

// auto generated forward declare list
// clang-format off
class JigsawStructureRegistry;
namespace Editor::Services { struct EditorRegistryFile; }
// clang-format on

namespace Editor::Services {

struct EditorJigsawRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk229b3b;
    ::ll::UntypedStorage<8, 16> mUnk2ff257;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorJigsawRegistry& operator=(EditorJigsawRegistry const&);
    EditorJigsawRegistry(EditorJigsawRegistry const&);
    EditorJigsawRegistry();
};

} // namespace Editor::Services
