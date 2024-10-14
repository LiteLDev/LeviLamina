#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/TypedRuntimeId.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/network/ItemStackNetResult.h"
#include "mc/world/inventory/network/TypedClientNetId.h"
#include "mc/world/inventory/network/TypedServerNetId.h"

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
    public:
        // prevent constructor by default
        PlayerLegacyRequestSlotIdAssignment& operator=(PlayerLegacyRequestSlotIdAssignment const&);
        PlayerLegacyRequestSlotIdAssignment(PlayerLegacyRequestSlotIdAssignment const&);
        PlayerLegacyRequestSlotIdAssignment();

    public:
        // NOLINTBEGIN
        MCAPI PlayerLegacyRequestSlotIdAssignment(::ContainerEnumName containerName, class Container& container);

        MCAPI ~PlayerLegacyRequestSlotIdAssignment();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        template <class... Args>
        auto* ctor$(Args... args) {
            return std::construct_at(this, std::forward<Args>(args)...);
        }

        MCAPI void dtor$();

        // NOLINTEND
    };

    struct RequestSlotIdAssignment {
    public:
        // prevent constructor by default
        RequestSlotIdAssignment& operator=(RequestSlotIdAssignment const&);
        RequestSlotIdAssignment(RequestSlotIdAssignment const&);
        RequestSlotIdAssignment();
    };

    struct ScreenData {
    public:
        // prevent constructor by default
        ScreenData& operator=(ScreenData const&);
        ScreenData(ScreenData const&);
        ScreenData();

    public:
        // NOLINTBEGIN
        MCAPI ScreenData(struct ItemStackRequestActionHandler::ScreenData&&);

        MCAPI struct ItemStackRequestActionHandler::ScreenData&
        operator=(struct ItemStackRequestActionHandler::ScreenData&&);

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        template <class... Args>
        auto* ctor$(Args... args) {
            return std::construct_at(this, std::forward<Args>(args)...);
        }

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ItemStackRequestActionHandler& operator=(ItemStackRequestActionHandler const&);
    ItemStackRequestActionHandler(ItemStackRequestActionHandler const&);
    ItemStackRequestActionHandler();

public:
    // NOLINTBEGIN
    MCAPI ItemStackRequestActionHandler(class ItemStackNetManagerServer& itemStackNetManager, class Player& player);

    MCAPI void
    _addResponseSlotInfo(struct ItemStackRequestHandlerSlotInfo const& slotInfo, class ItemStack const& item);

    MCAPI void _cacheLegacySlotIdAssignment(
        ::ContainerEnumName             containerName,
        uchar                           slot,
        ItemStackLegacyRequestId const& legacyClientRequestId,
        ItemStackNetId const&           serverNetId
    );

    MCAPI void _cacheSlotIdAssigment(
        ContainerRuntimeId const& containerRuntimeId,
        uchar                     requestSlot,
        uchar                     slot,
        ItemStackNetId const&     serverNetId
    );

    MCAPI std::shared_ptr<class SimpleSparseContainer> _getOrInitSparseContainer(::ContainerEnumName openContainerId);

    MCAPI ::ItemStackNetResult _handleRemove(
        class ItemStackRequestActionTransferBase const& requestAction,
        class ItemStack&                                removedItem,
        ::ItemStackRequestActionHandler::RemoveType     removeType
    );

    MCAPI void _initScreen(class ItemStackNetManagerScreen& screen);

    MCAPI struct ItemStackRequestHandlerSlotInfo
    _validateRequestSlot(struct ItemStackRequestSlotInfo const& requestSlotInfo, bool isItemRequired, bool isHintSlot);

    MCAPI void addFilteredStrings(ItemStackRequestId requestId, std::vector<std::string> filteredStrings);

    MCAPI std::tuple<::ItemStackNetResult, std::vector<struct ItemStackResponseContainerInfo>>
          endRequest(::ItemStackNetResult currentResult);

    MCAPI std::vector<std::string> const& getFilteredStrings(ItemStackRequestId requestId) const;

    MCAPI ItemStackRequestId const& getRequestId() const;

    MCAPI class ContainerScreenContext const& getScreenContext() const;

    MCAPI ::ItemStackNetResult handleRequestAction(class ItemStackRequestAction const& requestAction);

    MCAPI bool isValidationCraftingImplemented();

    MCAPI std::vector<class ItemInstance> tryCraft(std::unique_ptr<struct ContainerValidationCraftInputs> craftInputs);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI ::ItemStackNetResult _handleDestroy(class ItemStackRequestActionDestroy const& requestAction);

    MCAPI ::ItemStackNetResult
    _handlePlaceInItemContainer(class ItemStackRequestActionPlaceInItemContainer const& requestAction);

    MCAPI ::ItemStackNetResult
    _handleTakeFromItemContainer(class ItemStackRequestActionTakeFromItemContainer const& requestAction);

    MCAPI ::ItemStackNetResult _handleTransfer(
        class ItemStackRequestActionTransferBase const& requestAction,
        bool                                            isSrcHintSlot,
        bool                                            isDstHintSlot,
        bool                                            isSwap
    );

    MCAPI std::optional<struct ItemStackRequestActionHandler::RequestSlotIdAssignment> _resolveSlotIdAssignment(
        struct ItemStackRequestSlotInfo const& requestSlotInfo,
        ContainerRuntimeId const&              containerRuntimeId
    );

    MCAPI struct ItemStackRequestActionHandler::ScreenData* _tryGetCurrentScreenData() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
