#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/events/TextProcessingEventOrigin.h"
#include "mc/util/CallbackToken.h"
#include "mc/util/CallbackTokenContext.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/network/ItemStackNetManagerBase.h"
#include "mc/world/inventory/network/TypedClientNetId.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class ItemStackNetManagerScreen;
class ItemStackRequestActionHandler;
class ItemStackRequestBatch;
class ItemStackRequestData;
class ServerPlayer;
class TextFilteringProcessor;
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

    using RetainScope = ::gsl::final_action<::std::function<void()>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ItemStackRequestActionHandler>> mRequestActionHandler;
    ::ll::TypedStorage<1, 1, bool>                                               mRetainSetItemStackNetIdVariants;
    ::ll::TypedStorage<4, 4, ::ItemStackNetManagerServer::TextFilterState>       mTextFilterState;
    ::ll::TypedStorage<
        8,
        40,
        ::std::
            queue<::std::unique_ptr<::ItemStackRequestData>, ::std::deque<::std::unique_ptr<::ItemStackRequestData>>>>
                                                                                    mRequestsQueue;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::TextFilteringProcessor>> mTextFilteringProcessor;
    ::ll::TypedStorage<8, 8, ::Tick>                                                mTextFilterRequestTimer;
    ::ll::TypedStorage<8, 8, ::Tick const>                                          mTextFilterRequestTimeout;
    ::ll::TypedStorage<8, 16, ::CallbackToken>                                      mTextFilterRequestToken;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CallbackTokenContext<::std::function<void()>>>>
        mOnContainerScreenCloseCB;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStackNetManagerServer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ItemStackNetManagerServer() /*override*/;

    virtual ::ItemStackRequestId getRequestId() const /*override*/;

    virtual bool retainSetItemStackNetIdVariant() const /*override*/;

    virtual bool allowInventoryTransactionManager() const /*override*/;

    virtual void onContainerScreenOpen(::ContainerScreenContext const& screenContext) /*override*/;

    virtual void _initScreen(::ItemStackNetManagerScreen& screen) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemStackNetManagerServer(::ServerPlayer& serverPlayer, bool isEnabled);

    MCAPI void _filterStrings(
        ::ItemStackRequestId                requestId,
        ::std::vector<::std::string> const& stringsToFilter,
        ::TextProcessingEventOrigin const&  stringsToFilterOrigin
    );

    MCAPI void _handleLegacyTransactionRequest(
        ::ItemStackLegacyRequestId const&                                            legacyClientRequestId,
        ::std::vector<::std::pair<::ContainerEnumName, ::std::vector<uchar>>> const& legacySetItemSlots
    );

    MCAPI void
    _handleRequestData(::std::vector<::ItemStackResponseInfo>& responses, ::ItemStackRequestData const* requestData);

    MCAPI void _processQueue();

    MCAPI void _queueRequest(::std::unique_ptr<::ItemStackRequestData> request);

    MCAPI void _queueRequests(::ItemStackRequestBatch const& requestBatch);

    MCAPI void _sendResponsePacket(::std::vector<::ItemStackResponseInfo>&& responses);

    MCAPI void _setTextFilterState(::ItemStackNetManagerServer::TextFilterState state);

    MCAPI bool _tryFilterText(::ItemStackRequestData const* requestData);

#ifdef LL_PLAT_C
    MCAPI void handleRequest(
        ::std::unique_ptr<::ItemStackRequestData>            request,
        ::Bedrock::NonOwnerPointer<::TextFilteringProcessor> textFilteringProcessor
    );
#endif

    MCAPI ::CallbackToken tryCloseContainerScreen(::std::function<void()> onContainerScreenCloseCB);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ServerPlayer& serverPlayer, bool isEnabled);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ItemStackRequestId $getRequestId() const;

    MCAPI bool $retainSetItemStackNetIdVariant() const;

    MCAPI bool $allowInventoryTransactionManager() const;

    MCFOLD void $onContainerScreenOpen(::ContainerScreenContext const& screenContext);

    MCAPI void $_initScreen(::ItemStackNetManagerScreen& screen);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
