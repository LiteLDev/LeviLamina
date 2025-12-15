#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/UIThumbnailAtlasRenderer.h"
#include "mc/client/gui/oreui/resources/AtlasIndex.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/EnableGetWeakRef.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class IClientInstance;
class ItemStack;
class TaskGroup;
struct ItemGraphics;
namespace mce { class TexturePtr; }
// clang-format on

namespace OreUI {

class UIBlockThumbnailAtlasManager : public ::EnableGetWeakRef<::OreUI::UIBlockThumbnailAtlasManager>,
                                     public ::std::enable_shared_from_this<::OreUI::UIBlockThumbnailAtlasManager> {
public:
    // UIBlockThumbnailAtlasManager inner types declare
    // clang-format off
    struct AtlasData;
    // clang-format on

    // UIBlockThumbnailAtlasManager inner types define
    struct AtlasData {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkff75e2;
    ::ll::UntypedStorage<8, 64> mUnk1f75f7;
    ::ll::UntypedStorage<8, 64> mUnk543dc9;
    ::ll::UntypedStorage<8, 64> mUnk22c9c6;
    ::ll::UntypedStorage<4, 4>  mUnkce8b22;
    ::ll::UntypedStorage<4, 4>  mUnk18e7e9;
    ::ll::UntypedStorage<8, 16> mUnk1dd445;
    // NOLINTEND

public:
    // prevent constructor by default
    UIBlockThumbnailAtlasManager& operator=(UIBlockThumbnailAtlasManager const&);
    UIBlockThumbnailAtlasManager(UIBlockThumbnailAtlasManager const&);
    UIBlockThumbnailAtlasManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UIBlockThumbnailAtlasManager(
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>     primaryClientInstance,
        ::std::unordered_map<::HashedString, ::HashedString> substitutionMap
    );

    MCNAPI bool _buildThumbnailAtlas(::TaskGroup& taskGroup, bool isResume);

    MCNAPI void _generateItemIndex(bool stripVanillaNamespace);

    MCNAPI ::mce::TexturePtr _getAtlasTexture(::ItemStack const& item, ::ItemGraphics const& itemGraphics);

    MCNAPI ::OreUI::UIBlockThumbnailAtlasManager::AtlasData&
    _getOrCreateAtlasData(::std::string_view atlasName, ::mce::TexturePtr const& texturePtr);

    MCNAPI ::mce::TexturePtr _getShulkerBoxTexture(::ItemStack const& item) const;

    MCNAPI void _unloadAtlasTextures();

    MCNAPI ::std::optional<::std::pair<::UIThumbnailAtlasRenderer::AtlasInfo, ::OreUI::AtlasIndex::ItemEntry>>
    findItemAndAtlasInfo(::std::string_view name) const;

    MCNAPI ~UIBlockThumbnailAtlasManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>     primaryClientInstance,
        ::std::unordered_map<::HashedString, ::HashedString> substitutionMap
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
