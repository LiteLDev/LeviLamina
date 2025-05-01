#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/TextProcessingEventOrigin.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/network/ItemStackNetManagerBase.h"
#include "mc/world/inventory/network/TypedClientNetId.h"

// auto generated forward declare list
// clang-format off
class CallbackToken;
class ContainerScreenContext;
class ItemStackNetManagerScreen;
class ItemStackRequestBatch;
class ItemStackRequestData;
class ServerPlayer;
struct ItemStackLegacyRequestIdTag;
struct ItemStackRequestIdTag;
struct ItemStackResponseInfo;
// clang-format on

class ItemStackNetManagerServer : public ::ItemStackNetManagerBase {
public:
    // ItemStackNetManagerServer inner types define
    enum class TextFilterState : int {
        None     = 0,
        Waiting  = 1,
        Timedout = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk665462;
    ::ll::UntypedStorage<1, 1>  mUnk966e15;
    ::ll::UntypedStorage<4, 4>  mUnka08a28;
    ::ll::UntypedStorage<8, 40> mUnkf9ef98;
    ::ll::UntypedStorage<8, 24> mUnk9fc890;
    ::ll::UntypedStorage<8, 8>  mUnkf725ea;
    ::ll::UntypedStorage<8, 8>  mUnkb46219;
    ::ll::UntypedStorage<8, 16> mUnk6c6706;
    ::ll::UntypedStorage<8, 8>  mUnk67387a;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStackNetManagerServer& operator=(ItemStackNetManagerServer const&);
    ItemStackNetManagerServer(ItemStackNetManagerServer const&);
    ItemStackNetManagerServer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemStackNetManagerServer() /*override*/ = default;

    // vIndex: 2
    virtual ::ItemStackRequestId getRequestId() const /*override*/;

    // vIndex: 3
    virtual bool retainSetItemStackNetIdVariant() const /*override*/;

    // vIndex: 4
    virtual bool allowInventoryTransactionManager() const /*override*/;

    // vIndex: 6
    virtual void onContainerScreenOpen(::ContainerScreenContext const& screenContext) /*override*/;

    // vIndex: 10
    virtual void _initScreen(::ItemStackNetManagerScreen& screen) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemStackNetManagerServer(::ServerPlayer& serverPlayer, bool isEnabled);

    MCNAPI void _filterStrings(
        ::ItemStackRequestId                requestId,
        ::std::vector<::std::string> const& stringsToFilter,
        ::TextProcessingEventOrigin const&  stringsToFilterOrigin
    );

    MCNAPI void _handleLegacyTransactionRequest(
        ::ItemStackLegacyRequestId const&                                            legacyClientRequestId,
        ::std::vector<::std::pair<::ContainerEnumName, ::std::vector<uchar>>> const& legacySetItemSlots
    );

    MCNAPI void
    _handleRequestData(::std::vector<::ItemStackResponseInfo>& responses, ::ItemStackRequestData const* requestData);

    MCNAPI void _processQueue();

    MCNAPI void _queueRequest(::std::unique_ptr<::ItemStackRequestData> request);

    MCNAPI void _queueRequests(::ItemStackRequestBatch const& requestBatch);

    MCNAPI ::gsl::final_action<::std::function<void()>> _retainSetItemStackNetIdVariantScope();

    MCNAPI void _sendResponsePacket(::std::vector<::ItemStackResponseInfo>&& responses);

    MCNAPI void _setTextFilterState(::ItemStackNetManagerServer::TextFilterState state);

    MCNAPI ::CallbackToken tryCloseContainerScreen(::std::function<void()> onContainerScreenCloseCB);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ServerPlayer& serverPlayer, bool isEnabled);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ItemStackRequestId $getRequestId() const;

    MCNAPI bool $retainSetItemStackNetIdVariant() const;

    MCNAPI bool $allowInventoryTransactionManager() const;

    MCNAPI void $onContainerScreenOpen(::ContainerScreenContext const& screenContext);

    MCNAPI void $_initScreen(::ItemStackNetManagerScreen& screen);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
