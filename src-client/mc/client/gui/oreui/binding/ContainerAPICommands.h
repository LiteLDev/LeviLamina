#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/InventoryLeftTabIndex.h"

// auto generated forward declare list
// clang-format off
namespace GameplayUI { struct GameplayUIContext; }
// clang-format on

namespace OreUI {

class ContainerAPICommands : public ::OreUI::CommandGroupBase<::OreUI::ContainerAPICommands> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::GameplayUI::GameplayUIContext>> mContext;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>>                           mCloseContainer;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, int, ::ContainerEnumName, int, bool, bool>>
        mHandleSlotMousePress;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, int, ::ContainerEnumName, int>>
        mHandleSlotMouseRelease;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, int, ::ContainerEnumName, int>> mHandleSlotMouseDrag;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>>      mHandlePanelMouseRelease;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, int>> mHandleBackgroundMouseRelease;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int, ::ContainerEnumName, int>>
        mTakeAllItems;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int, ::ContainerEnumName, int>>
        mTakeOneItem;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int, ::ContainerEnumName, int>>
        mTakeHalfItems;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int, ::ContainerEnumName, int>>
        mPlaceAllItems;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int, ::ContainerEnumName, int>>
        mPlaceOneItem;
    ::ll::TypedStorage<
        8,
        168,
        ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int, ::ContainerEnumName, int, int>>
                                                                                              mPlaceAmountOfItems;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int>> mDropAllItems;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int>> mDropOneItem;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int, ::ContainerEnumName>>
                                                                                              mCoalesceItems;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int>> mCoalesceOrAutoPlaceItems;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int>> mAutoPlaceItems;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int, ::ContainerEnumName, int>>
        mSplitMultipleItems;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int, ::ContainerEnumName, int>>
        mSplitMultipleItemsTouch;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int, ::ContainerEnumName, int>>
                                                                                              mSplitSingleItem;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>>                           mResetSplitStack;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int>> mSetDistributeAllSource;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::string>>           mSetRecipeBookSearchString;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, bool>>                    mSetRecipeBookFiltering;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::InventoryLeftTabIndex>> mSetRecipeBookTab;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, int, int>>                mSelectTrade;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>>                mPullInIngredientsForSelectedTrade;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, int, int>>      mPerformAutoTrade;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::string>> mSetPreviewItemName;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void autoPlaceItems_DEPRECATED(::ContainerEnumName sourceName, int sourceIndex);

    MCAPI void closeContainer();

    MCAPI void coalesceItems(::ContainerEnumName destinationName, int destinationIndex, ::ContainerEnumName sourceName);

    MCAPI void coalesceOrAutoPlaceItems_DEPRECATED(::ContainerEnumName destinationName, int destinationIndex);

    MCAPI void dropAllItems_DEPRECATED(::ContainerEnumName sourceName, int sourceIndex);

    MCAPI void dropOneItem_DEPRECATED(::ContainerEnumName sourceName, int sourceIndex);

    MCAPI void handleBackgroundMouseRelease(int button);

    MCAPI void handlePanelMouseRelease();

    MCAPI void handleSlotMouseDrag(int button, ::ContainerEnumName container, int slot);

    MCAPI void
    handleSlotMousePress(int button, ::ContainerEnumName container, int slot, bool isDoubleClick, bool isShiftClick);

    MCAPI void handleSlotMouseRelease(int button, ::ContainerEnumName container, int slot);

    MCAPI void performAutoTrade(int tradeTier, int tradeIndex);

    MCAPI void placeAllItems_DEPRECATED(
        ::ContainerEnumName selectedName,
        int                 selectedIndex,
        ::ContainerEnumName destinationName,
        int                 destinationIndex
    );

    MCAPI void placeAmountOfItems_DEPRECATED(
        ::ContainerEnumName selectedName,
        int                 selectedIndex,
        ::ContainerEnumName destinationName,
        int                 destinationIndex,
        int                 amount
    );

    MCAPI void placeOneItem_DEPRECATED(
        ::ContainerEnumName selectedName,
        int                 selectedIndex,
        ::ContainerEnumName destinationName,
        int                 destinationIndex
    );

    MCAPI void pullInIngredientsForSelectedTrade();

    MCAPI void resetSplitStack_DEPRECATED();

    MCAPI void selectTrade(int tradeTier, int tradeIndex);

    MCAPI void setDistributeAllSource_DEPRECATED(::ContainerEnumName sourceName, int sourceIndex);

    MCAPI void setPreviewItemName(::std::string name);

    MCAPI void setRecipeBookFiltering(bool filtering);

    MCAPI void setRecipeBookSearchString(::std::string searchText);

    MCAPI void setRecipeBookTab(::InventoryLeftTabIndex tabIndex);

    MCAPI void splitMultipleItemsTouch_DEPRECATED(
        ::ContainerEnumName selectedName,
        int                 selectedIndex,
        ::ContainerEnumName destinationName,
        int                 destinationIndex
    );

    MCAPI void splitMultipleItems_DEPRECATED(
        ::ContainerEnumName selectedName,
        int                 selectedIndex,
        ::ContainerEnumName destinationName,
        int                 destinationIndex
    );

    MCAPI void splitSingleItem_DEPRECATED(
        ::ContainerEnumName sourceName,
        int                 sourceIndex,
        ::ContainerEnumName destinationName,
        int                 destinationIndex
    );

    MCAPI void takeAllItems_DEPRECATED(
        ::ContainerEnumName destinationName,
        int                 destinationIndex,
        ::ContainerEnumName sourceName,
        int                 sourceIndex
    );

    MCAPI void takeHalfItems_DEPRECATED(
        ::ContainerEnumName destinationName,
        int                 destinationIndex,
        ::ContainerEnumName sourceName,
        int                 sourceIndex
    );

    MCAPI void takeOneItem_DEPRECATED(
        ::ContainerEnumName destinationName,
        int                 destinationIndex,
        ::ContainerEnumName sourceName,
        int                 sourceIndex
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[36]> NAME();
    // NOLINTEND
};

} // namespace OreUI
