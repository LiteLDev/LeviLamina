#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/shared_types/v1_21_120/biome/BiomeJsonDocument.h"
#include "mc/world/level/biome/glue/BiomeJsonDocumentGlue.h"

// auto generated forward declare list
// clang-format off
class BedrockLoadContext;
class BiomeRegistry;
class LinkedAssetValidator;
struct BiomeJsonDocumentGlue;
namespace Core { class Path; }
namespace Puv { class Input; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class BiomeJsonDocumentLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        192,
        ::Puv::
            SlicedLoader<::SharedTypes::v1_21_120::BiomeJsonDocument::BiomeJsonObject, ::BedrockLoadContext, nullptr_t>>
        mPuvBiomeLoader;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeJsonDocumentLoader();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BiomeJsonDocumentLoader(
        ::cereal::ReflectionCtx&                           ctx,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> linkedAssetValidator,
        ::BiomeJsonDocumentGlue&                           biomeJsonDocumentGlue,
        ::BiomeRegistry const&                             biomeRegistry,
        ::Core::Path const&                                resourceName,
        bool                                               isBaseGamePack,
        ::std::unordered_map<::std::string, ::std::unique_ptr<::BiomeJsonDocumentGlue::ResolvedBiomeData>>&
            biomeIdToResolvedData
    );

    MCAPI void load(::Puv::Input const& input) const;

    MCAPI ~BiomeJsonDocumentLoader();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::cereal::ReflectionCtx&                           ctx,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> linkedAssetValidator,
        ::BiomeJsonDocumentGlue&                           biomeJsonDocumentGlue,
        ::BiomeRegistry const&                             biomeRegistry,
        ::Core::Path const&                                resourceName,
        bool                                               isBaseGamePack,
        ::std::unordered_map<::std::string, ::std::unique_ptr<::BiomeJsonDocumentGlue::ResolvedBiomeData>>&
            biomeIdToResolvedData
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
