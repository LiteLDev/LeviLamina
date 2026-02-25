#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/UIThumbnailAtlasRenderer.h"
#include "mc/client/gui/oreui/resources/AtlasIndex.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/EnableGetWeakRef.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class ItemStack;
class TaskGroup;
struct ItemGraphics;
namespace OreUI { struct AtlasIndex; }
namespace cg { class ImageBuffer; }
namespace mce { class Color; }
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
    struct AtlasData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 48, ::HashedString>                                          name;
        ::ll::TypedStorage<2, 2, ushort>                                                   u;
        ::ll::TypedStorage<2, 2, ushort>                                                   v;
        ::ll::TypedStorage<2, 2, ushort>                                                   rows;
        ::ll::TypedStorage<2, 2, ushort>                                                   cols;
        ::ll::TypedStorage<2, 2, ushort>                                                   maxCols;
        ::ll::TypedStorage<8, 8, uint64>                                                   count;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::UIThumbnailAtlasRenderer::AtlasInfo>> mAtlasInfo;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::cg::ImageBuffer>>                     mImageBuffer;
        // NOLINTEND

    public:
        // prevent constructor by default
        AtlasData();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI explicit AtlasData(::HashedString name);

        MCAPI AtlasData(::HashedString name, ::std::unique_ptr<::UIThumbnailAtlasRenderer::AtlasInfo>&& atlasInfo);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::HashedString name);

        MCAPI void* $ctor(::HashedString name, ::std::unique_ptr<::UIThumbnailAtlasRenderer::AtlasInfo>&& atlasInfo);
        // NOLINTEND
    };

    using AtlasInfo = ::UIThumbnailAtlasRenderer::AtlasInfo;

    using ItemAtlasInfo = ::std::pair<::UIThumbnailAtlasRenderer::AtlasInfo, ::OreUI::AtlasIndex::ItemEntry>;

    using SubstitutionMap = ::std::unordered_map<::HashedString, ::HashedString>;

    using AtlasMap =
        ::std::unordered_map<::HashedString, ::std::unique_ptr<::OreUI::UIBlockThumbnailAtlasManager::AtlasData>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>>     mClientInstance;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::HashedString>> mSubstitutions;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::std::shared_ptr<::OreUI::AtlasIndex>>>
        mAtlasIndices;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::HashedString, ::std::unique_ptr<::OreUI::UIBlockThumbnailAtlasManager::AtlasData>>>
                                                                       mAtlases;
    ::ll::TypedStorage<4, 4, ::std::atomic<int>>                       mAvailableSemaphore;
    ::ll::TypedStorage<4, 4, uint>                                     mAtlasIndex;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::mce::Color>> mBlockAverageColorMap;
    // NOLINTEND

public:
    // prevent constructor by default
    UIBlockThumbnailAtlasManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI UIBlockThumbnailAtlasManager(
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>     primaryClientInstance,
        ::std::unordered_map<::HashedString, ::HashedString> substitutionMap
    );

    MCAPI bool _buildThumbnailAtlas(::TaskGroup& taskGroup, bool isResume);

    MCAPI void _generateItemIndex(bool stripVanillaNamespace);

    MCAPI ::mce::TexturePtr _getAtlasTexture(::ItemStack const& item, ::ItemGraphics const& itemGraphics);

    MCAPI ::OreUI::UIBlockThumbnailAtlasManager::AtlasData&
    _getOrCreateAtlasData(::std::string_view atlasName, ::mce::TexturePtr const& texturePtr);

    MCAPI ::mce::TexturePtr _getShulkerBoxTexture(::ItemStack const& item) const;

    MCAPI void _unloadAtlasTextures();

    MCAPI ~UIBlockThumbnailAtlasManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>     primaryClientInstance,
        ::std::unordered_map<::HashedString, ::HashedString> substitutionMap
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
