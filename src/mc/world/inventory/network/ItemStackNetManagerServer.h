#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/events/TextProcessingEventOrigin.h"
#include "mc/world/ContainerType.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/network/ItemStackNetManagerBase.h"
#include "mc/world/inventory/network/TypedClientNetId.h"

class ItemStackNetManagerServer : public ::ItemStackNetManagerBase {
public:
    // ItemStackNetManagerServer inner types define
    enum class TextFilterState {};

public:
    // prevent constructor by default
    ItemStackNetManagerServer& operator=(ItemStackNetManagerServer const&);
    ItemStackNetManagerServer(ItemStackNetManagerServer const&);
    ItemStackNetManagerServer();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemStackNetManagerServer() = default;

    // vIndex: 2
    virtual ItemStackRequestId getRequestId() const;

    // vIndex: 3
    virtual bool retainSetItemStackNetIdVariant() const;

    // vIndex: 4
    virtual bool allowInventoryTransactionManager() const;

    // vIndex: 6
    virtual void onContainerScreenOpen(class ContainerScreenContext const& screenContext);

    // vIndex: 10
    virtual void _initScreen(class ItemStackNetManagerScreen& screen);

    MCAPI ItemStackNetManagerServer(class ServerPlayer& serverPlayer, bool isEnabled);

    MCAPI void _handleLegacyTransactionRequest(
        ItemStackLegacyRequestId const&                                        legacyClientRequestId,
        std::vector<std::pair<::ContainerEnumName, std::vector<uchar>>> const& legacySetItemSlots
    );

    MCAPI gsl::final_action<std::function<void()>> _retainSetItemStackNetIdVariantScope();

    MCAPI void handleRequest(
        std::unique_ptr<class ItemStackRequestData>                  request,
        class Bedrock::NonOwnerPointer<class TextFilteringProcessor> textFilteringProcessor
    );

    MCAPI void handleRequestBatch(
        class ItemStackRequestBatch const&                           requestBatch,
        class Bedrock::NonOwnerPointer<class TextFilteringProcessor> textFilteringProcessor
    );

    MCAPI bool itemMatches(struct ItemStackRequestSlotInfo const& slotInfo, class ItemStack const& expectedItem);

    MCAPI void normalTick();

    MCAPI void startCrafting(bool workbench, class BlockPos const& pos);

    MCAPI class CallbackToken tryCloseContainerScreen(std::function<void()> onContainerScreenCloseCB);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _filterStrings(
        ItemStackRequestId                 requestId,
        std::vector<std::string> const&    stringsToFilter,
        ::TextProcessingEventOrigin const& stringsToFilterOrigin
    );

    MCAPI void _handleRequestData(
        std::vector<struct ItemStackResponseInfo>& responses,
        class ItemStackRequestData const*          requestData
    );

    MCAPI void _processQueue();

    MCAPI void _queueRequest(std::unique_ptr<class ItemStackRequestData> request);

    MCAPI void _queueRequests(class ItemStackRequestBatch const& requestBatch);

    MCAPI void _setTextFilterState(::ItemStackNetManagerServer::TextFilterState state);

    MCAPI bool _tryFilterText(class ItemStackRequestData const* requestData);

    // NOLINTEND
};
