#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/shared_types/v1_26_0/biome/BiomeJsonDocument.h"

// auto generated forward declare list
// clang-format off
class BedrockLoadContext;
class BiomeRegistry;
class LinkedAssetValidator;
struct BiomeJsonDocumentGlue;
struct BiomeJsonDocumentGlueResolvedBiomeData;
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
        256,
        ::Puv::SlicedLoader<
            ::SharedTypes::v1_26_0::BiomeJsonDocument::BiomeJsonObject,
            ::BedrockLoadContext,
            nullptr_t,
            ::SharedTypes::v1_26_0::BiomeJsonDocument::BiomeJsonObject>>
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
        ::std::unordered_map<::std::string, ::std::unique_ptr<::BiomeJsonDocumentGlueResolvedBiomeData>>&
             biomeIdToResolvedData,
        bool betaApis
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
        ::std::unordered_map<::std::string, ::std::unique_ptr<::BiomeJsonDocumentGlueResolvedBiomeData>>&
             biomeIdToResolvedData,
        bool betaApis
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
