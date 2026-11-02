#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class Block;
namespace Editor { class ServiceProviderCollection; }
namespace Editor { struct EditorBlockPalette; }
namespace Editor { struct EditorBlockPaletteEventActivePaletteChanged; }
namespace Editor { struct EditorBlockPaletteEventItemUpdated; }
namespace Editor { struct EditorBlockPaletteEventPaletteRemoved; }
namespace Editor { struct EditorBlockPaletteEventPaletteUpdated; }
namespace Editor { struct EditorBlockPaletteEventSelectedItemIndexChanged; }
namespace Editor { struct ProbabilityBlockPaletteItem; }
namespace Editor { struct SimpleBlockPaletteItem; }
namespace Editor::Services { class EditorBlockPaletteServiceProvider; }
// clang-format on

namespace OreUI {

class EditorBlockPaletteFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::EditorBlockPaletteFacet> {
public:
    // EditorBlockPaletteFacet inner types declare
    // clang-format off
    struct WeightedBlock;
    struct BlockPaletteItem;
    struct BlockPalette;
    // clang-format on

    // EditorBlockPaletteFacet inner types define
    enum class BlockPaletteItemType : int {
        Simple      = 0,
        Probability = 1,
    };

    struct WeightedBlock {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> mBlockName;
        ::ll::TypedStorage<4, 4, int>            mWeight;
        // NOLINTEND
    };

    struct BlockPaletteItem {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::OreUI::EditorBlockPaletteFacet::BlockPaletteItemType>          mType;
        ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                                 mDisplayName;
        ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                                 mBlockName;
        ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::EditorBlockPaletteFacet::WeightedBlock>> mWeightedBlockList;
        // NOLINTEND
    };

    struct BlockPalette {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 48, ::HashedString>                                                        mId;
        ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                                        mDisplayName;
        ::ll::TypedStorage<8, 1008, ::std::array<::OreUI::EditorBlockPaletteFacet::BlockPaletteItem, 9>> mItemList;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                           mIsDirty;
    ::ll::TypedStorage<8, 8, ::Editor::Services::EditorBlockPaletteServiceProvider*>         mBlockPaletteService;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                               mPaletteEventSub;
    ::ll::TypedStorage<8, 1096, ::OreUI::EditorBlockPaletteFacet::BlockPalette>              mActivePalette;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::EditorBlockPaletteFacet::BlockPalette>> mPaletteList;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorBlockPaletteFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorBlockPaletteFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EditorBlockPaletteFacet(::Editor::ServiceProviderCollection* services);

    MCNAPI void _handleBlockPaletteEvent(
        ::std::variant<
            ::Editor::EditorBlockPaletteEventItemUpdated,
            ::Editor::EditorBlockPaletteEventSelectedItemIndexChanged,
            ::Editor::EditorBlockPaletteEventActivePaletteChanged,
            ::Editor::EditorBlockPaletteEventPaletteUpdated,
            ::Editor::EditorBlockPaletteEventPaletteRemoved> const& evt
    );

    MCNAPI void addOrReplaceBlockPalette(::OreUI::EditorBlockPaletteFacet::BlockPalette const& newData);

    MCNAPI ::OreUI::EditorBlockPaletteFacet::BlockPalette const& getActivePalette() const;

    MCNAPI int getActivePaletteSelectedItemIndex() const;

    MCNAPI ::std::vector<::OreUI::EditorBlockPaletteFacet::BlockPalette> const& getPaletteList() const;

    MCNAPI void removeBlockPalette(::HashedString const& paletteId);

    MCNAPI void setActivePalette(::HashedString const& paletteId);

    MCNAPI void setActivePaletteSelectedItemIndex(int index);

    MCNAPI void updateBlockPaletteItem(
        ::HashedString const&                                     paletteId,
        int                                                       index,
        ::OreUI::EditorBlockPaletteFacet::BlockPaletteItem const& newData
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::string _getNamespaceCorrectedName(::Block const* block);

    MCNAPI static ::OreUI::EditorBlockPaletteFacet::BlockPalette
    convertToFacetPalette(::Editor::EditorBlockPalette const& nativePalette);

    MCNAPI static ::std::variant<::Editor::SimpleBlockPaletteItem, ::Editor::ProbabilityBlockPaletteItem>
    getPaletteItemAsVariant(::OreUI::EditorBlockPaletteFacet::BlockPaletteItem const& facetItem);

    MCNAPI static ::OreUI::EditorBlockPaletteFacet::BlockPaletteItem getPaletteItemFromVariant(
        ::std::variant<::Editor::SimpleBlockPaletteItem, ::Editor::ProbabilityBlockPaletteItem> const& variantItem
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ServiceProviderCollection* services);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND
};

} // namespace OreUI
