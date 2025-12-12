#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core_graphics/TextureSetLayerType.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
class ResourceLocationPair;
namespace cg { class CompressedImageBuffer; }
namespace cg { class ImageBuffer; }
namespace cg { class ImageResource; }
namespace cg { class TextureSetDefinition; }
namespace cg { class TextureSetLayerDefinition; }
// clang-format on

namespace TextureSetHelpers {

class TextureSetDefinitionLoader {
public:
    // TextureSetDefinitionLoader inner types declare
    // clang-format off
    class ResourceHelper;
    // clang-format on

    // TextureSetDefinitionLoader inner types define
    enum class ColorPipeline : int {
        Classic = 0,
        Pbr     = 1,
    };

    enum class LoadImageLayerResult : int {
        Ok           = 0,
        NoFile       = 1,
        NoLayer      = 2,
        ErrorLoading = 3,
    };

    enum class LoadMode : int {
        ExplicitDefinitionOnly = 0,
        ImageDescription       = 1,
        AllLayers              = 2,
    };

    class ResourceHelper {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnkb9c424;
        // NOLINTEND

    public:
        // prevent constructor by default
        ResourceHelper& operator=(ResourceHelper const&);
        ResourceHelper(ResourceHelper const&);
        ResourceHelper();

    public:
        // virtual functions
        // NOLINTBEGIN
#ifdef LL_PLAT_S
        virtual ~ResourceHelper() = default;
#else // LL_PLAT_C
        virtual ~ResourceHelper();
#endif

        virtual ::ResourceLocation getBackCompatResourceLocation(::ResourceLocation const& resourceLocation) const;

        virtual ::std::optional<uint>
        getPackStackIndexOfNoExtensionOrImage(::ResourceLocation const& resourceLocation) const;

        virtual ::std::optional<uint> getPackStackIndexOfTextureSet(::ResourceLocation const& resourceLocation) const;

        virtual bool loadResourceOfExtensions(
            ::ResourceLocationPair const&    resourceLocationPair,
            ::std::string&                   resourceStream,
            ::gsl::span<::std::string const> extensions
        ) const;

        virtual bool loadResource(::ResourceLocation const& resourceLocation, ::std::string& resourceStream) const;

        virtual bool loadImageResourceFromFile(
            ::std::shared_ptr<::cg::ImageResource>& out,
            ::ResourceLocationPair const&           resourceLocationPair,
            ::gsl::span<::std::string const>        extensions
        ) const;

        virtual bool loadCompressedImageFromMemory(::cg::CompressedImageBuffer& out, ::std::string const& buffer) const;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI ::ResourceLocation $getBackCompatResourceLocation(::ResourceLocation const& resourceLocation) const;

        MCNAPI ::std::optional<uint>
        $getPackStackIndexOfNoExtensionOrImage(::ResourceLocation const& resourceLocation) const;

        MCNAPI ::std::optional<uint> $getPackStackIndexOfTextureSet(::ResourceLocation const& resourceLocation) const;

        MCNAPI bool $loadResourceOfExtensions(
            ::ResourceLocationPair const&    resourceLocationPair,
            ::std::string&                   resourceStream,
            ::gsl::span<::std::string const> extensions
        ) const;

        MCNAPI bool $loadResource(::ResourceLocation const& resourceLocation, ::std::string& resourceStream) const;

        MCNAPI bool $loadImageResourceFromFile(
            ::std::shared_ptr<::cg::ImageResource>& out,
            ::ResourceLocationPair const&           resourceLocationPair,
            ::gsl::span<::std::string const>        extensions
        ) const;

        MCNAPI bool $loadCompressedImageFromMemory(::cg::CompressedImageBuffer& out, ::std::string const& buffer) const;
#endif


        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static ::TextureSetHelpers::TextureSetDefinitionLoader::LoadImageLayerResult _addImageToLayer(
        ::std::shared_ptr<::cg::TextureSetDefinition>                          textureSetDefinition,
        ::cg::TextureSetLayerType                                              layerType,
        ::ResourceLocationPair const&                                          resourceLocationPair,
        ::TextureSetHelpers::TextureSetDefinitionLoader::ResourceHelper const& resourceHelper
    );

    MCNAPI_C static ::TextureSetHelpers::TextureSetDefinitionLoader::LoadImageLayerResult _loadImageLayer(
        ::std::shared_ptr<::cg::TextureSetDefinition>                          textureSetDefinition,
        ::Bedrock::NotNullNonOwnerPtr<::cg::TextureSetLayerDefinition const>   layer,
        ::TextureSetHelpers::TextureSetDefinitionLoader::ResourceHelper const& resourceHelper
    );

    MCNAPI_C static ::TextureSetHelpers::TextureSetDefinitionLoader::LoadImageLayerResult _loadImageLayer(
        ::std::shared_ptr<::cg::TextureSetDefinition>                          textureSetDefinition,
        ::cg::TextureSetLayerType                                              layerType,
        ::TextureSetHelpers::TextureSetDefinitionLoader::ResourceHelper const& resourceHelper
    );

    MCNAPI_C static bool _loadImageLayers(
        ::ResourceLocation const&                                        resourceLocation,
        ::std::shared_ptr<::cg::TextureSetDefinition>                    textureSetDefinition,
        ::TextureSetHelpers::TextureSetDefinitionLoader::LoadMode const& loadMode,
        ::TextureSetHelpers::TextureSetDefinitionLoader::ColorPipeline const&,
        ::TextureSetHelpers::TextureSetDefinitionLoader::ResourceHelper const& resourceHelper
    );

    MCNAPI_C static ::std::shared_ptr<::cg::TextureSetDefinition> loadOrCreateTextureSetDefinition(
        ::ResourceLocation const&                                              resourceLocation,
        ::TextureSetHelpers::TextureSetDefinitionLoader::LoadMode const&       loadMode,
        ::TextureSetHelpers::TextureSetDefinitionLoader::ColorPipeline const&  colorMode,
        ::cg::ImageBuffer const&                                               missingImage,
        ::TextureSetHelpers::TextureSetDefinitionLoader::ResourceHelper const& resourceHelper,
        bool                                                                   needsDecompression
    );

    MCNAPI_C static ::std::shared_ptr<::cg::TextureSetDefinition> loadOrCreateTextureSetDefinition(
        ::ResourceLocationPair const&                                          resourceLocationPair,
        ::TextureSetHelpers::TextureSetDefinitionLoader::LoadMode const&       loadMode,
        ::TextureSetHelpers::TextureSetDefinitionLoader::ColorPipeline const&  colorMode,
        ::cg::ImageBuffer const*                                               optionalMissingImage,
        ::TextureSetHelpers::TextureSetDefinitionLoader::ResourceHelper const& resourceHelper,
        bool                                                                   needsDecompression
    );

    MCNAPI_C static ::std::shared_ptr<::cg::TextureSetDefinition> makeDefinitionFromImageBuffer(
        ::ResourceLocationPair const& resourceLocationPair,
        ::cg::ImageBuffer const*      optionalImageBuffer,
        bool                          isMissingTexture,
        bool                          needsDecompression
    );
    // NOLINTEND
};

} // namespace TextureSetHelpers
