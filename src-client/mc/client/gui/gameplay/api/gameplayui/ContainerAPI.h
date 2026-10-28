#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/gameplay/api/gameplayui/AnvilInfo.h"
#include "mc/client/gui/gameplay/api/gameplayui/RecipeBookTab.h"
#include "mc/client/gui/gameplay/data/gameplayui/ChestType.h"
#include "mc/client/gui/gameplay/data/gameplayui/ContainerColorMode.h"
#include "mc/client/gui/gameplay/data/gameplayui/ContainerInteractionsHandler.h"
#include "mc/client/gui/gameplay/data/gameplayui/ContainerItemType.h"
#include "mc/client/gui/gameplay/data/gameplayui/ContainerSlot.h"
#include "mc/client/gui/oreui/input/GamepadButton.h"
#include "mc/client/gui/oreui/input/MouseButton.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/controllers/ItemCraftType.h"
#include "mc/world/item/ItemInstance.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class AnvilContainerManagerModel;
class BrewingStandContainerManagerModel;
class ChestContainerManagerModel;
class ContainerManagerController;
class ContainerModel;
class CraftingContainerManagerController;
class CraftingContainerManagerModel;
class DispenserContainerManagerModel;
class DropperContainerManagerModel;
class FurnaceContainerManagerModel;
class GrindstoneContainerManagerModel;
class GuiData;
class HopperContainerManagerModel;
class ItemRegistryRef;
class ItemStackBase;
class LocalPlayer;
class Trade2ContainerManagerModel;
namespace GameplayUI { struct BrewingStandInfo; }
namespace GameplayUI { struct ContainerAction; }
namespace GameplayUI { struct ContainerInputLegendEntry; }
namespace GameplayUI { struct ContainerInteractionsContext; }
namespace GameplayUI { struct ContainerItem; }
namespace GameplayUI { struct FurnaceInfo; }
namespace GameplayUI { struct RecipeBookTabData; }
namespace GameplayUI { struct TradeOfferInfo; }
namespace GameplayUI { struct TradeOverview; }
namespace GameplayUI { struct TradeTierInfo; }
// clang-format on

namespace GameplayUI {

class ContainerAPI {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LocalPlayer*>                                        mLocalPlayer;
    ::ll::TypedStorage<8, 64, ::std::function<::ItemRegistryRef()>>                 mGetItemRegistryRef;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::GuiData>>             mGuiData;
    ::ll::TypedStorage<4, 76, ::GameplayUI::ContainerInteractionsHandler>           mInteractionsHandler;
    ::ll::TypedStorage<8, 128, ::ItemInstance>                                      mSplitMultipleItemTemplate;
    ::ll::TypedStorage<4, 4, int>                                                   mLastPlaceAllAmount;
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
    ::ll::TypedStorage<8, 24, ::std::vector<::GameplayUI::ContainerInputLegendEntry>> mInputLegend;
    ::ll::TypedStorage<4, 12, ::std::optional<::GameplayUI::ContainerSlot>>           mFocusedContainerSlot;
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

    MCAPI void _refreshInputLegend();

    MCAPI void _resetSelectedRecipeTabIfEmpty(
        ::std::unordered_map<::std::string, ::std::shared_ptr<::ContainerModel>> const& containers
    );

    MCAPI ::std::shared_ptr<::ContainerModel> _tryGetContainerModel(::ContainerEnumName containerName) const;

    MCAPI ::CraftingContainerManagerController* _tryGetCraftingContainerManagerController() const;

    MCAPI void _tryUpdateCraftingContainer();

    MCAPI void closeContainer();

    MCAPI ::std::vector<::GameplayUI::RecipeBookTab> getActiveRecipeBookTabs() const;

    MCAPI ::std::optional<::GameplayUI::AnvilInfo> getAnvilInfo() const;

    MCAPI ::std::vector<::GameplayUI::RecipeBookTabData> getAvailableRecipeBookTabs() const;

    MCAPI ::std::optional<::GameplayUI::BrewingStandInfo> getBrewingStandInfo() const;

    MCAPI ::std::vector<::GameplayUI::ContainerItem> getBundleContent(int bundleID) const;

    MCAPI ::std::optional<::GameplayUI::ChestType> getChestType() const;

    MCAPI ::std::optional<::GameplayUI::ContainerColorMode> getContainerColorMode();

    MCAPI ::std::optional<::GameplayUI::ContainerItem>
    getContainerItem(::ContainerEnumName containerName, int index) const;

    MCAPI ::std::string getContainerName() const;

    MCAPI ::std::optional<::GameplayUI::ContainerItem> getFocusedBundle() const;

    MCAPI ::std::string getFocusedSlotTooltip() const;

    MCAPI ::std::optional<::GameplayUI::FurnaceInfo> getFurnaceInfo() const;

    MCAPI ::std::string getRecipeBookSearchString() const;

    MCAPI ::GameplayUI::ContainerItem getSelectedBundleItem() const;

    MCAPI ::GameplayUI::TradeOfferInfo getTradeOfferInfo(int tradeTier, int tradeIndex) const;

    MCAPI ::GameplayUI::TradeOverview getTradeOverview() const;

    MCAPI ::GameplayUI::TradeTierInfo getTradeTierInfo(int tradeTier) const;

    MCAPI void handleSlotGamepadDrag(::OreUI::GamepadButton button, ::ContainerEnumName container, int slot);

    MCAPI void handleSlotGamepadLongPress(::OreUI::GamepadButton button, ::ContainerEnumName container, int slot);

    MCAPI void
    handleSlotGamepadPress(::OreUI::GamepadButton button, ::ContainerEnumName container, int slot, bool isDoubleClick);

    MCAPI void handleSlotMouseDrag(::OreUI::MouseButton button, ::ContainerEnumName container, int slot);

    MCAPI void handleSlotMousePress(
        ::OreUI::MouseButton button,
        ::ContainerEnumName  container,
        int                  slot,
        bool                 isDoubleClick,
        bool                 isShiftClick
    );

    MCAPI void handleSlotMouseRelease(::OreUI::MouseButton button, ::ContainerEnumName container, int slot);

    MCAPI void handleSlotTouchDrag(::ContainerEnumName container, int slot);

    MCAPI void handleSlotTouchLongPressMove(::ContainerEnumName container, int slot, float normalizedValue);

    MCAPI void handleSlotTouchLongPressStart(::ContainerEnumName container, int slot);

    MCAPI void handleSlotTouchRelease(::ContainerEnumName container, int slot, bool isDoubleClick);

    MCAPI bool isRecipeBookAvailable() const;

    MCAPI void onPlayerOpenContainer(
        ::SharedTypes::Legacy::ContainerType containerType,
        ::BlockPos const&                    blockPos,
        ::ActorUniqueID const&               uniqueId
    );

    MCAPI void performAutoTrade(int tradeTier, int tradeIndex);

    MCAPI void pullInIngredientsForSelectedTrade();

    MCAPI void selectTrade(int tradeTier, int tradeIndex);

    MCAPI void setAnvilPreviewItemName(::std::string const& name);

    MCAPI void setRecipeBookFiltering(bool isFiltering);

    MCAPI void setRecipeBookSearchString(::std::string const& searchText);

    MCAPI void setRecipeBookVisibility(bool visible);

    MCAPI ~ContainerAPI();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace GameplayUI
