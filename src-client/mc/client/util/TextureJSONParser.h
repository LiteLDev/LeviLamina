#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/TextureSetLayerType.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
struct ActorTextureInfo;
struct ParsedTextureSet;
struct ParsedTextureSetLayer;
namespace Json { class Value; }
namespace mce { class Color; }
namespace mce { class TextureGroup; }
// clang-format on

class TextureJSONParser {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ActorTextureInfo
    getTextureInfoFromTextureSet(::std::shared_ptr<::mce::TextureGroup> textureGroup, ::Json::Value const& texture);

    MCNAPI static ::ActorTextureInfo getTextureInfoFromTextureSet(
        ::std::shared_ptr<::mce::TextureGroup> textureGroup,
        ::ParsedTextureSet const&              textureSet
    );

    MCNAPI static void loadTextureSetLayer(
        ::ParsedTextureSetLayer&                   layer,
        ::Json::Value const&                       layerJsonData,
        float                                      mipFadeAmount,
        ::mce::Color const&                        mipFadeColor,
        bool                                       isAdditive,
        ::std::optional<::cg::TextureSetLayerType> textureSetLayerType
    );

    MCNAPI static void parseTextureSet(
        ::std::shared_ptr<::mce::TextureGroup> textureGroup,
        ::Json::Value const&                   texture,
        ::ParsedTextureSet&                    outTextureSet,
        float                                  mipFadeAmount,
        ::mce::Color const&                    mipFadeColor,
        bool                                   isAdditive
    );

    MCNAPI static void parseTextureSetLayers(
        ::std::shared_ptr<::mce::TextureGroup> textureGroup,
        ::ResourceLocation const&              textureSetLocation,
        ::ParsedTextureSet&                    textureSet
    );
    // NOLINTEND
};
