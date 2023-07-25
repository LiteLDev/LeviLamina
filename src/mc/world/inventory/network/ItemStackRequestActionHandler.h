#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/TypedClientNetId.h"
#include "mc/network/TypedServerNetId.h"
#include "mc/world/TypedRuntimeId.h"

class ItemStackRequestActionHandler {
public:
    // ItemStackRequestActionHandler inner types declare
    // clang-format off
    struct PlayerLegacyRequestSlotIdAssignment;
    struct RequestSlotIdAssignment;
    struct ScreenData;
    // clang-format on

    // ItemStackRequestActionHandler inner types define
    enum class RemoveType {};

    struct PlayerLegacyRequestSlotIdAssignment {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONHANDLER_PLAYERLEGACYREQUESTSLOTIDASSIGNMENT
    public:
        PlayerLegacyRequestSlotIdAssignment& operator=(PlayerLegacyRequestSlotIdAssignment const&) = delete;
        PlayerLegacyRequestSlotIdAssignment(PlayerLegacyRequestSlotIdAssignment const&)            = delete;
        PlayerLegacyRequestSlotIdAssignment()                                                      = delete;
#endif

    public:
        /**
         * @symbol
         * ??0PlayerLegacyRequestSlotIdAssignment\@ItemStackRequestActionHandler\@\@QEAA\@W4ContainerEnumName\@\@AEAVContainer\@\@\@Z
         */
        MCAPI PlayerLegacyRequestSlotIdAssignment(enum class ContainerEnumName, class Container&);
        /**
         * @symbol ??1PlayerLegacyRequestSlotIdAssignment\@ItemStackRequestActionHandler\@\@QEAA\@XZ
         */
        MCAPI ~PlayerLegacyRequestSlotIdAssignment();
    };

    struct RequestSlotIdAssignment {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONHANDLER_REQUESTSLOTIDASSIGNMENT
    public:
        RequestSlotIdAssignment& operator=(RequestSlotIdAssignment const&) = delete;
        RequestSlotIdAssignment(RequestSlotIdAssignment const&)            = delete;
        RequestSlotIdAssignment()                                          = delete;
#endif

    public:
    };

    struct ScreenData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONHANDLER_SCREENDATA
    public:
        ScreenData& operator=(ScreenData const&) = delete;
        ScreenData(ScreenData const&)            = delete;
        ScreenData()                             = delete;
#endif

    public:
        /**
         * @symbol ??0ScreenData\@ItemStackRequestActionHandler\@\@QEAA\@$$QEAU01\@\@Z
         */
        MCAPI ScreenData(struct ItemStackRequestActionHandler::ScreenData&&);
        /**
         * @symbol ??4ScreenData\@ItemStackRequestActionHandler\@\@QEAAAEAU01\@$$QEAU01\@\@Z
         */
        MCAPI struct ItemStackRequestActionHandler::ScreenData&
        operator=(struct ItemStackRequestActionHandler::ScreenData&&);
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONHANDLER
public:
    ItemStackRequestActionHandler& operator=(ItemStackRequestActionHandler const&) = delete;
    ItemStackRequestActionHandler(ItemStackRequestActionHandler const&)            = delete;
    ItemStackRequestActionHandler()                                                = delete;
#endif

public:
    /**
     * @symbol ??0ItemStackRequestActionHandler\@\@QEAA\@AEAVItemStackNetManagerServer\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI ItemStackRequestActionHandler(class ItemStackNetManagerServer&, class Player&);
    /**
     * @symbol
     * ?_addResponseSlotInfo\@ItemStackRequestActionHandler\@\@QEAAXAEBUItemStackRequestHandlerSlotInfo\@\@AEBVItemStack\@\@\@Z
     */
    MCAPI void _addResponseSlotInfo(struct ItemStackRequestHandlerSlotInfo const&, class ItemStack const&);
    /**
     * @symbol
     * ?_cacheLegacySlotIdAssignment\@ItemStackRequestActionHandler\@\@QEAAXW4ContainerEnumName\@\@EAEBV?$TypedClientNetId\@UItemStackLegacyRequestIdTag\@\@H$0A\@\@\@AEBV?$TypedServerNetId\@UItemStackNetIdTag\@\@H$0A\@\@\@\@Z
     */
    MCAPI void
    _cacheLegacySlotIdAssignment(enum class ContainerEnumName, unsigned char, class TypedClientNetId<struct ItemStackLegacyRequestIdTag, int, 0> const&, class TypedServerNetId<struct ItemStackNetIdTag, int, 0> const&);
    /**
     * @symbol
     * ?_cacheSlotIdAssigment\@ItemStackRequestActionHandler\@\@QEAAXAEBV?$TypedRuntimeId\@UContainerRuntimeIdTag\@\@I$0A\@\@\@EEAEBV?$TypedServerNetId\@UItemStackNetIdTag\@\@H$0A\@\@\@\@Z
     */
    MCAPI void
    _cacheSlotIdAssigment(class TypedRuntimeId<struct ContainerRuntimeIdTag, unsigned int, 0> const&, unsigned char, unsigned char, class TypedServerNetId<struct ItemStackNetIdTag, int, 0> const&);
    /**
     * @symbol
     * ?_getOrInitSparseContainer\@ItemStackRequestActionHandler\@\@QEAA?AV?$shared_ptr\@VSimpleSparseContainer\@\@\@std\@\@W4ContainerEnumName\@\@\@Z
     */
    MCAPI class std::shared_ptr<class SimpleSparseContainer> _getOrInitSparseContainer(enum class ContainerEnumName);
    /**
     * @symbol
     * ?_handleRemove\@ItemStackRequestActionHandler\@\@QEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestActionTransferBase\@\@AEAVItemStack\@\@W4RemoveType\@1\@\@Z
     */
    MCAPI enum class ItemStackNetResult _handleRemove(
        class ItemStackRequestActionTransferBase const&,
        class ItemStack&,
        enum class ItemStackRequestActionHandler::RemoveType
    );
    /**
     * @symbol ?_initScreen\@ItemStackRequestActionHandler\@\@QEAAXAEAVItemStackNetManagerScreen\@\@\@Z
     */
    MCAPI void _initScreen(class ItemStackNetManagerScreen&);
    /**
     * @symbol
     * ?_validateRequestSlot\@ItemStackRequestActionHandler\@\@QEAA?AUItemStackRequestHandlerSlotInfo\@\@AEBUItemStackRequestSlotInfo\@\@_N1\@Z
     */
    MCAPI struct ItemStackRequestHandlerSlotInfo
    _validateRequestSlot(struct ItemStackRequestSlotInfo const&, bool, bool);
    /**
     * @symbol
     * ?addFilteredStrings\@ItemStackRequestActionHandler\@\@QEAAXV?$TypedClientNetId\@UItemStackRequestIdTag\@\@H$0A\@\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void
        addFilteredStrings(class TypedClientNetId<struct ItemStackRequestIdTag, int, 0>, std::vector<std::string>);
    /**
     * @symbol
     * ?endRequest\@ItemStackRequestActionHandler\@\@QEAA?AV?$tuple\@W4ItemStackNetResult\@\@V?$vector\@UItemStackResponseContainerInfo\@\@V?$allocator\@UItemStackResponseContainerInfo\@\@\@std\@\@\@std\@\@\@std\@\@W4ItemStackNetResult\@\@\@Z
     */
    MCAPI class std::tuple<enum class ItemStackNetResult, std::vector<struct ItemStackResponseContainerInfo>>
        endRequest(enum class ItemStackNetResult);
    /**
     * @symbol
     * ?getFilteredStrings\@ItemStackRequestActionHandler\@\@QEBAAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@V?$TypedClientNetId\@UItemStackRequestIdTag\@\@H$0A\@\@\@\@Z
     */
    MCAPI std::vector<std::string> const&
          getFilteredStrings(class TypedClientNetId<struct ItemStackRequestIdTag, int, 0>) const;
    /**
     * @symbol
     * ?getRequestId\@ItemStackRequestActionHandler\@\@QEBAAEBV?$TypedClientNetId\@UItemStackRequestIdTag\@\@H$0A\@\@\@XZ
     */
    MCAPI class TypedClientNetId<struct ItemStackRequestIdTag, int, 0> const& getRequestId() const;
    /**
     * @symbol ?getScreenContext\@ItemStackRequestActionHandler\@\@QEBAAEBVContainerScreenContext\@\@XZ
     */
    MCAPI class ContainerScreenContext const& getScreenContext() const;
    /**
     * @symbol
     * ?handleRequestAction\@ItemStackRequestActionHandler\@\@QEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestAction\@\@\@Z
     */
    MCAPI enum class ItemStackNetResult handleRequestAction(class ItemStackRequestAction const&);
    /**
     * @symbol ?isValidationCraftingImplemented\@ItemStackRequestActionHandler\@\@QEAA_NXZ
     */
    MCAPI bool isValidationCraftingImplemented();
    /**
     * @symbol
     * ?tryCraft\@ItemStackRequestActionHandler\@\@QEAA?AV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@V?$unique_ptr\@UContainerValidationCraftInputs\@\@U?$default_delete\@UContainerValidationCraftInputs\@\@\@std\@\@\@3\@\@Z
     */
    MCAPI std::vector<class ItemInstance> tryCraft(std::unique_ptr<struct ContainerValidationCraftInputs>);

    // private:
    /**
     * @symbol
     * ?_handleDestroy\@ItemStackRequestActionHandler\@\@AEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestActionDestroy\@\@\@Z
     */
    MCAPI enum class ItemStackNetResult _handleDestroy(class ItemStackRequestActionDestroy const&);
    /**
     * @symbol
     * ?_handlePlaceInItemContainer\@ItemStackRequestActionHandler\@\@AEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestActionPlaceInItemContainer\@\@\@Z
     */
    MCAPI enum class ItemStackNetResult
    _handlePlaceInItemContainer(class ItemStackRequestActionPlaceInItemContainer const&);
    /**
     * @symbol
     * ?_handleTakeFromItemContainer\@ItemStackRequestActionHandler\@\@AEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestActionTakeFromItemContainer\@\@\@Z
     */
    MCAPI enum class ItemStackNetResult
    _handleTakeFromItemContainer(class ItemStackRequestActionTakeFromItemContainer const&);
    /**
     * @symbol
     * ?_handleTransfer\@ItemStackRequestActionHandler\@\@AEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestActionTransferBase\@\@_N11\@Z
     */
    MCAPI enum class ItemStackNetResult
    _handleTransfer(class ItemStackRequestActionTransferBase const&, bool, bool, bool);
    /**
     * @symbol
     * ?_resolveSlotIdAssignment\@ItemStackRequestActionHandler\@\@AEAA?AV?$optional\@URequestSlotIdAssignment\@ItemStackRequestActionHandler\@\@\@std\@\@AEBUItemStackRequestSlotInfo\@\@AEBV?$TypedRuntimeId\@UContainerRuntimeIdTag\@\@I$0A\@\@\@\@Z
     */
    MCAPI class std::optional<struct ItemStackRequestActionHandler::RequestSlotIdAssignment>
    _resolveSlotIdAssignment(struct ItemStackRequestSlotInfo const&, class TypedRuntimeId<struct ContainerRuntimeIdTag, unsigned int, 0> const&);
    /**
     * @symbol ?_tryGetCurrentScreenData\@ItemStackRequestActionHandler\@\@AEBAPEAUScreenData\@1\@XZ
     */
    MCAPI struct ItemStackRequestActionHandler::ScreenData* _tryGetCurrentScreenData() const;

private:
};
