#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/JigsawJsonType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/levelgen/v2/JigsawStructureLoader.h"

// auto generated forward declare list
// clang-format off
class LinkedAssetValidator;
namespace Editor::Services { struct EditorRegistryFile; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class EditorJigsawStructureLoader : public ::JigsawStructureLoader {
public:
    // prevent constructor by default
    EditorJigsawStructureLoader();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EditorJigsawStructureLoader() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EditorJigsawStructureLoader(
        ::cereal::ReflectionCtx const&                     ctx,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator
    );

    MCNAPI ::std::map<::Editor::Services::JigsawJsonType, ::std::string>
    createEmptyJigsawFiles(::cereal::ReflectionCtx& ctx);

    MCNAPI void loadJigsawStructureData(
        ::std::map<::Editor::Services::JigsawJsonType, ::std::vector<::Editor::Services::EditorRegistryFile>>& data
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::cereal::ReflectionCtx const& ctx, ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
