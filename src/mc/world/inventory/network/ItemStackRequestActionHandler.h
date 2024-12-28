#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/actor/player/Player.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/TypedRuntimeId.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/network/ItemStackNetResult.h"
#include "mc/world/inventory/network/TypedClientNetId.h"
#include "mc/world/inventory/network/TypedServerNetId.h"

// auto generated forward declare list
// clang-format off
class Container;
class ContainerScreenContext;
class ContainerScreenValidation;
class EntityContext;
class ItemInstance;
class ItemStack;
class ItemStackNetManagerScreen;
class ItemStackNetManagerServer;
class ItemStackRequestAction;
class ItemStackRequestActionCraftHandler;
class ItemStackRequestActionDestroy;
class ItemStackRequestActionTransferBase;
class Player;
class ScreenHandlerBase;
class SimpleSparseContainer;
struct ContainerRuntimeIdTag;
struct ContainerValidationCraftInputs;
struct FullContainerName;
struct ItemStackLegacyRequestIdTag;
struct ItemStackNetIdTag;
struct ItemStackRequestHandlerSlotInfo;
struct ItemStackRequestIdTag;
struct ItemStackRequestSlotInfo;
struct ItemStackResponseContainerInfo;
// clang-format on

class ItemStackRequestActionHandler {
public:
    Player& mPlayer;          // this+0x0
    char    filler[0xE0 - 8]; // BDS-WIN 1.20.51 ItemStackNetManagerServer::ItemStackNetManagerServer line=15

public:
    // ItemStackRequestActionHandler inner types declare
    // clang-format off
    struct PlayerLegacyRequestSlotIdAssignment;
    struct RequestIdAssignments;
    struct RequestSlotIdAssignment;
    struct ScreenData;
    // clang-format on

    // ItemStackRequestActionHandler inner types define
    enum class RemoveType : int {
        Drop         = 0,
        DropRandomly = 1,
        Destroy      = 2,
        Consume      = 3,
    };

    struct RequestSlotIdAssignment {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, uchar>            mSlot;
        ::ll::TypedStorage<4, 4, ::ItemStackNetId> mServerNetId;
        // NOLINTEND

    public:
        // prevent constructor by default
        RequestSlotIdAssignment& operator=(RequestSlotIdAssignment const&);
        RequestSlotIdAssignment(RequestSlotIdAssignment const&);
        RequestSlotIdAssignment();
    };

    struct RequestIdAssignments {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnke19412;
        ::ll::UntypedStorage<8, 64> mUnkc38ec0;
        // NOLINTEND

    public:
        // prevent constructor by default
        RequestIdAssignments& operator=(RequestIdAssignments const&);
        RequestIdAssignments(RequestIdAssignments const&);
        RequestIdAssignments();
    };

    struct PlayerLegacyRequestSlotIdAssignment {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::ContainerEnumName const>  mContainerName;
        ::ll::TypedStorage<4, 4, ::ContainerRuntimeId const> mContainerRuntimeId;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::ItemStackLegacyRequestId, ::ItemStackNetId>>> mSlots;
        // NOLINTEND

    public:
        // prevent constructor by default
        PlayerLegacyRequestSlotIdAssignment& operator=(PlayerLegacyRequestSlotIdAssignment const&);
        PlayerLegacyRequestSlotIdAssignment(PlayerLegacyRequestSlotIdAssignment const&);
        PlayerLegacyRequestSlotIdAssignment();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI PlayerLegacyRequestSlotIdAssignment(::ContainerEnumName containerName, ::Container& container);

        MCAPI ~PlayerLegacyRequestSlotIdAssignment();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::ContainerEnumName containerName, ::Container& container);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct ScreenData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ItemStackRequestActionCraftHandler>> mCraftRequestHandler;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScreenHandlerBase>>                  mScreenHandler;
        ::ll::
            TypedStorage<8, 64, ::std::unordered_map<::ContainerRuntimeId, ::std::shared_ptr<::SimpleSparseContainer>>>
                mRuntimeIdSparseContainerMap;
        ::ll::TypedStorage<
            8,
            64,
            ::std::unordered_map<::ItemStackRequestId, ::ItemStackRequestActionHandler::RequestIdAssignments>>
            mRecentRequests;
        // NOLINTEND

    public:
        // prevent constructor by default
        ScreenData& operator=(ScreenData const&);
        ScreenData(ScreenData const&);
        ScreenData();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ScreenData(::ItemStackRequestActionHandler::ScreenData&&);

        MCAPI ::ItemStackRequestActionHandler::ScreenData& operator=(::ItemStackRequestActionHandler::ScreenData&&);

        MCAPI ~ScreenData();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::ItemStackRequestActionHandler::ScreenData&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Player&>                    mPlayer;
    ::ll::TypedStorage<8, 8, ::ItemStackNetManagerServer&> mItemStackNetManager;
    ::ll::TypedStorage<4, 4, ::ContainerRuntimeId const>   mPlayerArmorContainerRuntimeId;
    ::ll::TypedStorage<4, 4, ::ContainerRuntimeId const>   mPlayerHandContainerRuntimeId;
    ::ll::TypedStorage<4, 4, ::ContainerRuntimeId const>   mPlayerUIContainerRuntimeId;
    ::ll::TypedStorage<8, 96, ::std::array<::ItemStackRequestActionHandler::PlayerLegacyRequestSlotIdAssignment, 3>>
                                                                                       mPlayerLegacyRequests;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>                  mLastTime;
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>>                              mCurrentRequestScreen;
    ::ll::TypedStorage<4, 16, ::ItemStackRequestId>                                    mClientRequestId;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStackResponseContainerInfo>>         mResponseContainerInfos;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::std::vector<::std::string>>> mFilteredStrings;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::std::vector<::std::string>>> mStrings;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ContainerScreenValidation>>           mScreenValidation;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStackRequestActionHandler& operator=(ItemStackRequestActionHandler const&);
    ItemStackRequestActionHandler(ItemStackRequestActionHandler const&);
    ItemStackRequestActionHandler();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemStackRequestActionHandler(::ItemStackNetManagerServer& itemStackNetManager, ::Player& player);

    MCAPI void _addResponseSlotInfo(::ItemStackRequestHandlerSlotInfo const& slotInfo, ::ItemStack const& item);

    MCAPI void _cacheLegacySlotIdAssignment(
        ::ContainerEnumName               containerName,
        uchar                             slot,
        ::ItemStackLegacyRequestId const& legacyClientRequestId,
        ::ItemStackNetId const&           serverNetId
    );

    MCAPI void _cacheSlotIdAssigment(
        ::ContainerRuntimeId const& containerRuntimeId,
        uchar                       requestSlot,
        uchar                       slot,
        ::ItemStackNetId const&     serverNetId
    );

    MCAPI ::std::shared_ptr<::SimpleSparseContainer>
    _getOrInitSparseContainer(::FullContainerName const& openContainerId);

    MCAPI ::ItemStackNetResult _handleDestroy(::ItemStackRequestActionDestroy const& requestAction);

    MCAPI ::ItemStackNetResult _handleRemove(
        ::ItemStackRequestActionTransferBase const& requestAction,
        ::ItemStack&                                removedItem,
        ::ItemStackRequestActionHandler::RemoveType removeType
    );

    MCAPI ::ItemStackNetResult _handleTransfer(
        ::ItemStackRequestActionTransferBase const& requestAction,
        bool                                        isSrcHintSlot,
        bool                                        isDstHintSlot,
        bool                                        isSwap
    );

    MCAPI void _initScreen(::ItemStackNetManagerScreen& screen);

    MCAPI ::std::optional<::ItemStackRequestActionHandler::RequestSlotIdAssignment> _resolveSlotIdAssignment(
        ::ItemStackRequestSlotInfo const& requestSlotInfo,
        ::ContainerRuntimeId const&       containerRuntimeId
    );

    MCAPI ::ItemStackRequestHandlerSlotInfo
    _validateRequestSlot(::ItemStackRequestSlotInfo const& requestSlotInfo, bool isItemRequired, bool isHintSlot);

    MCAPI void beginRequest(::ItemStackRequestId const& clientRequestId, ::ItemStackNetManagerScreen& screen);

    MCAPI ::std::tuple<::ItemStackNetResult, ::std::vector<::ItemStackResponseContainerInfo>>
    endRequest(::ItemStackNetResult currentResult);

    MCAPI ::std::vector<::std::string> const& getFilteredStrings(::ItemStackRequestId requestId) const;

    MCAPI ::ItemStackRequestId const& getRequestId() const;

    MCAPI ::ContainerScreenContext const& getScreenContext() const;

    MCAPI ::std::vector<::std::string> const& getStrings(::ItemStackRequestId requestId) const;

    MCAPI ::ItemStackNetResult handleRequestAction(::ItemStackRequestAction const& requestAction);

    MCAPI bool hasFilteredStrings(::ItemStackRequestId requestId) const;

    MCAPI bool isValidationCraftingImplemented();

    MCAPI void normalTick();

    MCAPI ::std::vector<::ItemInstance>
    tryCraft(::std::unique_ptr<::ContainerValidationCraftInputs> craftInputs, uchar numCrafts);

    MCAPI ~ItemStackRequestActionHandler();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ItemStackNetManagerServer& itemStackNetManager, ::Player& player);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
