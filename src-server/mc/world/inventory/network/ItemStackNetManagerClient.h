#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/ContainerWeakRef.h"
#include "mc/world/inventory/network/ItemStackNetManagerBase.h"
#include "mc/world/inventory/network/TypedClientNetId.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class ClientScratchContainer;
class ContainerModel;
class EntityContext;
class ItemStackNetManagerScreen;
class ItemStackRequestBatch;
class ItemStackRequestData;
class SparseContainer;
class SparseContainerClient;
struct FullContainerName;
struct HistoricPredictionData;
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
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::SparseContainerClient>> mSparseContainer;
        ::ll::TypedStorage<8, 64, ::std::unordered_map<::ItemStackRequestId, ::std::vector<::HistoricPredictionData>>>
            mHistoricPredictions;
        ::ll::TypedStorage<8, 64, ::std::unordered_map<::ItemStackRequestId, ::std::vector<::HistoricPredictionData>>>
            mZeroedOutItems;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~PredictiveContainer() = default;
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
        // vIndex: 0
        virtual ~OwningPredictiveContainer() /*override*/ = default;
        // NOLINTEND
    };

    struct OpenSessionContainerData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 48, ::ContainerWeakRef>                               mContainerWeakRef;
        ::ll::TypedStorage<8, 8, ::ItemStackNetManagerClient::PredictiveContainer*> mContainer;
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
    // vIndex: 0
    virtual ~ItemStackNetManagerClient() /*override*/ = default;

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
    virtual void _addLegacyTransactionRequestSetItemSlot(
        ::ItemStackNetManagerScreen&,
        ::SharedTypes::Legacy::ContainerType,
        int
    ) /*override*/;

    // vIndex: 10
    virtual void _initScreen(::ItemStackNetManagerScreen&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
