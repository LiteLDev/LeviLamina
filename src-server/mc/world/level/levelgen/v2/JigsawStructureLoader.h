#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/puv/SlicedLoader.h"

// auto generated forward declare list
// clang-format off
class BedrockLoadContext;
class LinkedAssetValidator;
class ResourcePackManager;
namespace SharedTypes::v1_21_20 { struct JigsawStructureData; }
namespace SharedTypes::v1_21_20::JigsawStructureDefinition { struct Contents; }
namespace SharedTypes::v1_21_20::JigsawStructureProcessorList { struct Contents; }
namespace SharedTypes::v1_21_20::JigsawStructureSet { struct Contents; }
namespace SharedTypes::v1_21_20::JigsawStructureTemplatePool { struct Contents; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class JigsawStructureLoader : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SharedTypes::v1_21_20::JigsawStructureData>> mJigsawStructureData;
    ::ll::TypedStorage<8, 192, ::Puv::SlicedLoader<::SharedTypes::v1_21_20::JigsawStructureProcessorList::Contents, ::BedrockLoadContext, nullptr_t>> mProcessorListLoader;
    ::ll::TypedStorage<8, 192, ::Puv::SlicedLoader<::SharedTypes::v1_21_20::JigsawStructureTemplatePool::Contents, ::BedrockLoadContext, nullptr_t>> mTemplatePoolLoader;
    ::ll::TypedStorage<8, 192, ::Puv::SlicedLoader<::SharedTypes::v1_21_20::JigsawStructureDefinition::Contents, ::BedrockLoadContext, nullptr_t>> mJigsawDefinitionLoader;
    ::ll::TypedStorage<8, 192, ::Puv::SlicedLoader<::SharedTypes::v1_21_20::JigsawStructureSet::Contents, ::BedrockLoadContext, nullptr_t>> mJigsawSetLoader;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawStructureLoader();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~JigsawStructureLoader() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI JigsawStructureLoader(::cereal::ReflectionCtx const& ctx, ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator);

    MCAPI void _parseJigsawDefinitionData(::std::string_view fileWithExtension, ::std::string&& fileData);

    MCAPI void _parseProcessorsData(::std::string_view fileWithExtension, ::std::string&& fileData);

    MCAPI void _parseStructureSetData(::std::string_view fileWithExtension, ::std::string&& fileData);

    MCAPI void _parseTemplatePoolsData(::std::string_view fileWithExtension, ::std::string&& fileData);

    MCAPI void loadJigsawStructureData(::ResourcePackManager& resourcePackManager);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cereal::ReflectionCtx const& ctx, ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
