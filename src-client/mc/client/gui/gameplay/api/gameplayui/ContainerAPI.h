#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/gameplay/api/gameplayui/AnvilInfo.h"
#include "mc/client/gui/gameplay/data/gameplayui/ChestType.h"
#include "mc/client/gui/gameplay/data/gameplayui/ContainerColorMode.h"
#include "mc/client/gui/gameplay/data/gameplayui/ContainerInteractionsHandler.h"
#include "mc/client/gui/gameplay/data/gameplayui/ContainerItemType.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/SlotData.h"
#include "mc/world/containers/controllers/ItemCraftType.h"
#include "mc/world/item/ItemGroup.h"
#include "mc/world/item/ItemInstance.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class AnvilContainerManagerModel;
class BrewingStandContainerManagerModel;
class ChestContainerManagerModel;
class ContainerManagerController;
class ContainerModel;
class CraftingContainerManagerModel;
class DispenserContainerManagerModel;
class DropperContainerManagerModel;
class FurnaceContainerManagerModel;
class GrindstoneContainerManagerModel;
class HopperContainerManagerModel;
class ItemRegistryRef;
class ItemStackBase;
class LocalPlayer;
class Trade2ContainerManagerModel;
namespace GameplayUI { struct BrewingStandInfo; }
namespace GameplayUI { struct ContainerAction; }
namespace GameplayUI { struct ContainerInteractionsContext; }
namespace GameplayUI { struct ContainerItem; }
namespace GameplayUI { struct TradeOfferInfo; }
namespace GameplayUI { struct TradeOverview; }
namespace GameplayUI { struct TradeTierInfo; }
// clang-format on

namespace GameplayUI {

class ContainerAPI {
public:
    // ContainerAPI inner types declare
    // clang-format off
    struct SplitMultipleState;
    struct SplitSingleState;
    // clang-format on

    // ContainerAPI inner types define
    struct SplitMultipleState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 136, ::ItemGroup> distributionSource;
        ::ll::TypedStorage<8, 40, ::SlotData>   lastPlaceAllSlot;
        ::ll::TypedStorage<4, 4, int>           lastPlaceAllAmount;
        // NOLINTEND
    };

    struct SplitSingleState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, ::SlotData> lastPlaceOneSelectedSlot;
        ::ll::TypedStorage<8, 40, ::SlotData> lastPlaceOneDestinationSlot;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LocalPlayer*>                                        mLocalPlayer;
    ::ll::TypedStorage<8, 64, ::std::function<::ItemRegistryRef()>>                 mGetItemRegistryRef;
    ::ll::TypedStorage<4, 12, ::GameplayUI::ContainerInteractionsHandler>           mInteractionsHandler;
    ::ll::TypedStorage<8, 128, ::ItemInstance>                                      mSplitMultipleItemTemplate;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ContainerManagerController>>       mContainerManagerController;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::AnvilContainerManagerModel>>        mAnvilContainerManagerModel;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::BrewingStandContainerManagerModel>> mBrewingStandContainerManagerModel;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::ChestContainerManagerModel>>        mChestContainerManagerModel;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::CraftingContainerManagerModel>>     mCraftingContainerManagerModel;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::FurnaceContainerManagerModel>>      mFurnaceContainerManagerModel;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::GrindstoneContainerManagerModel>>   mGrindstoneContainerManagerModel;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::HopperContainerManagerModel>>       mHopperContainerManagerModel;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::DropperContainerManagerModel>>      mDropperContainerManagerModel;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::DispenserContainerManagerModel>>    mDispenserContainerManagerModel;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::Trade2ContainerManagerModel>>       mTrade2ContainerManagerModel;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                           mContainerBlockPos;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                                       mUniqueActorId;
    ::ll::TypedStorage<8, 112, ::GameplayUI::AnvilInfo>                             mAnvilInfo;
    ::ll::TypedStorage<8, 184, ::GameplayUI::ContainerAPI::SplitMultipleState>      mSplitMultipleState_DEPRECATED;
    ::ll::TypedStorage<8, 88, ::std::optional<::GameplayUI::ContainerAPI::SplitSingleState>>
        mSplitSingleState_DEPRECATED;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::GameplayUI::ContainerItem
    _containerItemFromItemStack(::ItemStackBase const& item, ::GameplayUI::ContainerItemType containerItemType) const;

    MCAPI void _doContainerAction(::GameplayUI::ContainerAction const& action);

    MCAPI ::GameplayUI::ContainerInteractionsContext
    _getInteractionsContext(::ContainerEnumName container, int slot, bool isDoubleClick, bool isShiftClick) const;

    MCAPI void _playSound(::SharedTypes::Legacy::LevelSoundEvent eventName) const;

    MCAPI void _playSound(::std::string const& soundName) const;

    MCAPI void _recipeAutoCraft(::ContainerEnumName collectionName, int collectionIndex, ::ItemCraftType craftType);

    MCAPI ::std::shared_ptr<::ContainerModel> _tryGetContainerModel(::ContainerEnumName containerName) const;

    MCAPI void _tryUpdateCraftingContainer();

    MCAPI void autoPlaceItems_DEPRECATED(::ContainerEnumName sourceName, int sourceIndex);

    MCAPI void closeContainer();

    MCAPI void coalesceItems(::ContainerEnumName destinationName, int destinationIndex, ::ContainerEnumName sourceName);

    MCAPI void coalesceOrAutoPlaceItems_DEPRECATED(::ContainerEnumName destinationName, int destinationIndex);

    MCAPI void dropAllItems_DEPRECATED(::ContainerEnumName sourceName, int sourceIndex);

    MCAPI void dropOneItem_DEPRECATED(::ContainerEnumName sourceName, int sourceIndex);

    MCAPI ::std::optional<::GameplayUI::AnvilInfo> getAnvilInfo() const;

    MCAPI ::std::optional<::GameplayUI::BrewingStandInfo> getBrewingStandInfo() const;

    MCAPI ::std::vector<::GameplayUI::ContainerItem> getBundleContent(int bundleID) const;

    MCAPI ::std::optional<::GameplayUI::ChestType> getChestType() const;

    MCAPI ::std::optional<::GameplayUI::ContainerColorMode> getContainerColorMode();

    MCAPI ::std::optional<::GameplayUI::ContainerItem>
    getContainerItem(::ContainerEnumName containerName, int index) const;

    MCAPI ::std::string getContainerName() const;

    MCAPI ::std::optional<::GameplayUI::ContainerItem>
    getCraftingScreenContainerItem(::ContainerEnumName containerName, int index) const;

    MCAPI ::std::string getRecipeBookSearchString() const;

    MCAPI ::GameplayUI::TradeOfferInfo getTradeOfferInfo(int tradeTier, int tradeIndex) const;

    MCAPI ::GameplayUI::TradeOverview getTradeOverview() const;

    MCAPI ::GameplayUI::ContainerItem getTradeScreenResultPreviewContainerItem(int index) const;

    MCAPI ::GameplayUI::TradeTierInfo getTradeTierInfo(int tradeTier) const;

    MCAPI void handleSlotMouseDrag(int button, ::ContainerEnumName container, int slot);

    MCAPI void
    handleSlotMousePress(int button, ::ContainerEnumName container, int slot, bool isDoubleClick, bool isShiftClick);

    MCAPI void handleSlotMouseRelease(int button, ::ContainerEnumName container, int slot);

    MCAPI void onPlayerOpenContainer(
        ::SharedTypes::Legacy::ContainerType containerType,
        ::BlockPos const&                    blockPos,
        ::ActorUniqueID const&               uniqueId
    );

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

    MCAPI void setAnvilPreviewItemName(::std::string const& name);

    MCAPI void setDistributeAllSource_DEPRECATED(::ContainerEnumName sourceName, int sourceIndex);

    MCAPI void setRecipeBookFiltering(bool isFiltering);

    MCAPI void setRecipeBookSearchString(::std::string const& searchText);

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

    MCAPI ~ContainerAPI();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace GameplayUI
