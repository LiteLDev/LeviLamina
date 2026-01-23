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
    ::ll::UntypedStorage<8, 8>  mUnk9d4627;
    ::ll::UntypedStorage<8, 16> mUnk559a9c;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorJigsawRegistry& operator=(EditorJigsawRegistry const&);
    EditorJigsawRegistry(EditorJigsawRegistry const&);
    EditorJigsawRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EditorJigsawRegistry(
        ::std::unique_ptr<::JigsawStructureRegistry>                                                          registry,
        ::std::map<::Editor::Services::JigsawJsonType, ::std::vector<::Editor::Services::EditorRegistryFile>> jigsawJson
    );

    MCNAPI ~EditorJigsawRegistry();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::unique_ptr<::JigsawStructureRegistry>                                                          registry,
        ::std::map<::Editor::Services::JigsawJsonType, ::std::vector<::Editor::Services::EditorRegistryFile>> jigsawJson
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Services
