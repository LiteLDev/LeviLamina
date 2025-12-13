#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class LinkedAssetValidator;
class ResourcePackManager;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class JigsawStructureLoader : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk1ee9b7;
    ::ll::UntypedStorage<8, 192> mUnkeb430c;
    ::ll::UntypedStorage<8, 192> mUnk46b138;
    ::ll::UntypedStorage<8, 192> mUnka24d43;
    ::ll::UntypedStorage<8, 192> mUnkc54a45;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawStructureLoader& operator=(JigsawStructureLoader const&);
    JigsawStructureLoader(JigsawStructureLoader const&);
    JigsawStructureLoader();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~JigsawStructureLoader() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JigsawStructureLoader(
        ::cereal::ReflectionCtx const&                     ctx,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator
    );

    MCNAPI void _parseJigsawDefinitionData(::std::string_view fileWithExtension, ::std::string&& fileData);

    MCNAPI void _parseProcessorsData(::std::string_view fileWithExtension, ::std::string&& fileData);

    MCNAPI void _parseStructureSetData(::std::string_view fileWithExtension, ::std::string&& fileData);

    MCNAPI void _parseTemplatePoolsData(::std::string_view fileWithExtension, ::std::string&& fileData);

    MCNAPI void loadJigsawStructureData(::ResourcePackManager& resourcePackManager);
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
