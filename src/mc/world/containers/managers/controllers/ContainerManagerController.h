#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/containers/controllers/ItemTakeType.h"
#include "mc/world/inventory/simulation/ContainerScreenRequestActionType.h"

// auto generated forward declare list
// clang-format off
class ContainerController;
class ContainerManagerModel;
class ContainerScreenSimulation;
class ItemInstance;
class ItemStackBase;
struct AutoPlaceItem;
struct AutoPlaceResult;
struct ContainerScreenActionResult;
struct ContainerSimulationSplitStack;
struct ContainerSplitControl;
struct CreateContainerItemScope;
struct ItemStackRequestScope;
struct ItemTransferAmount;
struct SelectedSlotInfo;
struct SlotData;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class ContainerManagerController : public ::std::enable_shared_from_this<::ContainerManagerController> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::ContainerManagerModel>> mContainerManagerModel;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::shared_ptr<::ContainerController>>>
                                                                              mContainers;
    ::ll::TypedStorage<8, 24, ::std::vector<::ContainerSplitControl>>         mContainerSplitItemStackItems;
    ::ll::TypedStorage<8, 24, ::std::vector<::ContainerSimulationSplitStack>> mContainerSimulationSplitItemStacks;
    ::ll::TypedStorage<4, 4, int>                                             mSplitItemRemainder;
    ::ll::TypedStorage<1, 1, bool>                                            mContainerDirty;
    ::ll::TypedStorage<1, 1, bool>                                            mContainersClosed;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ContainerScreenSimulation>>  mSimulation;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                mDynamicContainerNotifier;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ContainerManagerController() = default;

    // vIndex: 1
    virtual void postInit(::std::weak_ptr<::ContainerManagerController>);

    // vIndex: 2
    virtual void registerContainerCallbacks();

    // vIndex: 3
    virtual void setPreviewItemName(::Bedrock::Safety::RedactableString const&);

    // vIndex: 4
    virtual void setItemName(::Bedrock::Safety::RedactableString const&);

    // vIndex: 5
    virtual ::Bedrock::Safety::RedactableString const& getPreviewItemName() const;

    // vIndex: 6
    virtual ::Bedrock::Safety::RedactableString const& getItemName() const;

    // vIndex: 7
    virtual void updatePreviewItem();

    // vIndex: 8
    virtual ::ItemStackBase const& getTakeableItemStackBase(::SlotData const&) const;

    // vIndex: 9
    virtual void handleTakeAmount(::SlotData const&, int, ::SlotData const&);

    // vIndex: 10
    virtual void handleTakeAll(::SlotData const&, ::SlotData const&);

    // vIndex: 11
    virtual void handlePlaceAll(::SelectedSlotInfo const&, ::SlotData const&);

    // vIndex: 12
    virtual void handleTakeHalf(::SlotData const&, ::SlotData const&);

    // vIndex: 13
    virtual void handlePlaceOne(::SlotData const&, ::SlotData const&);

    // vIndex: 14
    virtual void handlePlaceAmount(::SlotData const&, int, ::SlotData const&);

    // vIndex: 15
    virtual int
    handleAutoPlace(::SlotData const&, int, ::std::vector<::AutoPlaceItem> const&, ::std::vector<::AutoPlaceResult>&);

    // vIndex: 16
    virtual int handleAutoPlaceStack(
        ::SlotData const&,
        ::ItemTakeType,
        ::std::vector<::AutoPlaceItem> const&,
        ::std::vector<::AutoPlaceResult>&
    );

    // vIndex: 17
    virtual void handleSplitSingle(::SlotData const&, ::SlotData const&);

    // vIndex: 18
    virtual void handleSplitMultiple(::SelectedSlotInfo const&, ::ItemInstance const&, ::SlotData const&);

    // vIndex: 19
    virtual bool handleCoalesce(::SlotData const&, ::std::vector<::std::string> const&, ::std::string const&);

    // vIndex: 20
    virtual bool handleSwap(::SlotData const&, ::SlotData const&);

    // vIndex: 21
    virtual bool handleDrop(::SlotData const&, ::ItemTransferAmount const);

    // vIndex: 23
    virtual bool handleDestroy(::SelectedSlotInfo const&, ::ItemTransferAmount const);

    // vIndex: 22
    virtual bool handleDestroy(::SlotData const&, ::ItemTransferAmount const);

    // vIndex: 24
    virtual bool handleConsume(::SlotData const&, ::ItemTransferAmount const);

    // vIndex: 25
    virtual void handleAddToStack(::SlotData const&, ::SlotData const&, ::ItemTakeType);

    // vIndex: 26
    virtual void closeContainers();

    // vIndex: 27
    virtual bool isOutputSlot(::std::string const&) const;

    // vIndex: 28
    virtual void _updateItemStackRequest(
        ::ContainerScreenRequestActionType,
        ::ContainerScreenActionResult const&,
        ::ItemStackRequestScope&
    );

    // vIndex: 29
    virtual ::CreateContainerItemScope _makeCreateItemScope(::SlotData const&, ::ItemTransferAmount const&);

    // vIndex: 30
    virtual void _onItemTransferredFrom(::ItemInstance const&, ::SlotData const&);

    // vIndex: 31
    virtual void _onItemTransferredTo(::ItemInstance const&, ::SlotData const&);

    // vIndex: 32
    virtual void _onItemAcquired(::ItemInstance const&, ::SlotData const&);

    // vIndex: 33
    virtual void _onItemPlaced(::ItemInstance const&, ::SlotData const&);

    // vIndex: 34
    virtual void _onContainerScreenAction(::ContainerScreenActionResult const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& TRANSFER_NO_DESTINATION();

    MCNAPI static ::std::string_view const& TRANSFER_NO_ORIGIN();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
