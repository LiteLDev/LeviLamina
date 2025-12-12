#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemRegistryRef;
class ItemStackBase;
class ResourceLocation;
class TextureAtlasItem;
struct AtlasItemManager;
struct ResolvedItemIconInfo;
struct TextureUVCoordinateSet;
namespace cg { class TextureSetImageContainer; }
// clang-format on

class ItemIconManager {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TextureUVCoordinateSet const& getIcon(::ResolvedItemIconInfo const& texInfo, bool);

    MCNAPI static ::TextureUVCoordinateSet const&
    getIcon(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane);

    MCNAPI static ::TextureAtlasItem const& getTextureItem(::std::string const& name);

    MCNAPI static ::TextureUVCoordinateSet const& getTextureUVCoordinateSet(::std::string const& name, int id);

    MCNAPI static void initTextureTessellatorData(
        ::ItemRegistryRef                                                          registry,
        ::std::unordered_map<::ResourceLocation, ::cg::TextureSetImageContainer>&& availableIconTextures
    );

    MCNAPI static bool trySetIconInfo(::std::string const& iconName, int& outFrameCount);

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
