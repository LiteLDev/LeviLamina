#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/network/TypedClientNetId.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/ContainerType.h"
#include "mc/world/events/TextProcessingEventOrigin.h"
#include "mc/world/inventory/network/ItemStackNetManagerBase.h"

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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~ItemStackNetManagerServer() = default;

    // vIndex: 2, symbol:
    // ?getRequestId@ItemStackNetManagerServer@@UEBA?AV?$TypedClientNetId@UItemStackRequestIdTag@@H$0A@@@XZ
    virtual ItemStackRequestId getRequestId() const;

    // vIndex: 3, symbol: ?retainSetItemStackNetIdVariant@ItemStackNetManagerServer@@UEBA_NXZ
    virtual bool retainSetItemStackNetIdVariant() const;

    // vIndex: 4, symbol: ?allowInventoryTransactionManager@ItemStackNetManagerServer@@UEBA_NXZ
    virtual bool allowInventoryTransactionManager() const;

    // vIndex: 6, symbol: ?onContainerScreenOpen@ItemStackNetManagerServer@@UEAAXAEBVContainerScreenContext@@@Z
    virtual void onContainerScreenOpen(class ContainerScreenContext const&);

    // vIndex: 10, symbol: ?_initScreen@ItemStackNetManagerServer@@EEAAXAEAVItemStackNetManagerScreen@@@Z
    virtual void _initScreen(class ItemStackNetManagerScreen&);

    // symbol: ??0ItemStackNetManagerServer@@QEAA@AEAVServerPlayer@@_N@Z
    MCAPI ItemStackNetManagerServer(class ServerPlayer&, bool);

    // symbol:
    // ?_handleLegacyTransactionRequest@ItemStackNetManagerServer@@QEAAXAEBV?$TypedClientNetId@UItemStackLegacyRequestIdTag@@H$0A@@@AEBV?$vector@U?$pair@W4ContainerEnumName@@V?$vector@EV?$allocator@E@std@@@std@@@std@@V?$allocator@U?$pair@W4ContainerEnumName@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@2@@std@@@Z
    MCAPI void
    _handleLegacyTransactionRequest(ItemStackLegacyRequestId const&, std::vector<std::pair<::ContainerEnumName, std::vector<uchar>>> const&);

    // symbol:
    // ?_retainSetItemStackNetIdVariantScope@ItemStackNetManagerServer@@QEAA?AV?$final_action@V?$function@$$A6AXXZ@std@@@gsl@@XZ
    MCAPI gsl::final_action<std::function<void(void)>> _retainSetItemStackNetIdVariantScope();

    // symbol:
    // ?handleRequest@ItemStackNetManagerServer@@QEAAXV?$unique_ptr@VItemStackRequestData@@U?$default_delete@VItemStackRequestData@@@std@@@std@@V?$NonOwnerPointer@VTextFilteringProcessor@@@Bedrock@@@Z
    MCAPI void
        handleRequest(std::unique_ptr<class ItemStackRequestData>, class Bedrock::NonOwnerPointer<class TextFilteringProcessor>);

    // symbol:
    // ?handleRequestBatch@ItemStackNetManagerServer@@QEAAXAEBVItemStackRequestBatch@@V?$NonOwnerPointer@VTextFilteringProcessor@@@Bedrock@@@Z
    MCAPI void
    handleRequestBatch(class ItemStackRequestBatch const&, class Bedrock::NonOwnerPointer<class TextFilteringProcessor>);

    // symbol: ?itemMatches@ItemStackNetManagerServer@@QEAA_NAEBUItemStackRequestSlotInfo@@AEBVItemStack@@@Z
    MCAPI bool itemMatches(struct ItemStackRequestSlotInfo const&, class ItemStack const&);

    // symbol: ?normalTick@ItemStackNetManagerServer@@QEAAXXZ
    MCAPI void normalTick();

    // symbol: ?startCrafting@ItemStackNetManagerServer@@QEAAX_NAEBVBlockPos@@@Z
    MCAPI void startCrafting(bool, class BlockPos const&);

    // symbol: ?tryCloseContainerScreen@ItemStackNetManagerServer@@QEAA?AVCallbackToken@@V?$function@$$A6AXXZ@std@@@Z
    MCAPI class CallbackToken tryCloseContainerScreen(std::function<void(void)>);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_filterStrings@ItemStackNetManagerServer@@AEAAXV?$TypedClientNetId@UItemStackRequestIdTag@@H$0A@@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBW4TextProcessingEventOrigin@@@Z
    MCAPI void _filterStrings(ItemStackRequestId, std::vector<std::string> const&, ::TextProcessingEventOrigin const&);

    // symbol:
    // ?_handleRequestData@ItemStackNetManagerServer@@AEAAXAEAV?$vector@UItemStackResponseInfo@@V?$allocator@UItemStackResponseInfo@@@std@@@std@@PEBVItemStackRequestData@@@Z
    MCAPI void _handleRequestData(std::vector<struct ItemStackResponseInfo>&, class ItemStackRequestData const*);

    // symbol: ?_processQueue@ItemStackNetManagerServer@@AEAAXXZ
    MCAPI void _processQueue();

    // symbol:
    // ?_queueRequest@ItemStackNetManagerServer@@AEAAXV?$unique_ptr@VItemStackRequestData@@U?$default_delete@VItemStackRequestData@@@std@@@std@@@Z
    MCAPI void _queueRequest(std::unique_ptr<class ItemStackRequestData>);

    // symbol: ?_queueRequests@ItemStackNetManagerServer@@AEAAXAEBVItemStackRequestBatch@@@Z
    MCAPI void _queueRequests(class ItemStackRequestBatch const&);

    // symbol: ?_setTextFilterState@ItemStackNetManagerServer@@AEAAXW4TextFilterState@1@@Z
    MCAPI void _setTextFilterState(::ItemStackNetManagerServer::TextFilterState);

    // symbol: ?_tryFilterText@ItemStackNetManagerServer@@AEAA_NPEBVItemStackRequestData@@@Z
    MCAPI bool _tryFilterText(class ItemStackRequestData const*);

    // NOLINTEND
};
