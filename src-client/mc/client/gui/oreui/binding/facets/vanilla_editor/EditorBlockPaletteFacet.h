#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
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
    MCAPI explicit EditorBlockPaletteFacet(::Editor::ServiceProviderCollection* services);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::ServiceProviderCollection* services);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
