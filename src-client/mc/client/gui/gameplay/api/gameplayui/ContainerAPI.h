#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/gameplay/api/gameplayui/AnvilInfo.h"
#include "mc/client/gui/gameplay/api/gameplayui/ChestType.h"
#include "mc/client/gui/gameplay/api/gameplayui/QueryConnector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/controllers/ItemCraftType.h"
#include "mc/world/item/ItemGroup.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class AnvilContainerManagerModel;
class ChestContainerManagerModel;
class ContainerManagerController;
class ContainerModel;
class CraftingContainerManagerModel;
class DispenserContainerManagerModel;
class DropperContainerManagerModel;
class FurnaceContainerManagerModel;
class HopperContainerManagerModel;
class ItemRegistryRef;
class ItemStackBase;
class LocalPlayer;
class Trade2ContainerManagerModel;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
namespace GameplayUI { struct ContainerItem; }
namespace GameplayUI { struct TradeOfferInfo; }
namespace GameplayUI { struct TradeOverview; }
namespace GameplayUI { struct TradeTierInfo; }
// clang-format on

namespace GameplayUI {

class ContainerAPI {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LocalPlayer*>                                     mLocalPlayer;
    ::ll::TypedStorage<8, 64, ::std::function<::ItemRegistryRef()>>              mGetItemRegistryRef;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ContainerManagerController>>    mContainerManagerController;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::AnvilContainerManagerModel>>     mAnvilContainerManagerModel;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::ChestContainerManagerModel>>     mChestContainerManagerModel;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::CraftingContainerManagerModel>>  mCraftingContainerManagerModel;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::FurnaceContainerManagerModel>>   mFurnaceContainerManagerModel;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::HopperContainerManagerModel>>    mHopperContainerManagerModel;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::DropperContainerManagerModel>>   mDropperContainerManagerModel;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::DispenserContainerManagerModel>> mDispenserContainerManagerModel;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::Trade2ContainerManagerModel>>    mTrade2ContainerManagerModel;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                        mContainerBlockPos;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                                    mUniqueActorId;
    ::ll::TypedStorage<8, 80, ::GameplayUI::AnvilInfo>                           mAnvilInfo;
    ::ll::TypedStorage<
        8,
        48,
        ::Bedrock::PubSub::Publisher<void(::ItemStackBase const&), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>
        mPreviewItemPublisher;
    ::ll::TypedStorage<
        8,
        48,
        ::Bedrock::PubSub::Publisher<void(::std::string const&), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>
        mRecipeBookSearchPublisher;
    ::ll::
        TypedStorage<8, 48, ::Bedrock::PubSub::Publisher<void(bool), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>
                                            mRecipeBookIsFilteringPublisher;
    ::ll::TypedStorage<8, 136, ::ItemGroup> mDistributionSource;
    ::ll::TypedStorage<1, 1, bool>          mDistributionDoneFirstSingleItem;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerAPI();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ContainerAPI(::std::function<::ItemRegistryRef()> getItemRegistryRef);

    MCAPI void _recipeAutoCraft(::ContainerEnumName collectionName, int collectionIndex, ::ItemCraftType craftType);

    MCAPI ::std::shared_ptr<::ContainerModel> _tryGetContainerModel(::ContainerEnumName containerName);

    MCAPI void autoPlaceItems(::ContainerEnumName sourceName, int sourceIndex);

    MCAPI void closeContainer();

    MCAPI void coalesceItems(::ContainerEnumName destinationName, int destinationIndex, ::ContainerEnumName sourceName);

    MCAPI void coalesceOrAutoPlaceItems(::ContainerEnumName destinationName, int destinationIndex);

    MCAPI void dropAllItems(::ContainerEnumName sourceName, int sourceIndex);

    MCAPI void dropOneItem(::ContainerEnumName sourceName, int sourceIndex);

    MCAPI ::std::optional<::GameplayUI::AnvilInfo> getAnvilInfo();

    MCAPI ::GameplayUI::ContainerItem getCraftingScreenContainerItem(::ContainerEnumName containerName, int index);

    MCAPI ::GameplayUI::TradeOfferInfo getTradeOfferInfo(int tradeTier, int tradeIndex);

    MCAPI ::GameplayUI::TradeOverview getTradeOverview();

    MCAPI ::GameplayUI::ContainerItem getTradeScreenResultPreviewContainerItem(int index);

    MCAPI ::GameplayUI::TradeTierInfo getTradeTierInfo(int tradeTier);

    MCAPI void onPlayerOpenContainer(
        ::SharedTypes::Legacy::ContainerType containerType,
        ::BlockPos const&                    blockPos,
        ::ActorUniqueID const&               uniqueId
    );

    MCAPI void placeAllItems(
        ::ContainerEnumName selectedName,
        int                 selectedIndex,
        ::ContainerEnumName destinationName,
        int                 destinationIndex
    );

    MCAPI void placeAmountOfItems(
        ::ContainerEnumName selectedName,
        int                 selectedIndex,
        ::ContainerEnumName destinationName,
        int                 destinationIndex,
        int                 amount
    );

    MCAPI void placeOneItem(
        ::ContainerEnumName selectedName,
        int                 selectedIndex,
        ::ContainerEnumName destinationName,
        int                 destinationIndex
    );

    MCAPI ::GameplayUI::QueryConnector<::std::optional<::GameplayUI::ChestType>> queryChestType();

    MCAPI ::GameplayUI::QueryConnector<::GameplayUI::ContainerItem>
    queryContainerItem(::ContainerEnumName containerName, int index);

    MCAPI ::GameplayUI::QueryConnector<::std::string> queryContainerName();

    MCAPI ::GameplayUI::QueryConnector<::std::string> queryRecipeBookSearchString();

    MCAPI void selectRecipe(::ContainerEnumName sourceName, int sourceIndex, bool displayOnly);

    MCAPI void setAnvilPreviewItemName(::std::string const& name);

    MCAPI void setDistributeAllSource(::ContainerEnumName sourceName, int sourceIndex);

    MCAPI void setRecipeBookFiltering(bool isFiltering);

    MCAPI void setRecipeBookSearchString(::std::string const& searchText);

    MCAPI void splitMultipleItems(
        ::ContainerEnumName selectedName,
        int                 selectedIndex,
        ::ContainerEnumName destinationName,
        int                 destinationIndex
    );

    MCAPI void splitSingleItem(
        ::ContainerEnumName sourceName,
        int                 sourceIndex,
        ::ContainerEnumName destinationName,
        int                 destinationIndex
    );

    MCAPI void takeAllItems(
        ::ContainerEnumName destinationName,
        int                 destinationIndex,
        ::ContainerEnumName sourceName,
        int                 sourceIndex
    );

    MCAPI void takeHalfItems(
        ::ContainerEnumName destinationName,
        int                 destinationIndex,
        ::ContainerEnumName sourceName,
        int                 sourceIndex
    );

    MCAPI void takeOneItem(
        ::ContainerEnumName destinationName,
        int                 destinationIndex,
        ::ContainerEnumName sourceName,
        int                 sourceIndex
    );

    MCAPI ~ContainerAPI();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::function<::ItemRegistryRef()> getItemRegistryRef);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace GameplayUI
