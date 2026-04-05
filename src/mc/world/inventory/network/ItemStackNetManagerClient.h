#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/ContainerWeakRef.h"
#include "mc/world/inventory/network/ItemStackNetManagerBase.h"
#include "mc/world/inventory/network/ItemStackRequestScreen.h"
#include "mc/world/inventory/network/TypedClientNetId.h"
#include "mc/world/inventory/simulation/SparseContainerBackingSetType.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class ClientScratchContainer;
class Container;
class ContainerModel;
class EntityContext;
class IPlayerContainerSetter;
class ISparseContainerSetListener;
class ItemStack;
class ItemStackNetManagerScreen;
class ItemStackRequestAction;
class ItemStackRequestBatch;
class ItemStackRequestData;
class SparseContainer;
class SparseContainerClient;
struct FullContainerName;
struct HistoricPredictionData;
struct ItemStackRequestIdTag;
struct ItemStackResponseInfo;
struct ItemStackResponseSlotInfo;
// clang-format on

class ItemStackNetManagerClient : public ::ItemStackNetManagerBase {
public:
    // ItemStackNetManagerClient inner types declare
    // clang-format off
    struct PredictiveContainer;
    struct OpenSessionContainerData;
    struct ClientScreenData;
    struct OwningPredictiveContainer;
    // clang-format on

    // ItemStackNetManagerClient inner types define
    struct PredictiveContainer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::SparseContainerClient>> mSparseContainer;
        ::ll::TypedStorage<8, 64, ::std::unordered_map<::ItemStackRequestId, ::std::vector<::HistoricPredictionData>>>
            mHistoricPredictions;
        ::ll::TypedStorage<8, 64, ::std::unordered_map<::ItemStackRequestId, ::std::vector<::HistoricPredictionData>>>
            mZeroedOutItems;
        // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
    public:
        // prevent constructor by default
        PredictiveContainer();

#endif
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~PredictiveContainer() = default;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI PredictiveContainer(
            ::Container&                                     backingContainer,
            ::SparseContainerBackingSetType                  backingSetType,
            bool                                             isItemStackNetManagerEnabled,
            ::std::unique_ptr<::ISparseContainerSetListener> netManagerSetter,
            ::std::unique_ptr<::IPlayerContainerSetter>      playerContainerSetter
        );
#endif
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI void* $ctor(
            ::Container&                                     backingContainer,
            ::SparseContainerBackingSetType                  backingSetType,
            bool                                             isItemStackNetManagerEnabled,
            ::std::unique_ptr<::ISparseContainerSetListener> netManagerSetter,
            ::std::unique_ptr<::IPlayerContainerSetter>      playerContainerSetter
        );
#endif
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    struct OpenSessionContainerData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 48, ::ContainerWeakRef>                               mContainerWeakRef;
        ::ll::TypedStorage<8, 8, ::ItemStackNetManagerClient::PredictiveContainer*> mContainer;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI ~OpenSessionContainerData();
#endif
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI void $dtor();
#endif
        // NOLINTEND
    };

    struct ClientScreenData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 64, ::std::unordered_map<::ContainerEnumName, ::std::unordered_set<uchar>>>
            mLegacyTransactionSetItemSlots;
        ::ll::TypedStorage<
            8,
            64,
            ::std::
                unordered_map<::ItemStackRequestId, ::std::vector<::ItemStackNetManagerClient::PredictiveContainer*>>>
                                                                                              mRequestContainers;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::ClientScratchContainer>>> mClientScratchContainers;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::ItemStackNetManagerClient::PredictiveContainer>>>
            mPlayerOwnedPredictiveContainers;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::ItemStackNetManagerClient::PredictiveContainer>>>
            mOpenSessionPredictiveContainers;
        ::ll::TypedStorage<
            8,
            64,
            ::std::unordered_map<::FullContainerName, ::ItemStackNetManagerClient::OpenSessionContainerData>>
            mOpenSessionContainerMap;
        ::ll::TypedStorage<
            8,
            64,
            ::std::unordered_map<::FullContainerName, ::ItemStackNetManagerClient::OpenSessionContainerData>>
            mHudContainerMap;
        // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
    public:
        // prevent constructor by default
        ClientScreenData& operator=(ClientScreenData const&);
        ClientScreenData(ClientScreenData const&);

#endif
    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI ClientScreenData();

        MCNAPI ClientScreenData(::ItemStackNetManagerClient::ClientScreenData&&);

        MCNAPI ::ItemStackNetManagerClient::ClientScreenData&
        operator=(::ItemStackNetManagerClient::ClientScreenData&&);

        MCNAPI ~ClientScreenData();
#endif
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI void* $ctor();

        MCNAPI void* $ctor(::ItemStackNetManagerClient::ClientScreenData&&);
#endif
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI void $dtor();
#endif
        // NOLINTEND
    };

    struct OwningPredictiveContainer : public ::ItemStackNetManagerClient::PredictiveContainer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ContainerModel>> mOwnedContainer;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~OwningPredictiveContainer() /*override*/ = default;
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                       mIsHandlingResponse;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ItemStackRequestData>>  mRequest;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ItemStackRequestBatch>> mRequestBatch;
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>>                mRequestScreen;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ItemStackNetManagerClient() /*override*/ = default;

    virtual ::SparseContainer* initOpenContainer(
        ::BlockSource&             region,
        ::FullContainerName const& openContainerId,
        ::ContainerWeakRef const&  containerWeakRef
    ) /*override*/;

    virtual ::ItemStackRequestId getRequestId() const /*override*/;

    virtual bool allowInventoryTransactionManager() const /*override*/;

    virtual ::gsl::final_action<::std::function<void()>> _tryBeginClientLegacyTransactionRequest() /*override*/;

    virtual void _addLegacyTransactionRequestSetItemSlot(
        ::ItemStackNetManagerScreen&         screen,
        ::SharedTypes::Legacy::ContainerType containerType,
        int                                  slot
    ) /*override*/;

    virtual void _initScreen(::ItemStackNetManagerScreen& screen) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void _beginRequest(::ItemStackRequestScreen screen);

    MCNAPI void _clearPredictiveContainerRequest(
        ::ItemStackRequestId const&                       requestId,
        ::ItemStackNetManagerClient::PredictiveContainer& predictiveContainer,
        bool                                              shouldBeEmpty
    );

    MCNAPI void _endRequest();

    MCNAPI ::std::unique_ptr<::ItemStackRequestData> _endTakeRequest();

    MCNAPI ::std::unordered_map<::ContainerEnumName, ::std::unordered_set<uchar>>
    _getLegacyTransactionSetItemSlots() const;

    MCNAPI ::ItemStackNetManagerClient::PredictiveContainer* _getPredictiveContainer(::Container* sparseContainer);

    MCNAPI void _initPlayerContainers();

    MCNAPI void _processResponseSlot(
        ::ItemStackRequestId const&                       requestId,
        ::ItemStackNetManagerClient::PredictiveContainer& predictiveContainer,
        ::ItemStackResponseSlotInfo const&                responseInfo
    );

    MCNAPI ::ItemStackNetManagerClient::ClientScreenData* _tryGetCurrentClientScreen();

    MCNAPI void addContainerToRequest(::ItemStackRequestId requestId, ::Container* container);

    MCNAPI void addRequestAction(::std::unique_ptr<::ItemStackRequestAction> requestAction);

    MCNAPI void cacheHistoricPrediction(
        ::Container*                container,
        ::ItemStackRequestId const& requestId,
        int                         slot,
        ::ItemStack&&               item
    );

    MCNAPI void
    cacheZeroedOutItem(::Container* container, ::ItemStackRequestId const& requestId, int slot, ::ItemStack&& item);

    MCNAPI void clearZeroedOutItem(::Container* container, ::ItemStackRequestId const& requestId, int slot);

    MCNAPI ::std::unordered_map<::FullContainerName, ::std::shared_ptr<::Container>> getPredictiveContainers();

    MCNAPI void handleItemStackResponse(::std::vector<::ItemStackResponseInfo> const& responses);

    MCNAPI void trySendBatch();
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::SparseContainer* $initOpenContainer(
        ::BlockSource&             region,
        ::FullContainerName const& openContainerId,
        ::ContainerWeakRef const&  containerWeakRef
    );

    MCNAPI ::ItemStackRequestId $getRequestId() const;

    MCNAPI bool $allowInventoryTransactionManager() const;

    MCNAPI ::gsl::final_action<::std::function<void()>> $_tryBeginClientLegacyTransactionRequest();

    MCNAPI void $_addLegacyTransactionRequestSetItemSlot(
        ::ItemStackNetManagerScreen&         screen,
        ::SharedTypes::Legacy::ContainerType containerType,
        int                                  slot
    );

    MCNAPI void $_initScreen(::ItemStackNetManagerScreen& screen);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
