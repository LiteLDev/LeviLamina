#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/image/ImageFormat.h"
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
namespace mce { class ImageResourceLoader; }
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
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::ImageResourceLoader>> mImageResourceLoader;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
#ifdef LL_PLAT_S
        virtual ~ResourceHelper() = default;
#else // LL_PLAT_C
        virtual ~ResourceHelper();
#endif

#ifdef LL_PLAT_S
        virtual ::ResourceLocation getBackCompatResourceLocation(::ResourceLocation const&) const;
#else // LL_PLAT_C
        virtual ::ResourceLocation getBackCompatResourceLocation(::ResourceLocation const& resourceLocation) const;
#endif

#ifdef LL_PLAT_S
        virtual ::std::optional<uint> getPackStackIndexOfNoExtensionOrImage(::ResourceLocation const&) const;
#else // LL_PLAT_C
        virtual ::std::optional<uint>
        getPackStackIndexOfNoExtensionOrImage(::ResourceLocation const& resourceLocation) const;
#endif

#ifdef LL_PLAT_S
        virtual ::std::optional<uint> getPackStackIndexOfTextureSet(::ResourceLocation const&) const;
#else // LL_PLAT_C
        virtual ::std::optional<uint> getPackStackIndexOfTextureSet(::ResourceLocation const& resourceLocation) const;
#endif

#ifdef LL_PLAT_S
        virtual bool
        loadResourceOfExtensions(::ResourceLocationPair const&, ::std::string&, ::gsl::span<::std::string const>) const;
#else // LL_PLAT_C
        virtual bool loadResourceOfExtensions(
            ::ResourceLocationPair const&    resourceLocationPair,
            ::std::string&                   resourceStream,
            ::gsl::span<::std::string const> extensions
        ) const;
#endif

#ifdef LL_PLAT_S
        virtual bool loadResource(::ResourceLocation const&, ::std::string&) const;
#else // LL_PLAT_C
        virtual bool loadResource(::ResourceLocation const& resourceLocation, ::std::string& resourceStream) const;
#endif

#ifdef LL_PLAT_S
        virtual bool loadImageResourceFromMemory(
            ::std::shared_ptr<::cg::ImageResource>&,
            ::std::string const&,
            ::ResourceLocationPair const&,
            ::mce::ImageFormat const&
        ) const;
#else // LL_PLAT_C
        virtual bool loadImageResourceFromMemory(
            ::std::shared_ptr<::cg::ImageResource>& out,
            ::std::string const&                    buffer,
            ::ResourceLocationPair const&           resourceLocationPair,
            ::mce::ImageFormat const&               desiredImageFormat
        ) const;
#endif

#ifdef LL_PLAT_S
        virtual bool loadCompressedImageFromMemory(::cg::CompressedImageBuffer&, ::std::string const&) const;
#else // LL_PLAT_C
        virtual bool loadCompressedImageFromMemory(::cg::CompressedImageBuffer& out, ::std::string const& buffer) const;
#endif

        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCAPI ::ResourceLocation $getBackCompatResourceLocation(::ResourceLocation const& resourceLocation) const;

        MCAPI ::std::optional<uint>
        $getPackStackIndexOfNoExtensionOrImage(::ResourceLocation const& resourceLocation) const;

        MCAPI ::std::optional<uint> $getPackStackIndexOfTextureSet(::ResourceLocation const& resourceLocation) const;

        MCAPI bool $loadResourceOfExtensions(
            ::ResourceLocationPair const&    resourceLocationPair,
            ::std::string&                   resourceStream,
            ::gsl::span<::std::string const> extensions
        ) const;

        MCAPI bool $loadResource(::ResourceLocation const& resourceLocation, ::std::string& resourceStream) const;

        MCAPI bool $loadImageResourceFromMemory(
            ::std::shared_ptr<::cg::ImageResource>& out,
            ::std::string const&                    buffer,
            ::ResourceLocationPair const&           resourceLocationPair,
            ::mce::ImageFormat const&               desiredImageFormat
        ) const;

        MCAPI bool $loadCompressedImageFromMemory(::cg::CompressedImageBuffer& out, ::std::string const& buffer) const;
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
#ifdef LL_PLAT_C
    MCAPI static ::TextureSetHelpers::TextureSetDefinitionLoader::LoadImageLayerResult _addImageToLayer(
        ::std::shared_ptr<::cg::TextureSetDefinition>                          textureSetDefinition,
        ::cg::TextureSetLayerType                                              layerType,
        ::ResourceLocationPair const&                                          resourceLocationPair,
        ::TextureSetHelpers::TextureSetDefinitionLoader::ResourceHelper const& resourceHelper
    );

    MCAPI static ::TextureSetHelpers::TextureSetDefinitionLoader::LoadImageLayerResult _loadImageLayer(
        ::std::shared_ptr<::cg::TextureSetDefinition>                          textureSetDefinition,
        ::Bedrock::NotNullNonOwnerPtr<::cg::TextureSetLayerDefinition const>   layer,
        ::TextureSetHelpers::TextureSetDefinitionLoader::ResourceHelper const& resourceHelper
    );

    MCAPI static ::TextureSetHelpers::TextureSetDefinitionLoader::LoadImageLayerResult _loadImageLayer(
        ::std::shared_ptr<::cg::TextureSetDefinition>                          textureSetDefinition,
        ::cg::TextureSetLayerType                                              layerType,
        ::TextureSetHelpers::TextureSetDefinitionLoader::ResourceHelper const& resourceHelper
    );

    MCAPI static bool _loadImageLayers(
        ::ResourceLocation const&                                        textureSetDefinition,
        ::std::shared_ptr<::cg::TextureSetDefinition>                    loadMode,
        ::TextureSetHelpers::TextureSetDefinitionLoader::LoadMode const& resourceHelper,
        ::TextureSetHelpers::TextureSetDefinitionLoader::ColorPipeline const&,
        ::TextureSetHelpers::TextureSetDefinitionLoader::ResourceHelper const&
    );

    MCAPI static ::std::shared_ptr<::cg::TextureSetDefinition> loadOrCreateTextureSetDefinition(
        ::ResourceLocation const&                                              resourceLocation,
        ::TextureSetHelpers::TextureSetDefinitionLoader::LoadMode const&       loadMode,
        ::TextureSetHelpers::TextureSetDefinitionLoader::ColorPipeline const&  colorMode,
        ::cg::ImageBuffer const&                                               missingImage,
        ::TextureSetHelpers::TextureSetDefinitionLoader::ResourceHelper const& resourceHelper,
        bool                                                                   needsDecompression
    );

    MCAPI static ::std::shared_ptr<::cg::TextureSetDefinition> loadOrCreateTextureSetDefinition(
        ::ResourceLocationPair const&                                          resourceLocationPair,
        ::TextureSetHelpers::TextureSetDefinitionLoader::LoadMode const&       loadMode,
        ::TextureSetHelpers::TextureSetDefinitionLoader::ColorPipeline const&  colorMode,
        ::cg::ImageBuffer const*                                               optionalMissingImage,
        ::TextureSetHelpers::TextureSetDefinitionLoader::ResourceHelper const& resourceHelper,
        bool                                                                   needsDecompression
    );

    MCAPI static ::std::shared_ptr<::cg::TextureSetDefinition> makeDefinitionFromImageBuffer(
        ::ResourceLocationPair const& resourceLocationPair,
        ::cg::ImageBuffer const*      optionalImageBuffer,
        bool                          isMissingTexture,
        bool                          needsDecompression
    );
#endif
    // NOLINTEND
};

} // namespace TextureSetHelpers
