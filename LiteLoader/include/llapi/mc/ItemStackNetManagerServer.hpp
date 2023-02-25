/**
 * @file  ItemStackNetManagerServer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"
#include "ItemStackNetManagerBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemStackNetManagerServer.
 *
 */
class ItemStackNetManagerServer : public ItemStackNetManagerBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKNETMANAGERSERVER
public:
    class ItemStackNetManagerServer& operator=(class ItemStackNetManagerServer const &) = delete;
    ItemStackNetManagerServer(class ItemStackNetManagerServer const &) = delete;
    ItemStackNetManagerServer() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ItemStackNetManagerServer();
    /**
     * @vftbl  2
     * @symbol  ?getRequestId\@ItemStackNetManagerServer\@\@UEBA?AV?$TypedClientNetId\@UItemStackRequestIdTag\@\@H$0A\@\@\@XZ
     */
    virtual class TypedClientNetId<struct ItemStackRequestIdTag, int, 0> getRequestId() const;
    /**
     * @vftbl  3
     * @symbol  ?retainSetItemStackNetIdVariant\@ItemStackNetManagerServer\@\@UEBA_NXZ
     */
    virtual bool retainSetItemStackNetIdVariant() const;
    /**
     * @vftbl  4
     * @symbol  ?allowInventoryTransactionManager\@ItemStackNetManagerServer\@\@UEBA_NXZ
     */
    virtual bool allowInventoryTransactionManager() const;
    /**
     * @vftbl  6
     * @symbol  ?onContainerScreenOpen\@ItemStackNetManagerServer\@\@UEAAXAEBVContainerScreenContext\@\@\@Z
     */
    virtual void onContainerScreenOpen(class ContainerScreenContext const &);
    /**
     * @vftbl  10
     * @symbol  ?_initScreen\@ItemStackNetManagerServer\@\@EEAAXAEAVItemStackNetManagerScreen\@\@\@Z
     */
    virtual void _initScreen(class ItemStackNetManagerScreen &);
    /**
     * @symbol  ??0ItemStackNetManagerServer\@\@QEAA\@AEAVServerPlayer\@\@_N\@Z
     */
    MCAPI ItemStackNetManagerServer(class ServerPlayer &, bool);
    /**
     * @symbol  ?_handleLegacyTransactionRequest\@ItemStackNetManagerServer\@\@QEAAXAEBV?$TypedClientNetId\@UItemStackLegacyRequestIdTag\@\@H$0A\@\@\@AEBV?$vector\@U?$pair\@W4ContainerEnumName\@\@V?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@\@std\@\@V?$allocator\@U?$pair\@W4ContainerEnumName\@\@V?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void _handleLegacyTransactionRequest(class TypedClientNetId<struct ItemStackLegacyRequestIdTag, int, 0> const &, std::vector<struct std::pair<enum class ContainerEnumName, class std::vector<unsigned char, class std::allocator<unsigned char>>>> const &);
    /**
     * @symbol  ?_retainSetItemStackNetIdVariantScope\@ItemStackNetManagerServer\@\@QEAA?AV?$final_action\@V?$function\@$$A6AXXZ\@std\@\@\@gsl\@\@XZ
     */
    MCAPI class gsl::final_action<class std::function<void (void)>> _retainSetItemStackNetIdVariantScope();
    /**
     * @symbol  ?handleRequest\@ItemStackNetManagerServer\@\@QEAAXV?$unique_ptr\@VItemStackRequestData\@\@U?$default_delete\@VItemStackRequestData\@\@\@std\@\@\@std\@\@V?$NonOwnerPointer\@VTextFilteringProcessor\@\@\@Bedrock\@\@\@Z
     */
    MCAPI void handleRequest(std::unique_ptr<class ItemStackRequestData>, class Bedrock::NonOwnerPointer<class TextFilteringProcessor>);
    /**
     * @symbol  ?handleRequestBatch\@ItemStackNetManagerServer\@\@QEAAXAEBVItemStackRequestBatch\@\@V?$NonOwnerPointer\@VTextFilteringProcessor\@\@\@Bedrock\@\@\@Z
     */
    MCAPI void handleRequestBatch(class ItemStackRequestBatch const &, class Bedrock::NonOwnerPointer<class TextFilteringProcessor>);
    /**
     * @symbol  ?itemMatches\@ItemStackNetManagerServer\@\@QEAA_NAEBUItemStackRequestSlotInfo\@\@AEBVItemStack\@\@\@Z
     */
    MCAPI bool itemMatches(struct ItemStackRequestSlotInfo const &, class ItemStack const &);
    /**
     * @symbol  ?normalTick\@ItemStackNetManagerServer\@\@QEAAXXZ
     */
    MCAPI void normalTick();
    /**
     * @symbol  ?startCrafting\@ItemStackNetManagerServer\@\@QEAAX_NAEBVBlockPos\@\@\@Z
     */
    MCAPI void startCrafting(bool, class BlockPos const &);
    /**
     * @symbol  ?tryCloseContainerScreen\@ItemStackNetManagerServer\@\@QEAA?AVCallbackToken\@\@V?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    MCAPI class CallbackToken tryCloseContainerScreen(class std::function<void (void)>);

//private:
    /**
     * @symbol  ?_filterStrings\@ItemStackNetManagerServer\@\@AEAAXV?$TypedClientNetId\@UItemStackRequestIdTag\@\@H$0A\@\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBW4TextProcessingEventOrigin\@\@\@Z
     */
    MCAPI void _filterStrings(class TypedClientNetId<struct ItemStackRequestIdTag, int, 0>, std::vector<std::string> const &, enum class TextProcessingEventOrigin const &);
    /**
     * @symbol  ?_handleRequestData\@ItemStackNetManagerServer\@\@AEAAXAEAV?$vector\@UItemStackResponseInfo\@\@V?$allocator\@UItemStackResponseInfo\@\@\@std\@\@\@std\@\@PEBVItemStackRequestData\@\@\@Z
     */
    MCAPI void _handleRequestData(std::vector<struct ItemStackResponseInfo> &, class ItemStackRequestData const *);
    /**
     * @symbol  ?_processQueue\@ItemStackNetManagerServer\@\@AEAAXXZ
     */
    MCAPI void _processQueue();
    /**
     * @symbol  ?_queueRequest\@ItemStackNetManagerServer\@\@AEAAXV?$unique_ptr\@VItemStackRequestData\@\@U?$default_delete\@VItemStackRequestData\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void _queueRequest(std::unique_ptr<class ItemStackRequestData>);
    /**
     * @symbol  ?_queueRequests\@ItemStackNetManagerServer\@\@AEAAXAEBVItemStackRequestBatch\@\@\@Z
     */
    MCAPI void _queueRequests(class ItemStackRequestBatch const &);
    /**
     * @symbol  ?_setTextFilterState\@ItemStackNetManagerServer\@\@AEAAXW4TextFilterState\@1\@\@Z
     */
    MCAPI void _setTextFilterState(enum class ItemStackNetManagerServer::TextFilterState);
    /**
     * @symbol  ?_tryFilterText\@ItemStackNetManagerServer\@\@AEAA_NPEBVItemStackRequestData\@\@\@Z
     */
    MCAPI bool _tryFilterText(class ItemStackRequestData const *);

private:

};