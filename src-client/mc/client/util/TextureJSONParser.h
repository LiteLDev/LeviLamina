#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
struct ActorTextureInfo;
struct ParsedTextureSet;
namespace Json { class Value; }
namespace mce { class Color; }
namespace mce { class TextureGroup; }
// clang-format on

class TextureJSONParser {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ActorTextureInfo
    getTextureInfoFromTextureSet(::std::shared_ptr<::mce::TextureGroup> textureGroup, ::Json::Value const& texture);

    MCAPI static ::ActorTextureInfo getTextureInfoFromTextureSet(
        ::std::shared_ptr<::mce::TextureGroup> textureGroup,
        ::ParsedTextureSet const&              textureSet
    );

    MCAPI static void parseTextureSet(
        ::std::shared_ptr<::mce::TextureGroup> textureGroup,
        ::Json::Value const&                   texture,
        ::ParsedTextureSet&                    outTextureSet,
        float                                  mipFadeAmount,
        ::mce::Color const&                    mipFadeColor,
        bool                                   isAdditive
    );

    MCAPI static void parseTextureSetLayers(
        ::std::shared_ptr<::mce::TextureGroup> textureGroup,
        ::ResourceLocation const&              textureSetLocation,
        ::ParsedTextureSet&                    textureSet
    );
    // NOLINTEND
};
