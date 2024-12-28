#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerType.h"
#include "mc/world/inventory/network/ItemStackNetManagerBase.h"
#include "mc/world/inventory/network/TypedClientNetId.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class ContainerWeakRef;
class ItemStackNetManagerScreen;
class SparseContainer;
struct FullContainerName;
struct ItemStackRequestIdTag;
// clang-format on

class ItemStackNetManagerClient : public ::ItemStackNetManagerBase {
public:
    // ItemStackNetManagerClient inner types declare
    // clang-format off
    struct ClientScreenData;
    struct OpenSessionContainerData;
    struct OwningPredictiveContainer;
    struct PredictiveContainer;
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
        // vIndex: 0
        virtual ~PredictiveContainer();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
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
        // vIndex: 0
        virtual ~OwningPredictiveContainer() /*override*/;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
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
        ClientScreenData();
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
    // vIndex: 0
    virtual ~ItemStackNetManagerClient() /*override*/;

    // vIndex: 8
    virtual ::SparseContainer*
    initOpenContainer(::BlockSource&, ::FullContainerName const&, ::ContainerWeakRef const&) /*override*/;

    // vIndex: 2
    virtual ::ItemStackRequestId getRequestId() const /*override*/;

    // vIndex: 4
    virtual bool allowInventoryTransactionManager() const /*override*/;

    // vIndex: 5
    virtual ::gsl::final_action<::std::function<void()>> _tryBeginClientLegacyTransactionRequest() /*override*/;

    // vIndex: 9
    virtual void
    _addLegacyTransactionRequestSetItemSlot(::ItemStackNetManagerScreen&, ::ContainerType, int) /*override*/;

    // vIndex: 10
    virtual void _initScreen(::ItemStackNetManagerScreen&) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::SparseContainer* $initOpenContainer(::BlockSource&, ::FullContainerName const&, ::ContainerWeakRef const&);

    MCAPI ::ItemStackRequestId $getRequestId() const;

    MCAPI bool $allowInventoryTransactionManager() const;

    MCAPI ::gsl::final_action<::std::function<void()>> $_tryBeginClientLegacyTransactionRequest();

    MCAPI void $_addLegacyTransactionRequestSetItemSlot(::ItemStackNetManagerScreen&, ::ContainerType, int);

    MCAPI void $_initScreen(::ItemStackNetManagerScreen&);
    // NOLINTEND
};
