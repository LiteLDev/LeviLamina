#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/events/TextProcessingEventOrigin.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/network/ItemStackNetManagerBase.h"
#include "mc/world/inventory/network/TypedClientNetId.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class CallbackToken;
class ContainerScreenContext;
class ItemStack;
class ItemStackNetManagerScreen;
class ItemStackRequestBatch;
class ItemStackRequestData;
class ServerPlayer;
class TextFilteringProcessor;
struct ItemStackLegacyRequestIdTag;
struct ItemStackRequestIdTag;
struct ItemStackRequestSlotInfo;
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

    MCAPI ::gsl::final_action<::std::function<void()>> _retainSetItemStackNetIdVariantScope();

    MCAPI bool _tryFilterText(::ItemStackRequestData const* requestData);

    MCAPI void handleRequest(
        ::std::unique_ptr<::ItemStackRequestData>            request,
        ::Bedrock::NonOwnerPointer<::TextFilteringProcessor> textFilteringProcessor
    );

    MCAPI void handleRequestBatch(
        ::ItemStackRequestBatch const&                       requestBatch,
        ::Bedrock::NonOwnerPointer<::TextFilteringProcessor> textFilteringProcessor
    );

    MCAPI bool itemMatches(::ItemStackRequestSlotInfo const& slotInfo, ::ItemStack const& expectedItem);

    MCAPI void normalTick();

    MCAPI void startCrafting(bool workbench, ::BlockPos const& pos);

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

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ItemStackRequestId $getRequestId() const;

    MCAPI bool $retainSetItemStackNetIdVariant() const;

    MCAPI bool $allowInventoryTransactionManager() const;

    MCAPI void $onContainerScreenOpen(::ContainerScreenContext const& screenContext);

    MCAPI void $_initScreen(::ItemStackNetManagerScreen& screen);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
