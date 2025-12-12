#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/biome/glue/BiomeJsonDocumentGlue.h"

// auto generated forward declare list
// clang-format off
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
    ::ll::UntypedStorage<8, 192> mUnk6b4d50;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeJsonDocumentLoader& operator=(BiomeJsonDocumentLoader const&);
    BiomeJsonDocumentLoader(BiomeJsonDocumentLoader const&);
    BiomeJsonDocumentLoader();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BiomeJsonDocumentLoader(
        ::cereal::ReflectionCtx&                           ctx,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> linkedAssetValidator,
        ::BiomeJsonDocumentGlue&                           biomeJsonDocumentGlue,
        ::BiomeRegistry const&                             biomeRegistry,
        ::Core::Path const&                                resourceName,
        bool                                               isBaseGamePack,
        ::std::unordered_map<::std::string, ::std::unique_ptr<::BiomeJsonDocumentGlue::ResolvedBiomeData>>&
            biomeIdToResolvedData
    );

    MCNAPI void load(::Puv::Input const& input) const;

    MCNAPI ~BiomeJsonDocumentLoader();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
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
    MCNAPI void $dtor();
    // NOLINTEND
};
