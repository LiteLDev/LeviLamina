#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/network/ItemStackNetManagerBase.h"
#include "mc/world/inventory/network/ItemStackRequestScreen.h"
#include "mc/world/inventory/network/TypedClientNetId.h"
#include "mc/world/inventory/simulation/SparseContainerBackingSetType.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class Container;
class ContainerWeakRef;
class IPlayerContainerSetter;
class ISparseContainerSetListener;
class ItemStack;
class ItemStackNetManagerScreen;
class ItemStackRequestAction;
class ItemStackRequestData;
class SparseContainer;
struct FullContainerName;
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
        ::ll::UntypedStorage<8, 16> mUnk7a9425;
        ::ll::UntypedStorage<8, 64> mUnk110924;
        ::ll::UntypedStorage<8, 64> mUnkfedfc3;
        // NOLINTEND

    public:
        // prevent constructor by default
        PredictiveContainer& operator=(PredictiveContainer const&);
        PredictiveContainer(PredictiveContainer const&);
        PredictiveContainer();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~PredictiveContainer() = default;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI_C PredictiveContainer(
            ::Container&                                     backingContainer,
            ::SparseContainerBackingSetType                  backingSetType,
            bool                                             isItemStackNetManagerEnabled,
            ::std::unique_ptr<::ISparseContainerSetListener> netManagerSetter,
            ::std::unique_ptr<::IPlayerContainerSetter>      playerContainerSetter
        );
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI_C void* $ctor(
            ::Container&                                     backingContainer,
            ::SparseContainerBackingSetType                  backingSetType,
            bool                                             isItemStackNetManagerEnabled,
            ::std::unique_ptr<::ISparseContainerSetListener> netManagerSetter,
            ::std::unique_ptr<::IPlayerContainerSetter>      playerContainerSetter
        );
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
        ::ll::UntypedStorage<8, 48> mUnka0cd1c;
        ::ll::UntypedStorage<8, 8>  mUnk48493b;
        // NOLINTEND

    public:
        // prevent constructor by default
        OpenSessionContainerData& operator=(OpenSessionContainerData const&);
        OpenSessionContainerData(OpenSessionContainerData const&);
        OpenSessionContainerData();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI_C ~OpenSessionContainerData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI_C void $dtor();
        // NOLINTEND
    };

    struct ClientScreenData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnkb9ad2e;
        ::ll::UntypedStorage<8, 64> mUnk1a33c8;
        ::ll::UntypedStorage<8, 24> mUnke9a180;
        ::ll::UntypedStorage<8, 24> mUnk351137;
        ::ll::UntypedStorage<8, 24> mUnkd7bd1d;
        ::ll::UntypedStorage<8, 64> mUnkdfbda4;
        ::ll::UntypedStorage<8, 64> mUnk1f6cf9;
        // NOLINTEND

    public:
        // prevent constructor by default
        ClientScreenData& operator=(ClientScreenData const&);
        ClientScreenData(ClientScreenData const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI_C ClientScreenData();

        MCNAPI_C ClientScreenData(::ItemStackNetManagerClient::ClientScreenData&&);

        MCNAPI_C ::ItemStackNetManagerClient::ClientScreenData&
        operator=(::ItemStackNetManagerClient::ClientScreenData&&);

        MCNAPI_C ~ClientScreenData();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI_C void* $ctor();

        MCNAPI_C void* $ctor(::ItemStackNetManagerClient::ClientScreenData&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI_C void $dtor();
        // NOLINTEND
    };

    struct OwningPredictiveContainer : public ::ItemStackNetManagerClient::PredictiveContainer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk115914;
        // NOLINTEND

    public:
        // prevent constructor by default
        OwningPredictiveContainer& operator=(OwningPredictiveContainer const&);
        OwningPredictiveContainer(OwningPredictiveContainer const&);
        OwningPredictiveContainer();

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
    ::ll::UntypedStorage<1, 1>  mUnk8e007b;
    ::ll::UntypedStorage<8, 8>  mUnkf683f5;
    ::ll::UntypedStorage<8, 8>  mUnkcc9f3d;
    ::ll::UntypedStorage<8, 24> mUnkd4fe97;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStackNetManagerClient& operator=(ItemStackNetManagerClient const&);
    ItemStackNetManagerClient(ItemStackNetManagerClient const&);
    ItemStackNetManagerClient();

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
    MCNAPI_C void _beginRequest(::ItemStackRequestScreen screen);

    MCNAPI_C void _clearPredictiveContainerRequest(
        ::ItemStackRequestId const&                       requestId,
        ::ItemStackNetManagerClient::PredictiveContainer& predictiveContainer,
        bool                                              shouldBeEmpty
    );

    MCNAPI_C void _endRequest();

    MCNAPI_C ::std::unique_ptr<::ItemStackRequestData> _endTakeRequest();

    MCNAPI_C ::std::unordered_map<::ContainerEnumName, ::std::unordered_set<uchar>>
    _getLegacyTransactionSetItemSlots() const;

    MCNAPI_C ::ItemStackNetManagerClient::PredictiveContainer* _getPredictiveContainer(::Container* sparseContainer);

    MCNAPI_C void _initPlayerContainers();

    MCNAPI_C void _processResponseSlot(
        ::ItemStackRequestId const&                       requestId,
        ::ItemStackNetManagerClient::PredictiveContainer& predictiveContainer,
        ::ItemStackResponseSlotInfo const&                responseInfo
    );

    MCNAPI_C ::ItemStackNetManagerClient::ClientScreenData* _tryGetCurrentClientScreen();

    MCNAPI_C void addContainerToRequest(::ItemStackRequestId requestId, ::Container* container);

    MCNAPI_C void addRequestAction(::std::unique_ptr<::ItemStackRequestAction> requestAction);

    MCNAPI_C void cacheHistoricPrediction(
        ::Container*                container,
        ::ItemStackRequestId const& requestId,
        int                         slot,
        ::ItemStack&&               item
    );

    MCNAPI_C void
    cacheZeroedOutItem(::Container* container, ::ItemStackRequestId const& requestId, int slot, ::ItemStack&& item);

    MCNAPI_C void clearZeroedOutItem(::Container* container, ::ItemStackRequestId const& requestId, int slot);

    MCNAPI_C ::std::unordered_map<::FullContainerName, ::std::shared_ptr<::Container>> getPredictiveContainers();

    MCNAPI_C void handleItemStackResponse(::std::vector<::ItemStackResponseInfo> const& responses);

    MCNAPI_C void trySendBatch();
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
