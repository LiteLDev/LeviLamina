#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AtlasItemManager;
class ItemRegistryRef;
class ItemStackBase;
class ResourceLocation;
struct ResolvedItemIconInfo;
struct TextureUVCoordinateSet;
namespace cg { class TextureSetImageContainer; }
// clang-format on

class ItemIconManager {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TextureUVCoordinateSet const& getIcon(::ResolvedItemIconInfo const& texInfo, bool inInventoryPane);

    MCNAPI static ::TextureUVCoordinateSet const&
    getIcon(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane);

    MCNAPI static ::TextureUVCoordinateSet const& getTextureUVCoordinateSet(::std::string const& name, int id);

    MCNAPI static void initTextureTessellatorData(
        ::ItemRegistryRef                                                          registry,
        ::std::unordered_map<::ResourceLocation, ::cg::TextureSetImageContainer>&& availableIconTextures
    );

    MCNAPI static void updateTextureTessellatorDataForHotReload(
        ::std::unordered_map<::ResourceLocation, ::cg::TextureSetImageContainer>&& maybeUpdatedTextures
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::TextureUVCoordinateSet const& mInvalidTextureUVCoordinateSet();

    MCNAPI static ::std::weak_ptr<::AtlasItemManager>& mItemTextureItems();

    MCNAPI static ::std::unordered_map<::ResourceLocation, ::cg::TextureSetImageContainer>&
    mTextureTessellatorSourceData();

    MCNAPI static ::std::unordered_map<::std::string, ::TextureUVCoordinateSet>& mUnstoredFrameSet();
    // NOLINTEND
};
