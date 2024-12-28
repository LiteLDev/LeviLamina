#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
class ResourceLocationPair;
namespace cg { class CompressedImageBuffer; }
namespace mce { struct Image; }
// clang-format on

namespace TextureSetHelpers {

class TextureSetDefinitionLoader {
public:
    // TextureSetDefinitionLoader inner types declare
    // clang-format off
    class ResourceHelper;
    // clang-format on

    // TextureSetDefinitionLoader inner types define
    enum class LoadMode : int {
        ExplicitDefinitionOnly = 0,
        ImageDescription       = 1,
        AllLayers              = 2,
    };

    enum class ColorPipeline : int {
        Classic = 0,
        Pbr     = 1,
    };

    class ResourceHelper {
    public:
        // prevent constructor by default
        ResourceHelper& operator=(ResourceHelper const&);
        ResourceHelper(ResourceHelper const&);
        ResourceHelper();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~ResourceHelper();

        // vIndex: 1
        virtual ::ResourceLocation getBackCompatResourceLocation(::ResourceLocation const&) const;

        // vIndex: 2
        virtual ::std::optional<uint> getPackStackIndexOfNoExtensionOrImage(::ResourceLocation const&) const;

        // vIndex: 3
        virtual ::std::optional<uint> getPackStackIndexOfTextureSet(::ResourceLocation const&) const;

        // vIndex: 4
        virtual bool
        loadResourceOfExtensions(::ResourceLocationPair const&, ::std::string&, ::gsl::span<::std::string const>) const;

        // vIndex: 5
        virtual bool loadResource(::ResourceLocation const&, ::std::string&) const;

        // vIndex: 6
        virtual bool loadImageFromMemory(::mce::Image&, ::std::string const&) const;

        // vIndex: 7
        virtual bool loadCompressedImageFromMemory(::cg::CompressedImageBuffer&, ::std::string const&) const;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCAPI ::ResourceLocation $getBackCompatResourceLocation(::ResourceLocation const&) const;

        MCAPI ::std::optional<uint> $getPackStackIndexOfNoExtensionOrImage(::ResourceLocation const&) const;

        MCAPI ::std::optional<uint> $getPackStackIndexOfTextureSet(::ResourceLocation const&) const;

        MCAPI bool
        $loadResourceOfExtensions(::ResourceLocationPair const&, ::std::string&, ::gsl::span<::std::string const>)
            const;

        MCAPI bool $loadResource(::ResourceLocation const&, ::std::string&) const;

        MCAPI bool $loadImageFromMemory(::mce::Image&, ::std::string const&) const;

        MCAPI bool $loadCompressedImageFromMemory(::cg::CompressedImageBuffer&, ::std::string const&) const;
        // NOLINTEND
    };

    enum class LoadImageLayerResult : int {
        Ok           = 0,
        NoFile       = 1,
        NoLayer      = 2,
        ErrorLoading = 3,
    };

public:
    // prevent constructor by default
    TextureSetDefinitionLoader& operator=(TextureSetDefinitionLoader const&);
    TextureSetDefinitionLoader(TextureSetDefinitionLoader const&);
    TextureSetDefinitionLoader();
};

} // namespace TextureSetHelpers
