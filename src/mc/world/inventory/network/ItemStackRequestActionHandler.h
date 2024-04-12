#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/actor/player/Player.h"

// auto generated inclusion list
#include "mc/network/TypedClientNetId.h"
#include "mc/network/TypedServerNetId.h"
#include "mc/world/TypedRuntimeId.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/item/components/ItemStackNetResult.h"

class ItemStackRequestActionHandler {
public:
    Player& mPlayer;          // this+0x0
    char    filler[0xE0 - 8]; // BDS-WIN 1.20.51 ItemStackNetManagerServer::ItemStackNetManagerServer line=15

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
    public:
        // prevent constructor by default
        PlayerLegacyRequestSlotIdAssignment& operator=(PlayerLegacyRequestSlotIdAssignment const&);
        PlayerLegacyRequestSlotIdAssignment(PlayerLegacyRequestSlotIdAssignment const&);
        PlayerLegacyRequestSlotIdAssignment();

    public:
        // NOLINTBEGIN
        // symbol:
        // ??0PlayerLegacyRequestSlotIdAssignment@ItemStackRequestActionHandler@@QEAA@W4ContainerEnumName@@AEAVContainer@@@Z
        MCAPI PlayerLegacyRequestSlotIdAssignment(::ContainerEnumName containerName, class Container& container);

        // symbol: ??1PlayerLegacyRequestSlotIdAssignment@ItemStackRequestActionHandler@@QEAA@XZ
        MCAPI ~PlayerLegacyRequestSlotIdAssignment();

        // NOLINTEND
    };

    struct RequestSlotIdAssignment {
    public:
        // prevent constructor by default
        RequestSlotIdAssignment& operator=(RequestSlotIdAssignment const&);
        RequestSlotIdAssignment(RequestSlotIdAssignment const&);
        RequestSlotIdAssignment();

    public:
        // NOLINTBEGIN
        // symbol: ??1RequestSlotIdAssignment@ItemStackRequestActionHandler@@QEAA@XZ
        MCAPI ~RequestSlotIdAssignment();

        // NOLINTEND
    };

    struct ScreenData {
    public:
        // prevent constructor by default
        ScreenData& operator=(ScreenData const&);
        ScreenData(ScreenData const&);
        ScreenData();

    public:
        // NOLINTBEGIN
        // symbol: ??0ScreenData@ItemStackRequestActionHandler@@QEAA@$$QEAU01@@Z
        MCAPI ScreenData(struct ItemStackRequestActionHandler::ScreenData&&);

        // symbol: ??4ScreenData@ItemStackRequestActionHandler@@QEAAAEAU01@$$QEAU01@@Z
        MCAPI struct ItemStackRequestActionHandler::ScreenData&
        operator=(struct ItemStackRequestActionHandler::ScreenData&&);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ItemStackRequestActionHandler& operator=(ItemStackRequestActionHandler const&);
    ItemStackRequestActionHandler(ItemStackRequestActionHandler const&);
    ItemStackRequestActionHandler();

public:
    // NOLINTBEGIN
    // symbol: ??0ItemStackRequestActionHandler@@QEAA@AEAVItemStackNetManagerServer@@AEAVPlayer@@@Z
    MCAPI ItemStackRequestActionHandler(class ItemStackNetManagerServer& itemStackNetManager, class Player& player);

    // symbol:
    // ?_addResponseSlotInfo@ItemStackRequestActionHandler@@QEAAXAEBUItemStackRequestHandlerSlotInfo@@AEBVItemStack@@@Z
    MCAPI void
    _addResponseSlotInfo(struct ItemStackRequestHandlerSlotInfo const& slotInfo, class ItemStack const& item);

    // symbol:
    // ?_cacheLegacySlotIdAssignment@ItemStackRequestActionHandler@@QEAAXW4ContainerEnumName@@EAEBV?$TypedClientNetId@UItemStackLegacyRequestIdTag@@H$0A@@@AEBV?$TypedServerNetId@UItemStackNetIdTag@@H$0A@@@@Z
    MCAPI void _cacheLegacySlotIdAssignment(
        ::ContainerEnumName             containerName,
        uchar                           slot,
        ItemStackLegacyRequestId const& legacyClientRequestId,
        ItemStackNetId const&           serverNetId
    );

    // symbol:
    // ?_cacheSlotIdAssigment@ItemStackRequestActionHandler@@QEAAXAEBV?$TypedRuntimeId@UContainerRuntimeIdTag@@I$0A@@@EEAEBV?$TypedServerNetId@UItemStackNetIdTag@@H$0A@@@@Z
    MCAPI void _cacheSlotIdAssigment(
        ContainerRuntimeId const& containerRuntimeId,
        uchar                     requestSlot,
        uchar                     slot,
        ItemStackNetId const&     serverNetId
    );

    // symbol:
    // ?_getOrInitSparseContainer@ItemStackRequestActionHandler@@QEAA?AV?$shared_ptr@VSimpleSparseContainer@@@std@@W4ContainerEnumName@@@Z
    MCAPI std::shared_ptr<class SimpleSparseContainer> _getOrInitSparseContainer(::ContainerEnumName openContainerId);

    // symbol:
    // ?_handleRemove@ItemStackRequestActionHandler@@QEAA?AW4ItemStackNetResult@@AEBVItemStackRequestActionTransferBase@@AEAVItemStack@@W4RemoveType@1@@Z
    MCAPI ::ItemStackNetResult _handleRemove(
        class ItemStackRequestActionTransferBase const& requestAction,
        class ItemStack&                                removedItem,
        ::ItemStackRequestActionHandler::RemoveType
    );

    // symbol: ?_initScreen@ItemStackRequestActionHandler@@QEAAXAEAVItemStackNetManagerScreen@@@Z
    MCAPI void _initScreen(class ItemStackNetManagerScreen& screen);

    // symbol:
    // ?_validateRequestSlot@ItemStackRequestActionHandler@@QEAA?AUItemStackRequestHandlerSlotInfo@@AEBUItemStackRequestSlotInfo@@_N1@Z
    MCAPI struct ItemStackRequestHandlerSlotInfo
    _validateRequestSlot(struct ItemStackRequestSlotInfo const& requestSlotInfo, bool isItemRequired, bool isHintSlot);

    // symbol:
    // ?addFilteredStrings@ItemStackRequestActionHandler@@QEAAXV?$TypedClientNetId@UItemStackRequestIdTag@@H$0A@@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    MCAPI void addFilteredStrings(ItemStackRequestId requestId, std::vector<std::string> filteredStrings);

    // symbol:
    // ?endRequest@ItemStackRequestActionHandler@@QEAA?AV?$tuple@W4ItemStackNetResult@@V?$vector@UItemStackResponseContainerInfo@@V?$allocator@UItemStackResponseContainerInfo@@@std@@@std@@@std@@W4ItemStackNetResult@@@Z
    MCAPI std::tuple<::ItemStackNetResult, std::vector<struct ItemStackResponseContainerInfo>>
          endRequest(::ItemStackNetResult currentResult);

    // symbol:
    // ?getFilteredStrings@ItemStackRequestActionHandler@@QEBAAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@V?$TypedClientNetId@UItemStackRequestIdTag@@H$0A@@@@Z
    MCAPI std::vector<std::string> const& getFilteredStrings(ItemStackRequestId) const;

    // symbol: ?getScreenContext@ItemStackRequestActionHandler@@QEBAAEBVContainerScreenContext@@XZ
    MCAPI class ContainerScreenContext const& getScreenContext() const;

    // symbol:
    // ?handleRequestAction@ItemStackRequestActionHandler@@QEAA?AW4ItemStackNetResult@@AEBVItemStackRequestAction@@@Z
    MCAPI ::ItemStackNetResult handleRequestAction(class ItemStackRequestAction const& requestAction);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_handlePlaceInItemContainer@ItemStackRequestActionHandler@@AEAA?AW4ItemStackNetResult@@AEBVItemStackRequestActionPlaceInItemContainer@@@Z
    MCAPI ::ItemStackNetResult
    _handlePlaceInItemContainer(class ItemStackRequestActionPlaceInItemContainer const& requestAction);

    // symbol:
    // ?_handleTakeFromItemContainer@ItemStackRequestActionHandler@@AEAA?AW4ItemStackNetResult@@AEBVItemStackRequestActionTakeFromItemContainer@@@Z
    MCAPI ::ItemStackNetResult
    _handleTakeFromItemContainer(class ItemStackRequestActionTakeFromItemContainer const& requestAction);

    // symbol:
    // ?_handleTransfer@ItemStackRequestActionHandler@@AEAA?AW4ItemStackNetResult@@AEBVItemStackRequestActionTransferBase@@_N11@Z
    MCAPI ::ItemStackNetResult _handleTransfer(
        class ItemStackRequestActionTransferBase const& requestAction,
        bool                                            isSrcHintSlot,
        bool                                            isDstHintSlot,
        bool                                            isSwap
    );

    // symbol:
    // ?_resolveSlotIdAssignment@ItemStackRequestActionHandler@@AEAA?AV?$optional@URequestSlotIdAssignment@ItemStackRequestActionHandler@@@std@@AEBUItemStackRequestSlotInfo@@AEBV?$TypedRuntimeId@UContainerRuntimeIdTag@@I$0A@@@@Z
    MCAPI std::optional<struct ItemStackRequestActionHandler::RequestSlotIdAssignment> _resolveSlotIdAssignment(
        struct ItemStackRequestSlotInfo const& requestSlotInfo,
        ContainerRuntimeId const&              containerRuntimeId
    );

    // symbol: ?_tryGetCurrentScreenData@ItemStackRequestActionHandler@@AEBAPEAUScreenData@1@XZ
    MCAPI struct ItemStackRequestActionHandler::ScreenData* _tryGetCurrentScreenData() const;

    // NOLINTEND
};
