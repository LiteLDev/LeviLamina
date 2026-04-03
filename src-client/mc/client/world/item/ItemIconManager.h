#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AtlasItemManager;
class ItemRegistryRef;
class ItemStackBase;
class ResourceLocation;
class TextureAtlasItem;
struct ResolvedItemIconInfo;
struct TextureUVCoordinateSet;
namespace cg { class TextureSetImageContainer; }
// clang-format on

class ItemIconManager {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void clearTextureTessellatorData();

    MCAPI static ::TextureUVCoordinateSet const& getIcon(::ResolvedItemIconInfo const& texInfo, bool);

    MCAPI static ::TextureUVCoordinateSet const&
    getIcon(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane);

    MCAPI static ::TextureAtlasItem const& getTextureItem(::std::string const& name);

    MCAPI static ::TextureUVCoordinateSet const& getTextureUVCoordinateSet(::std::string const& name, int id);

    MCAPI static void initTextureTessellatorData(
        ::ItemRegistryRef                                                          registry,
        ::std::unordered_map<::ResourceLocation, ::cg::TextureSetImageContainer>&& availableIconTextures
    );

    MCAPI static bool trySetIconInfo(::std::string const& iconName, int& outFrameCount);

    MCAPI static void updateTextureTessellatorDataForHotReload(
        ::std::unordered_map<::ResourceLocation, ::cg::TextureSetImageContainer>&& maybeUpdatedTextures
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::TextureUVCoordinateSet const& mInvalidTextureUVCoordinateSet();

    MCAPI static ::std::weak_ptr<::AtlasItemManager>& mItemTextureItems();

    MCAPI static ::std::unordered_map<::ResourceLocation, ::cg::TextureSetImageContainer>&
    mTextureTessellatorSourceData();

    MCAPI static ::std::unordered_map<::std::string, ::TextureUVCoordinateSet>& mUnstoredFrameSet();
    // NOLINTEND
};
