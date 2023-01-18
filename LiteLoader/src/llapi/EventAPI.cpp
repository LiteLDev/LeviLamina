#include "llapi/EventAPI.h"

#include <functional>
#include <tuple>
#include <iostream>
#include <string>
#include <typeinfo>
#include <vector>

#include "llapi/mc/ActorDamageSource.hpp"
#include "llapi/mc/BaseCommandBlock.hpp"
#include "llapi/mc/Block.hpp"
#include "llapi/mc/BlockActor.hpp"
#include "llapi/mc/BlockSource.hpp"
#include "llapi/mc/CommandContext.hpp"
#include "llapi/mc/CommandOrigin.hpp"
#include "llapi/mc/ConnectionRequest.hpp"
#include "llapi/mc/GameMode.hpp"
#include "llapi/mc/HitResult.hpp"
#include "llapi/mc/ItemActor.hpp"
#include "llapi/mc/PistonBlockActor.hpp"
#include "llapi/mc/ComplexInventoryTransaction.hpp"
#include "llapi/mc/SignItem.hpp"
#include "llapi/mc/InventoryTransaction.hpp"
#include "llapi/mc/ItemStack.hpp"
#include "llapi/mc/Level.hpp"
#include "llapi/mc/ChestBlockActor.hpp"
#include "llapi/mc/NetworkIdentifier.hpp"
#include "llapi/mc/Objective.hpp"
#include "llapi/mc/Player.hpp"
#include "llapi/mc/PlayerActionPacket.hpp"
#include "llapi/mc/RespawnPacket.hpp"
#include "llapi/mc/Scoreboard.hpp"
#include "llapi/mc/NpcActionsContainer.hpp"
#include "llapi/mc/NpcSceneDialogueData.hpp"
#include "llapi/mc/ArmorStand.hpp"
#include "llapi/mc/NpcAction.hpp"
#include "llapi/mc/NpcComponent.hpp"
#include "llapi/mc/Container.hpp"
#include "llapi/mc/ScoreboardId.hpp"
#include "llapi/mc/ServerNetworkHandler.hpp"
#include "llapi/mc/VanillaBlocks.hpp"
#include "llapi/mc/ActorDamageSource.hpp"
#include "llapi/mc/ServerPlayer.hpp"
#include "llapi/mc/ComplexInventoryTransaction.hpp"
#include "llapi/mc/InventoryTransaction.hpp"
#include "llapi/mc/InventoryAction.hpp"
#include "llapi/mc/InventorySource.hpp"
#include "llapi/mc/ResourcePackManager.hpp"
#include "llapi/mc/ResourceLocation.hpp"
#include "llapi/mc/PackSourceFactory.hpp"
#include "llapi/mc/CompositePackSource.hpp"
#include "llapi/mc/ResourcePackPaths.hpp"
#include "llapi/mc/DirectoryPackSource.hpp"
#include "llapi/mc/PackSource.hpp"
#include "llapi/mc/BucketItem.hpp"
#include "llapi/mc/BucketableComponent.hpp"
#include "llapi/mc/AnimatePacket.hpp"
#include "llapi/mc/Util.hpp"

#include "llapi/utils/StringHelper.h"
#include "llapi/utils/DbgHelper.h"

#include "llapi/Global.h"
#include "llapi/DynamicCommandAPI.h"
#include "llapi/RegCommandAPI.h"
#include "llapi/I18nAPI.h"
#include "llapi/LoggerAPI.h"
#include "llapi/ScheduleAPI.h"

#include "liteloader/Config.h"
#include "liteloader/LiteLoader.h"

static_assert(offsetof(InventoryAction, source) == 0x0);
static_assert(offsetof(InventoryAction, slot) == 0x0c);
static_assert(offsetof(InventorySource, type) == 0x0);
static_assert(offsetof(InventorySource, container) == 0x04);
static_assert(offsetof(InventorySource, flags) == 0x08);
static_assert(offsetof(ComplexInventoryTransaction, type) == 0x08);
static_assert(offsetof(ComplexInventoryTransaction, data) == 0x10);
static_assert(offsetof(InventoryTransaction, actions) == 0x0);
static_assert(offsetof(InventoryTransaction, items) == 0x40);

using namespace Event;
using std::vector;
using ll::logger;

/////////////////////////////// Event Data ///////////////////////////////

int globalListenerId = 0;

template <typename EVENT>
struct ListenerData {
    std::string pluginName;
    int listenerId = -1;
    bool isRef = false;
    std::function<bool(EVENT)> callback;
    std::function<bool(EVENT&)> callbackRef;
};

template <typename EVENT>
std::list<ListenerData<EVENT>> listeners;


/////////////////////////////// Listener Manager ///////////////////////////////

template <typename EVENT>
int EventManager<EVENT>::addEventListener(std::string name, std::function<bool(EVENT)> callback) {
    int newId = ++globalListenerId;
    listeners<EVENT>.push_back({name, newId, false, callback, nullptr});
    return newId;
}

template <typename EVENT>
int EventManager<EVENT>::addEventListenerRef(std::string name, std::function<bool(EVENT&)> callback) {
    int newId = ++globalListenerId;
    listeners<EVENT>.push_back({name, newId, true, nullptr, callback});
    return newId;
}

template <typename EVENT>
bool EventManager<EVENT>::removeEventListener(int id) {
    for (auto i = listeners<EVENT>.begin(); i != listeners<EVENT>.end(); ++i)
        if (i->listenerId == id) {
            listeners<EVENT>.erase(i);
            return true;
        }
    return false;
}

template <typename EVENT>
bool EventManager<EVENT>::hasListener() {
    return !listeners<EVENT>.empty();
}


/////////////////////////////// Event Calling ///////////////////////////////

inline void OutputError(std::string errorMsg, int errorCode, const std::string& errorWhat, std::string eventName, std::string pluginName) {
    logger.error(errorMsg);
    logger.error("Error: Code [{}] {}", errorCode, errorWhat);
    logger.error("In Event ({})", eventName);
    if (!pluginName.empty()) {
        auto plugin = ll::getPlugin(pluginName);
        if (plugin) {
            logger.error("In Plugin <{} {}>", plugin->name, plugin->version.toString());
        } else {
            logger.error("In Plugin <{}>", pluginName);
        }
    }
}

template <typename EVENT>
bool EventManager<EVENT>::call(EVENT& ev) {
    bool passToBDS = true;
    for (auto i = listeners<EVENT>.begin(); i != listeners<EVENT>.end(); ++i) {
        try {
            bool res = i->isRef ? i->callbackRef(ev) : i->callback(ev);
            if (!res)
                passToBDS = false;
        } catch (const seh_exception& e) {
            OutputError("Uncaught SEH Exception Detected!", e.code(), TextEncoding::toUTF8(e.what()), typeid(EVENT).name(), i->pluginName);
        } catch (const std::exception& e) {
            OutputError("Uncaught C++ Exception Detected!", errno, TextEncoding::toUTF8(e.what()), typeid(EVENT).name(), i->pluginName);
        } catch (...) {
            OutputError("Uncaught Exception Detected!", -1, "", typeid(EVENT).name(), i->pluginName);
        }
    }


    ///////////////////////////////////// For compatibility DO NOT UPDATE /////////////////////////////////////
    auto iNoConst = ev.listenersNoConst.begin();
    try {
        for (; iNoConst != ev.listenersNoConst.end(); ++iNoConst)
            if (!iNoConst->second(ev))
                passToBDS = false;
    } catch (const seh_exception& e) { OutputError("Uncaught SEH Exception Detected!", e.code(), TextEncoding::toUTF8(e.what()), typeid(EVENT).name(), iNoConst->first); } catch (const std::exception& e) {
        OutputError("Uncaught Exception Detected! ", -1, TextEncoding::toUTF8(e.what()), typeid(EVENT).name(), iNoConst->first);
    } catch (...) { OutputError("Uncaught Exception Detected!", -1, "", typeid(EVENT).name(), iNoConst->first); }
    ///////////////////////////////////// For compatibility DO NOT UPDATE /////////////////////////////////////
    auto i = ev.listeners.begin();
    try {
        for (; i != ev.listeners.end(); ++i)
            if (!i->second(ev))
                passToBDS = false;
    } catch (const seh_exception& e) { OutputError("Uncaught SEH Exception Detected!", e.code(), TextEncoding::toUTF8(e.what()), typeid(EVENT).name(), i->first); } catch (const std::exception& e) {
        OutputError("Uncaught Exception Detected! ", -1, TextEncoding::toUTF8(e.what()), typeid(EVENT).name(), i->first);
    } catch (...) { OutputError("Uncaught Exception Detected!", -1, "", typeid(EVENT).name(), i->first); }
    ///////////////////////////////////// For compatibility DO NOT UPDATE /////////////////////////////////////

    return passToBDS;
}

template <typename EVENT>
bool EventManager<EVENT>::callToPlugin(std::string pluginName, EVENT& ev) {
    bool passToBDS = true;
    for (auto i = listeners<EVENT>.begin(); i != listeners<EVENT>.end(); ++i) {
        if (i->pluginName != pluginName)
            continue;
        try {
            bool res = i->isRef ? i->callbackRef(ev) : i->callback(ev);
            if (!res)
                passToBDS = false;
        } catch (const seh_exception& e) {
            OutputError("Uncaught SEH Exception Detected!", e.code(), TextEncoding::toUTF8(e.what()), typeid(EVENT).name(), i->pluginName);
        } catch (const std::exception& e) {
            OutputError("Uncaught C++ Exception Detected!", errno, TextEncoding::toUTF8(e.what()), typeid(EVENT).name(), i->pluginName);
        } catch (...) {
            OutputError("Uncaught Exception Detected!", -1, "", typeid(EVENT).name(), i->pluginName);
        }
    }
    return passToBDS;
}


/////////////////////////////// Event Declare ///////////////////////////////

#define DECLARE_EVENT_DATA(EVENT)                                                                    \
    template class Event::EventManager<EVENT>;                                                              \
    /*********************** For Compatibility ***********************/                              \
    std::list<std::pair<string, std::function<bool(const EVENT&)>>> EventTemplate<EVENT>::listeners; \
    std::list<std::pair<string, std::function<bool(EVENT&)>>> EventTemplate<EVENT>::listenersNoConst;

DECLARE_EVENT_DATA(PlayerPreJoinEvent);
DECLARE_EVENT_DATA(PlayerJoinEvent);
DECLARE_EVENT_DATA(PlayerLeftEvent);
DECLARE_EVENT_DATA(PlayerRespawnEvent);
DECLARE_EVENT_DATA(PlayerChatEvent);
DECLARE_EVENT_DATA(PlayerUseItemEvent);
DECLARE_EVENT_DATA(PlayerUseItemOnEvent);
DECLARE_EVENT_DATA(PlayerUseBucketEvent);
DECLARE_EVENT_DATA(PlayerChangeDimEvent);
DECLARE_EVENT_DATA(PlayerJumpEvent);
DECLARE_EVENT_DATA(PlayerSneakEvent);
DECLARE_EVENT_DATA(PlayerAttackEvent);
DECLARE_EVENT_DATA(PlayerAttackBlockEvent);
DECLARE_EVENT_DATA(PlayerDieEvent);
DECLARE_EVENT_DATA(PlayerPickupItemEvent);
DECLARE_EVENT_DATA(PlayerDropItemEvent);
DECLARE_EVENT_DATA(PlayerEatEvent);
DECLARE_EVENT_DATA(PlayerAteEvent);
DECLARE_EVENT_DATA(PlayerConsumeTotemEvent);
DECLARE_EVENT_DATA(PlayerCmdEvent);
DECLARE_EVENT_DATA(PlayerDestroyBlockEvent);
DECLARE_EVENT_DATA(PlayerPlaceBlockEvent);
DECLARE_EVENT_DATA(BlockPlacedByPlayerEvent);
DECLARE_EVENT_DATA(PlayerEffectChangedEvent);
DECLARE_EVENT_DATA(PlayerStartDestroyBlockEvent);
DECLARE_EVENT_DATA(PlayerOpenContainerEvent);
DECLARE_EVENT_DATA(PlayerCloseContainerEvent);
DECLARE_EVENT_DATA(PlayerInventoryChangeEvent);
DECLARE_EVENT_DATA(PlayerSprintEvent);
DECLARE_EVENT_DATA(PlayerSetArmorEvent);
DECLARE_EVENT_DATA(PlayerUseRespawnAnchorEvent);
DECLARE_EVENT_DATA(PlayerOpenContainerScreenEvent);
DECLARE_EVENT_DATA(PlayerUseFrameBlockEvent);
DECLARE_EVENT_DATA(PlayerExperienceAddEvent);
DECLARE_EVENT_DATA(PlayerInteractEntityEvent);
DECLARE_EVENT_DATA(MobHurtEvent);
DECLARE_EVENT_DATA(MobDieEvent);
DECLARE_EVENT_DATA(EntityExplodeEvent);
DECLARE_EVENT_DATA(ProjectileHitEntityEvent);
DECLARE_EVENT_DATA(WitherBossDestroyEvent);
DECLARE_EVENT_DATA(EnderDragonDestroyEvent);
DECLARE_EVENT_DATA(EntityRideEvent);
DECLARE_EVENT_DATA(EntityStepOnPressurePlateEvent);
DECLARE_EVENT_DATA(NpcCmdEvent);
DECLARE_EVENT_DATA(ProjectileSpawnEvent);
DECLARE_EVENT_DATA(ProjectileCreatedEvent);
DECLARE_EVENT_DATA(EntityTransformEvent);
DECLARE_EVENT_DATA(BlockInteractedEvent);
DECLARE_EVENT_DATA(ArmorStandChangeEvent);
DECLARE_EVENT_DATA(BlockExplodeEvent);
DECLARE_EVENT_DATA(ContainerChangeEvent);
DECLARE_EVENT_DATA(PistonPushEvent);
DECLARE_EVENT_DATA(PistonTryPushEvent);
DECLARE_EVENT_DATA(RedStoneUpdateEvent);
DECLARE_EVENT_DATA(BlockExplodedEvent);
DECLARE_EVENT_DATA(LiquidSpreadEvent);
DECLARE_EVENT_DATA(ProjectileHitBlockEvent);
DECLARE_EVENT_DATA(HopperSearchItemEvent);
DECLARE_EVENT_DATA(HopperPushOutEvent);
DECLARE_EVENT_DATA(BlockChangedEvent);
DECLARE_EVENT_DATA(FarmLandDecayEvent);
DECLARE_EVENT_DATA(FireSpreadEvent);
DECLARE_EVENT_DATA(CmdBlockExecuteEvent);
DECLARE_EVENT_DATA(ConsoleCmdEvent);
DECLARE_EVENT_DATA(PlayerScoreChangedEvent);
DECLARE_EVENT_DATA(ConsoleOutputEvent);
DECLARE_EVENT_DATA(PostInitEvent);
DECLARE_EVENT_DATA(ServerStartedEvent);
DECLARE_EVENT_DATA(ServerStoppedEvent);
DECLARE_EVENT_DATA(RegCmdEvent);
DECLARE_EVENT_DATA(PlayerBedEnterEvent);
DECLARE_EVENT_DATA(ScriptPluginManagerEvent);
DECLARE_EVENT_DATA(MobTrySpawnEvent);
DECLARE_EVENT_DATA(MobSpawnedEvent);
DECLARE_EVENT_DATA(FormResponsePacketEvent);
DECLARE_EVENT_DATA(ResourcePackInitEvent);
DECLARE_EVENT_DATA(PlayerOpenInventoryEvent);
DECLARE_EVENT_DATA(PlayerSwingEvent);

#define IF_LISTENED(EVENT)      \
    if (EVENT::hasListener()) { \
        try

#define IF_LISTENED_END(EVENT)                        \
    catch (...) {                                     \
        logger.error("Event Callback Failed!");       \
        logger.error("Uncaught Exception Detected!"); \
        logger.error("In Event: " #EVENT "");         \
        PrintCurrentStackTraceback();                 \
    }                                                 \
    }


/////////////////////////////// Events ///////////////////////////////


/////////////////// PreJoin ///////////////////
TClasslessInstanceHook(void, "?sendLoginMessageLocal@ServerNetworkHandler@@QEAAXAEBVNetworkIdentifier@@"
                             "AEBVConnectionRequest@@AEAVServerPlayer@@@Z",
                       NetworkIdentifier* Ni, ConnectionRequest* a3, ServerPlayer* sp) {
    IF_LISTENED(PlayerPreJoinEvent) {
        PlayerPreJoinEvent ev{};
        ev.mPlayer = sp;
        ev.mIP = Ni->getIP();
        ev.mXUID = sp->getXuid();
        if (!ev.call())
            return;
    }
    IF_LISTENED_END(PlayerPreJoinEvent)
    return original(this, Ni, a3, sp);
}


/////////////////// PlayerJoin ///////////////////
TInstanceHook(bool, "?setLocalPlayerAsInitialized@ServerPlayer@@QEAAXXZ",
              ServerPlayer) {
    IF_LISTENED(PlayerJoinEvent) {
        PlayerJoinEvent ev{};
        ev.mPlayer = this;

        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(PlayerJoinEvent)
    return original(this);
}


/////////////////// PlayerLeft ///////////////////
THook(void, "?disconnect@ServerPlayer@@QEAAXXZ",
      ServerPlayer* sp) {
    IF_LISTENED(PlayerLeftEvent) {
        PlayerLeftEvent ev{};
        ev.mPlayer = sp;
        ev.mXUID = sp->getXuid();
        ev.call();
    }
    IF_LISTENED_END(PlayerLeftEvent)
    return original(sp);
}

/////////////////// PlayerRespawn ///////////////////
TInstanceHook(void, "?respawn@Player@@UEAAXXZ",
              Player)
{
    // If the player returns from TheEnd, the health will > 0.
    if (getHealth() <= 0)
    {
        IF_LISTENED(PlayerRespawnEvent) {
            PlayerRespawnEvent ev{};            
            ev.mPlayer = this;
            if (!ev.mPlayer)
                return;
            ev.call();
        }
        IF_LISTENED_END(PlayerRespawnEvent)
    }
    original(this);
}

/////////////////// PlayerChat ///////////////////
TInstanceHook(void, "?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVTextPacket@@@Z",
              ServerNetworkHandler, NetworkIdentifier* id, void* text) {
    IF_LISTENED(PlayerChatEvent) {
        Event::PlayerChatEvent ev{};
        ev.mPlayer = this->getServerPlayer(*id);
        if (!ev.mPlayer)
            return;

        ev.mMessage = std::string(*(std::string*)((uintptr_t)text + 88));

        if (!ev.call())
            return;
        *(std::string*)((uintptr_t)text + 88) = ev.mMessage;
    }
    IF_LISTENED_END(PlayerChatEvent);
    return original(this, id, text);
}

/////////////////// PlayerChangeDim ///////////////////
class ChangeDimensionRequest {
public:
    int mState;
    AutomaticID<Dimension, int> mFromDimensionId;
    AutomaticID<Dimension, int> mToDimensionId;
    Vec3 mPosition;
    bool mUsePortal;
    bool mRespawn;
    std::unique_ptr<CompoundTag> mAgentTag;
};

TClasslessInstanceHook(bool, "?requestPlayerChangeDimension@Level@@UEAAXAEAVPlayer@@V?$unique_ptr@VChangeDimensionRequest@@U?$default_delete@VChangeDimensionRequest@@@std@@@std@@@Z",
                       Player* sp, std::unique_ptr<ChangeDimensionRequest> request) {

    if (request->mToDimensionId == sp->getDimensionId())
        return original(this, sp, std::move(request));

    IF_LISTENED(PlayerChangeDimEvent) {
        PlayerChangeDimEvent ev{};
        ev.mPlayer = sp;
        ev.mToDimensionId = request->mToDimensionId;
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(PlayerChangeDimEvent)
    return original(this, sp, std::move(request));
}

int num = 0;
/////////////////// PlayerJump ///////////////////
TInstanceHook(void, "?jumpFromGround@Player@@UEAAXXZ", Player) {
    IF_LISTENED(PlayerJumpEvent) {
        PlayerJumpEvent ev{};
        ev.mPlayer = this;
        ev.call();
    }
    IF_LISTENED_END(PlayerJumpEvent)
    return original(this);
}

/////////////////// PlayerSneak ///////////////////
TClasslessInstanceHook(void, "?sendActorSneakChanged@ActorEventCoordinator@@QEAAXAEAVActor@@_N@Z",
                       Actor* ac, bool isSneaking) {
    IF_LISTENED(PlayerSneakEvent) {
        PlayerSneakEvent ev{};
        ev.mPlayer = (Player*)ac;
        ev.mIsSneaking = isSneaking;
        ev.call();
        isSneaking = ev.mIsSneaking;
    }
    IF_LISTENED_END(PlayerSneakEvent)
    return original(this, ac, isSneaking);
}


/////////////////// PlayerSwing ///////////////////
THook(void,
      "?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@"
      "AEBVAnimatePacket@@@Z",
      ServerNetworkHandler* serverNetworkHandler,
      NetworkIdentifier const& networkIdentifier,
      AnimatePacket const& animatePacket) {
    if (animatePacket.mAction == AnimatePacket::Action::Swing) {
        IF_LISTENED(PlayerSwingEvent) {
            PlayerSwingEvent ev{};
            ev.mPlayer = serverNetworkHandler->getServerPlayer(networkIdentifier);
        }
        IF_LISTENED_END(PlayerSwingEvent)
    }
    return original(serverNetworkHandler, networkIdentifier, animatePacket);
}

/////////////////// PlayerAttackEntity ///////////////////
TInstanceHook(bool, "?attack@Player@@UEAA_NAEAVActor@@AEBW4ActorDamageCause@@@Z",
              Player, Actor* ac, int* damageCause) {
    IF_LISTENED(PlayerAttackEvent) {
        PlayerAttackEvent ev{};
        ev.mPlayer = this;
        ev.mTarget = ac;
        ev.mAttackDamage = *damageCause;
        if (!ev.call())
            return false;

        ac = ev.mTarget;
        *damageCause = ev.mAttackDamage;
    }
    IF_LISTENED_END(PlayerAttackEvent)
    return original(this, ac, damageCause);
}

/////////////////// PlayerAttackBlock ///////////////////
TInstanceHook(bool, "?attack@Block@@QEBA_NPEAVPlayer@@AEBVBlockPos@@@Z",
              Block, Player* pl, BlockPos* bp) {
    IF_LISTENED(PlayerAttackBlockEvent) {
        PlayerAttackBlockEvent ev{};
        ev.mPlayer = pl;
        ev.mItemStack = pl->getHandSlot();
        ev.mBlockInstance = BlockInstance::createBlockInstance(this, *bp, pl->getDimensionId());
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(PlayerAttackBlockEvent)
    return original(this, pl, bp);
}

/////////////////// PlayerTakeItem ///////////////////
TInstanceHook(bool, "?take@Player@@QEAA_NAEAVActor@@HH@Z",
              Player, Actor* actor, int a2, int a3) {
    IF_LISTENED(PlayerPickupItemEvent) {
        ItemStack* it = nullptr;
        if (actor->isItemActor())
            it = ((ItemActor*)actor)->getItemStack();

        PlayerPickupItemEvent ev{};
        ev.mPlayer = this;
        ev.mItemEntity = actor;
        ev.mItemStack = it;
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(PlayerPickupItemEvent)
    return original(this, actor, a2, a3);
}

bool isQDrop;
bool isDieDrop;
/////////////////// PlayerDropItem ///////////////////
TInstanceHook(bool, "?drop@Player@@UEAA_NAEBVItemStack@@_N@Z",
              Player, ItemStack* it, bool a3) {
    if (isQDrop)
        return original(this, it, a3);
    if (isDieDrop)
        return original(this, it, a3);
    IF_LISTENED(PlayerDropItemEvent) {
        PlayerDropItemEvent ev{};
        ev.mPlayer = this;
        ev.mItemStack = it;
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(PlayerDropItemEvent)
    return original(this, it, a3);
}

/////////////////// PlayerConsumeTotem ///////////////////
TInstanceHook(void, "?consumeTotem@Player@@UEAA_NXZ", Player) {
    IF_LISTENED(PlayerConsumeTotemEvent) {
        PlayerConsumeTotemEvent ev{};
        ev.mPlayer = this;
        if (!ev.call())
            return;
    }
    IF_LISTENED_END(PlayerConsumeTotemEvent)
    return original(this);
}


/////////////////// PlayerEffectChanged ///////////////////
// add
TInstanceHook(void, "?onEffectAdded@ServerPlayer@@MEAAXAEAVMobEffectInstance@@@Z", Player, MobEffectInstance* effect) {
    IF_LISTENED(PlayerEffectChangedEvent) {
        PlayerEffectChangedEvent ev{};
        ev.mPlayer = this;
        ev.mEventType = PlayerEffectChangedEvent::EventType::Add;
        ev.mEffect = effect;
        ev.call();
    }
    IF_LISTENED_END(PlayerEffectChangedEvent)
    return original(this, effect);
}
// remove
TInstanceHook(void, "?onEffectRemoved@ServerPlayer@@MEAAXAEAVMobEffectInstance@@@Z", Player, MobEffectInstance* effect) {
    IF_LISTENED(PlayerEffectChangedEvent) {
        PlayerEffectChangedEvent ev{};
        ev.mPlayer = this;
        ev.mEventType = PlayerEffectChangedEvent::EventType::Remove;
        ev.mEffect = effect;
        ev.call();
    }
    IF_LISTENED_END(PlayerEffectChangedEvent)
    return original(this, effect);
}
// update
TInstanceHook(void, "?onEffectUpdated@ServerPlayer@@MEAAXAEAVMobEffectInstance@@@Z", Player, MobEffectInstance* effect) {
    IF_LISTENED(PlayerEffectChangedEvent) {
        PlayerEffectChangedEvent ev{};
        ev.mPlayer = this;
        ev.mEventType = PlayerEffectChangedEvent::EventType::Update;
        ev.mEffect = effect;
        ev.call();
    }
    IF_LISTENED_END(PlayerEffectChangedEvent)
    return original(this, effect);
}


/////////////////// PlayerStartDestroyBlock ///////////////////
TClasslessInstanceHook(void, "?sendBlockDestructionStarted@BlockEventCoordinator@@QEAAXAEAVPlayer@@AEBVBlockPos@@@Z",
                       Player* pl, BlockPos* bp) {
    IF_LISTENED(PlayerStartDestroyBlockEvent) {
        PlayerStartDestroyBlockEvent ev{};
        ev.mPlayer = pl;
        ev.mBlockInstance = Level::getBlockInstance(bp, Level::getBlockSource(pl));
        ev.call();
    }
    IF_LISTENED_END(PlayerStartDestroyBlockEvent)
    return original(this, pl, bp);
}

/////////////////// PlayerPlaceBlock ///////////////////
#include "llapi/mc/ItemUseInventoryTransaction.hpp"
TInstanceHook(char, "?checkBlockPermissions@BlockSource@@QEAA_NAEAVActor@@AEBVBlockPos@@EAEBVItemStackBase@@_N@Z",
              BlockSource, Actor* ac, BlockPos* bp, unsigned __int8 facing, ItemStackBase* item, bool a6) {
    if (ac->isPlayer()) {
        IF_LISTENED(PlayerPlaceBlockEvent) {
            auto pl = (Player*)ac;
            PlayerPlaceBlockEvent ev{};
            ev.mPlayer = pl;
            ev.mBlockInstance = this->getBlockInstance(*bp);
            if (!ev.call()) { // this pointer is not used.
                ((ItemUseInventoryTransaction*)nullptr)->resendBlocksAroundArea(*pl, *bp, facing);
                return false;
            }
        }
        IF_LISTENED_END(PlayerPlaceBlockEvent)
    }
    return original(this, ac, bp, facing, item, a6);
}

/////////////////// BlockPlacedByPlayerEvent ///////////////////
TClasslessInstanceHook(void, "?sendBlockPlacedByPlayer@BlockEventCoordinator@@QEAAXAEAVPlayer@@AEBVBlock@@AEBVBlockPos@@_N@Z",
                       Player* pl, Block* bl, BlockPos* bp, bool a5) {
    IF_LISTENED(BlockPlacedByPlayerEvent) {
        BlockPlacedByPlayerEvent ev{};
        ev.mPlayer = pl;
        ev.mBlockInstance = BlockInstance::createBlockInstance(bl, *bp, pl->getDimensionId());
        ev.call();
    }
    IF_LISTENED_END(BlockPlacedByPlayerEvent)
    original(this, pl, bl, bp, a5);
}

/////////////////// PlayerOpenContainer ///////////////////
TClasslessInstanceHook(__int64, "?onEvent@VanillaServerGameplayEventListener@@UEAA?AW4EventResult@@AEBUPlayerOpenContainerEvent@@@Z", void* a2) {
    Actor* pl = SymCall("??$tryUnwrap@VActor@@$$V@WeakEntityRef@@QEBAPEAVActor@@XZ", Actor*, void*)(a2);
    if (pl->isPlayer()) {
        IF_LISTENED(PlayerOpenContainerEvent) {
            BlockPos bp = dAccess<BlockPos>(a2, 28);
            PlayerOpenContainerEvent ev{};
            ev.mPlayer = (Player*)pl;
            ev.mBlockInstance = Level::getBlockInstance(bp, pl->getDimensionId());
            ev.mContainer = ev.mBlockInstance.getContainer();
            if (!ev.call())
                return 0;
        }
        IF_LISTENED_END(PlayerOpenContainerEvent)
    }
    return original(this, a2);
}

/////////////////// PlayerCloseContainer ///////////////////
// chest
TInstanceHook(bool, "?stopOpen@ChestBlockActor@@UEAAXAEAVPlayer@@@Z",
              ChestBlockActor, Player* pl) {
    IF_LISTENED(PlayerCloseContainerEvent) {
        auto* ba = (BlockActor*)((char*)this - 240); // IDA ChestBlockActor::stopOpen
        BlockPos bp = ba->getPosition();

        PlayerCloseContainerEvent ev{};
        ev.mPlayer = pl;
        ev.mBlockInstance = Level::getBlockInstance(bp, pl->getDimensionId());
        ev.mContainer = Level::getBlockInstance(bp, pl->getDimensionId()).getContainer();
        ev.call();
    }
    IF_LISTENED_END(PlayerCloseContainerEvent)
    return original(this, pl);
}
// barrel
TClasslessInstanceHook(bool, "?stopOpen@BarrelBlockActor@@UEAAXAEAVPlayer@@@Z",
                       Player* pl) {
    IF_LISTENED(PlayerCloseContainerEvent) {
        auto* ba = (BlockActor*)((char*)this - 240); // IDA ChestBlockActor::stopOpen
        BlockPos bp = ba->getPosition();

        PlayerCloseContainerEvent ev{};
        ev.mPlayer = pl;
        ev.mBlockInstance = Level::getBlockInstance(bp, pl->getDimensionId());
        ev.mContainer = Level::getBlockInstance(bp, pl->getDimensionId()).getContainer();
        ev.call();
    }
    IF_LISTENED_END(PlayerCloseContainerEvent)
    return original(this, pl);
}

/////////////////// PlayerInventoryChange ///////////////////
TInstanceHook(void, "?inventoryChanged@Player@@UEAAXAEAVContainer@@HAEBVItemStack@@1_N@Z",
              Player, void* container, int slotNumber, ItemStack* oldItem, ItemStack* newItem, bool is) {
    IF_LISTENED(PlayerInventoryChangeEvent) {
        if (this->isPlayer()) {
            PlayerInventoryChangeEvent ev{};
            ev.mPlayer = this;
            ev.mSlot = (int)slotNumber;
            ev.mPreviousItemStack = oldItem;
            ev.mNewItemStack = newItem;
            ev.call();
        }
    }
    IF_LISTENED_END(PlayerInventoryChangeEvent)
    return original(this, container, slotNumber, oldItem, newItem, is);
}

/////////////////// PlayerMove ///////////////////
/*
TClasslessInstanceHook(void, "?sendPlayerMove@PlayerEventCoordinator@@QEAAXAEAVPlayer@@@Z",
                       Player* pl) {
    IF_LISTENED(PlayerMoveEvent) {
        if (pl->isMoving()) {
            PlayerMoveEvent ev{};
            ev.mPlayer = pl;
            ev.mPos = pl->getPosition();
            ev.call();
        }
    }
    IF_LISTENED_END(PlayerMoveEvent)
    return original(this, pl);
}
*/

/////////////////// PlayerSprint ///////////////////
TInstanceHook(void, "?setSprinting@Mob@@UEAAX_N@Z",
              Mob, bool sprinting) {
    IF_LISTENED(PlayerSprintEvent) {
        if (this->isPlayer() && this->isSprinting() != sprinting) {
            PlayerSprintEvent ev{};
            ev.mPlayer = (Player*)this;
            ev.mIsSprinting = sprinting;
            if (!ev.call())
                return;

            // sprinting = ev.mIsSprinting;
        }
    }
    IF_LISTENED_END(PlayerSprintEvent)
    return original(this, sprinting);
}
#include "llapi/mc/PlayerInventory.hpp"
#include "llapi/mc/SimpleContainer.hpp"
/////////////////// PlayerSetArmor ///////////////////
TInstanceHook(void, "?setArmor@ServerPlayer@@UEAAXW4ArmorSlot@@AEBVItemStack@@@Z",
              Player, unsigned slot, ItemStack* it) {
    original(this, slot, it);
    IF_LISTENED(PlayerSetArmorEvent) {
        if (this->isPlayer()) {
            PlayerSetArmorEvent ev{};
            ev.mPlayer = this;
            ev.mSlot = slot;
            ev.mArmorItem = it;
            if (!ev.call()) {
                auto& uid = getUniqueID();
                auto& plInv = getSupplies();
                plInv.add(*it, 1);
                getArmorContainer().setItem(slot, ItemStack::EMPTY_ITEM);
                Schedule::delay([uid] {
                    auto sp = Global<Level>->getPlayer(uid);
                    if (sp)
                        sp->refreshInventory();
                },1);
            }
        }
    }
    IF_LISTENED_END(PlayerSetArmorEvent)
}

/////////////////// PlayerUseRespawnAnchor ///////////////////
TInstanceHook(bool, "?trySetSpawn@RespawnAnchorBlock@@CA_NAEAVPlayer@@AEBVBlockPos@@AEAVBlockSource@@AEAVLevel@@@Z",
              Player, BlockPos* bp, BlockSource* bs, Level* a4) {
    IF_LISTENED(PlayerUseRespawnAnchorEvent) {
        PlayerUseRespawnAnchorEvent ev{};
        ev.mPlayer = this;
        ev.mBlockInstance = Level::getBlockInstance(bp, bs);
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(PlayerUseRespawnAnchorEvent)
    return original(this, bp, bs, a4);
}

/////////////////// PlayerOpenContainerScreen ///////////////////
TInstanceHook(bool, "?canOpenContainerScreen@Player@@UEAA_NXZ", Player) {
    IF_LISTENED(PlayerOpenContainerScreenEvent) {
        PlayerOpenContainerScreenEvent ev{};
        ev.mPlayer = this;
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(PlayerOpenContainerScreenEvent)
    return original(this);
}


/////////////////// PlayerCmdEvent & ConsoleCmd ///////////////////
TClasslessInstanceHook(MCRESULT*, "?executeCommand@MinecraftCommands@@QEBA?AUMCRESULT@@AEAVCommandContext@@_N@Z",
                           MCRESULT* rtn, CommandContext* context, bool print) {
    Player* sp;
    string cmd;

    try {
        sp = context->getOrigin().getPlayer();
        cmd = context->getCmd();
        if (!cmd.empty() && cmd.at(0) == '/') {
            cmd = cmd.substr(1, cmd.size() - 1);
        }

        if (!Util::isValidUTF8(cmd)) {
            logger.error("Detected invalid utf-8 character, command will not be executed");
            return rtn;
        }
    } catch (...) {
        return rtn;
    }

    if (ll::isDebugMode() && ll::globalRuntimeConfig.tickThreadId != std::this_thread::get_id()) {
        logger.warn(R"(The thread executing the command "{}" is not the "MC_SERVER" thread)", cmd);
    }
    if (sp) {
        // PlayerCmd
        IF_LISTENED(PlayerCmdEvent) {
            PlayerCmdEvent ev{};
            ev.mCommand = cmd;
            ev.mPlayer = sp;
            ev.mResult = rtn;

            if (!ev.call())
                return rtn;

            if (ev.mCommand.empty() || ev.mCommand.at(0) != '/')
                context->getCmd() = "/" + ev.mCommand;
            else
                context->getCmd() = ev.mCommand;
        }
        IF_LISTENED_END(PlayerCmdEvent)
    } else {
        // ConsoleCmd
        IF_LISTENED(ConsoleCmdEvent) {
            ConsoleCmdEvent ev{};
            ev.mCommand = cmd;

            if (!ev.call())
                return rtn;

            if (ev.mCommand.empty() || ev.mCommand.at(0) != '/')
                context->getCmd() = "/" + ev.mCommand;
            else
                context->getCmd() = ev.mCommand;
        }
        IF_LISTENED_END(ConsoleCmdEvent)
    }
    return original(this, rtn, context, print);
}

/////////////////// PlayerExperienceAddEvent ///////////////////
TInstanceHook(void, "?addExperience@Player@@UEAAXH@Z", Player, int exp) {
    IF_LISTENED(PlayerExperienceAddEvent) {
        PlayerExperienceAddEvent ev{};
        ev.mPlayer = this;
        ev.mExp = exp;
        if (!ev.call())
            return;
    }
    IF_LISTENED_END(PlayerExperienceAddEvent)
    return original(this, exp);
}

////////////// PlayerInteractEntity //////////////
TInstanceHook(void, "?handle@ItemUseOnActorInventoryTransaction@@UEBA?AW4InventoryTransactionError@@AEAVPlayer@@_N@Z",
              ServerNetworkHandler, ServerPlayer* sp, bool unk) {
    IF_LISTENED(PlayerInteractEntityEvent) {
        PlayerInteractEntityEvent ev{};
        ev.mPlayer = sp;
        ev.mTargetId = dAccess<ActorRuntimeID, 104>(this);
        ev.mInteractiveMode = static_cast<PlayerInteractEntityEvent::InteractiveMode>(dAccess<int, 112>(this));
        if (!ev.call())
            return;
    }
    IF_LISTENED_END(PlayerInteractEntityEvent)

    return original(this, sp, unk);
}

/////////////////// CmdBlockExecute ///////////////////
TInstanceHook(bool, "?_performCommand@BaseCommandBlock@@AEAA_NAEAVBlockSource@@AEBVCommandOrigin@@AEA_N@Z",
              BaseCommandBlock, BlockSource* a2, CommandOrigin* a3, bool* a4) {
    IF_LISTENED(CmdBlockExecuteEvent) {
        CmdBlockExecuteEvent ev{};
        ev.mCommand = this->getCommand();
        if ((OriginType)a3->getOriginType() == OriginType::MinecartBlock) {
            ev.mIsMinecart = true;
            ev.mMinecart = a3->getEntity();
        } else {
            ev.mIsMinecart = false;
            ev.mBlockInstance = Level::getBlockInstance(a3->getBlockPosition(), a2);
        }

        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(CmdBlockExecuteEvent)
    return original(this, a2, a3, a4);
}

/////////////////// BlockInteracted ///////////////////
TClasslessInstanceHook(unsigned short,
                       "?onBlockInteractedWith@VanillaServerGameplayEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVBlockPos@@@Z",
                       Player* pl, BlockPos* bp) {
    IF_LISTENED(BlockInteractedEvent) {
        BlockInteractedEvent ev{};
        ev.mPlayer = pl;
        ev.mBlockInstance = Level::getBlockInstance(bp, pl->getDimensionId());
        if (!ev.call())
            return 0;
    }
    IF_LISTENED_END(BlockInteractedEvent)
    return original(this, pl, bp);
}

/////////////////// BlockChanged ///////////////////
TInstanceHook(void, "?_blockChanged@BlockSource@@IEAAXAEBVBlockPos@@IAEBVBlock@@1HPEBUActorBlockSyncMessage@@PEAVActor@@@Z",
              BlockSource, BlockPos* bp, int a3, Block* afterBlock, Block* beforeBlock, int a6, void* a7, Actor* ac) {
    IF_LISTENED(BlockChangedEvent) {
        int dimId = this->getDimensionId();
        BlockChangedEvent ev{};
        ev.mPreviousBlockInstance = BlockInstance::createBlockInstance(beforeBlock, *bp, dimId);
        ev.mNewBlockInstance = BlockInstance::createBlockInstance(afterBlock, *bp, dimId);
        if (!ev.call())
            return;
    }
    IF_LISTENED_END(BlockChangedEvent)
    return original(this, bp, a3, afterBlock, beforeBlock, a6, a7, ac);
}

/////////////////// BlockExploded ///////////////////
TInstanceHook(void, "?onExploded@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z",
              Block, BlockSource* bs, BlockPos* bp, Actor* actor) {
    IF_LISTENED(BlockExplodedEvent) {
        if (actor) {
            BlockExplodedEvent ev{};
            ev.mBlockInstance = BlockInstance::createBlockInstance(this, *bp, bs->getDimensionId());
            ev.mExplodeSource = actor;
            ev.call();
        }
    }
    IF_LISTENED_END(BlockExplodedEvent)
    return original(this, bs, bp, actor);
}


/////////////////// FireSpread ///////////////////
bool onFireSpread_OnPlace = false;

TClasslessInstanceHook(void, "?onPlace@FireBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z",
                       BlockSource* bs, BlockPos* bp) {
    onFireSpread_OnPlace = true;
    original(this, bs, bp);
    onFireSpread_OnPlace = false;
}

TClasslessInstanceHook(bool, "?mayPlace@FireBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z",
                       BlockSource* bs, BlockPos* bp) {
    auto rtn = original(this, bs, bp);
    if (!onFireSpread_OnPlace || !rtn)
        return rtn;

    IF_LISTENED(FireSpreadEvent) {
        FireSpreadEvent ev{};
        ev.mTarget = *bp;
        ev.mDimensionId = bs->getDimensionId();
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(FireSpreadEvent)
    return rtn;
}


/////////////////// ContainerChange ///////////////////
#include "llapi/mc/LevelContainerModel.hpp"

TInstanceHook(void, "?_onItemChanged@LevelContainerModel@@MEAAXHAEBVItemStack@@0@Z",
              LevelContainerModel, int slotNumber, ItemStack* oldItem, ItemStack* newItem) {
    IF_LISTENED(ContainerChangeEvent) {
        auto* pl = (Player*)dAccess<Actor*>(this, 208); // IDA LevelContainerModel::LevelContainerModel

        if (pl->hasOpenContainer()) {
            auto* bp = (BlockPos*)((char*)this + 216);

            ContainerChangeEvent ev{};
            ev.mBlockInstance = Level::getBlockInstance(bp, pl->getDimensionId());
            ev.mContainer = ev.mBlockInstance.getContainer();
            ev.mPlayer = pl;
            ev.mSlot = slotNumber + this->_getContainerOffset();
            ev.mPreviousItemStack = oldItem;
            ev.mNewItemStack = newItem;
            ev.mActor = this->getEntity();
            ev.call();
        }
    }
    IF_LISTENED_END(ContainerChangeEvent)
    return original(this, slotNumber, oldItem, newItem);
}


/////////////////// ProjectileHitBlock ///////////////////
TInstanceHook(void, "?onProjectileHit@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVActor@@@Z",
              Block, BlockSource* bs, BlockPos* bp, Actor* actor) {
    // Exclude default position BlockPos::Zero
    if ((bp->x | bp->y | bp->z) == 0) // actor->getPos().distanceTo(bp->center())>5)
        return original(this, bs, bp, actor);
    IF_LISTENED(ProjectileHitBlockEvent) {
        if (this->getTypeName() != "minecraft:air") {
            ProjectileHitBlockEvent ev{};
            ev.mBlockInstance = Level::getBlockInstance(bp, bs);
            ev.mSource = actor;
            ev.call();
        }
    }
    IF_LISTENED_END(ProjectileHitBlockEvent)
    return original(this, bs, bp, actor);
}


/////////////////// RedStoneUpdate ///////////////////
// 红石粉
TClasslessInstanceHook(void, "?onRedstoneUpdate@RedStoneWireBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z",
                       BlockSource* bs, BlockPos* bp, int level, bool isActive) {
    IF_LISTENED(RedStoneUpdateEvent) {
        RedStoneUpdateEvent ev{};
        ev.mBlockInstance = Level::getBlockInstance(bp, bs);
        ev.mRedStonePower = level;
        ev.mIsActivated = level != 0;
        if (!ev.call())
            return;

        level = ev.mRedStonePower;
    }
    IF_LISTENED_END(RedStoneUpdateEvent)
    return original(this, bs, bp, level, isActive);
}
// 红石火把
TClasslessInstanceHook(void, "?onRedstoneUpdate@RedstoneTorchBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z",
                       BlockSource* bs, BlockPos* bp, int level, bool isActive) {
    IF_LISTENED(RedStoneUpdateEvent) {
        RedStoneUpdateEvent ev{};
        ev.mBlockInstance = Level::getBlockInstance(bp, bs);
        ev.mRedStonePower = level;
        ev.mIsActivated = level != 0;
        if (!ev.call())
            return;

        level = ev.mRedStonePower;
    }
    IF_LISTENED_END(RedStoneUpdateEvent)
    return original(this, bs, bp, level, isActive);
}
// 红石中继器
TClasslessInstanceHook(void, "?onRedstoneUpdate@DiodeBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z",
                       BlockSource* bs, BlockPos* bp, int level, bool isActive) {
    IF_LISTENED(RedStoneUpdateEvent) {
        RedStoneUpdateEvent ev{};
        ev.mBlockInstance = Level::getBlockInstance(bp, bs);
        ev.mRedStonePower = level;
        ev.mIsActivated = level != 0;
        if (!ev.call())
            return;

        level = ev.mRedStonePower;
    }
    IF_LISTENED_END(RedStoneUpdateEvent)
    return original(this, bs, bp, level, isActive);
}
// 红石比较器
TClasslessInstanceHook(void, "?onRedstoneUpdate@ComparatorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z",
                       BlockSource* bs, BlockPos* bp, int level, bool isActive) {
    IF_LISTENED(RedStoneUpdateEvent) {
        RedStoneUpdateEvent ev{};
        ev.mBlockInstance = Level::getBlockInstance(bp, bs);
        ev.mRedStonePower = level;
        ev.mIsActivated = level != 0;
        if (!ev.call())
            return;

        level = ev.mRedStonePower;
    }
    IF_LISTENED_END(RedStoneUpdateEvent)
    return original(this, bs, bp, level, isActive);
}


/////////////////// HopperSearchItem ///////////////////
TClasslessInstanceHook(bool, "?_tryPullInItemsFromAboveContainer@Hopper@@IEAA_NAEAVBlockSource@@AEAVContainer@@AEBVVec3@@@Z",
                       BlockSource* bs, Container* container, Vec3* pos) {
    bool isMinecart = dAccess<bool>(this, 5); // IDA Hopper::Hopper

    IF_LISTENED(HopperSearchItemEvent) {
        HopperSearchItemEvent ev{};
        if (isMinecart) {
            ev.isMinecart = true;
            ev.mMinecartPos = *pos;
        } else {
            ev.isMinecart = false;
            ev.mHopperBlock = Level::getBlockInstance(pos->toBlockPos(), bs);
        }
        ev.mDimensionId = bs->getDimensionId();
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(HopperSearchItemEvent)
    return original(this, bs, container, pos);
}

/////////////////// HopperPushOut ///////////////////
TClasslessInstanceHook(bool, "?_pushOutItems@Hopper@@IEAA_NAEAVBlockSource@@AEAVContainer@@AEBVVec3@@H@Z",
                       BlockSource* bs, Container* container, Vec3* pos, int a5) {
    IF_LISTENED(HopperPushOutEvent) {
        HopperPushOutEvent ev{};
        ev.mPos = *pos;
        ev.mDimensionId = bs->getDimensionId();
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(HopperPushOutEvent)
    return original(this, bs, container, pos, a5);
}

/////////////////// PistonTryPushEvent & PistonPushEvent ///////////////////
TInstanceHook(bool, "?_attachedBlockWalker@PistonBlockActor@@AEAA_NAEAVBlockSource@@AEBVBlockPos@@EE@Z",
              PistonBlockActor, BlockSource* bs, BlockPos* bp, char a3, char a4) {
    IF_LISTENED(PistonTryPushEvent) {
        PistonTryPushEvent ev{};
        ev.mTargetBlockInstance = Level::getBlockInstance(bp, bs);
        if (ev.mTargetBlockInstance.getBlock()->getTypeName() == "minecraft:air")
            return original(this, bs, bp, a3, a4);

        ev.mPistonBlockInstance = Level::getBlockInstance(this->getPosition(), bs);

        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(PistonTryPushEvent)

    bool res = original(this, bs, bp, a3, a4);
    if (!res)
        return false;

    IF_LISTENED(PistonPushEvent) {
        PistonPushEvent ev{};
        ev.mTargetBlockInstance = Level::getBlockInstance(bp, bs);
        if (ev.mTargetBlockInstance.getBlock()->getTypeName() == "minecraft:air")
            return true;

        ev.mPistonBlockInstance = Level::getBlockInstance(this->getPosition(), bs);

        ev.call();
    }
    IF_LISTENED_END(PistonPushEvent)
    return true;
}


/////////////////// FarmLandDecay ///////////////////
TClasslessInstanceHook(void, "?transformOnFall@FarmBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@M@Z",
                       BlockSource* bs, BlockPos* bp, Actor* ac, float a5) {
    IF_LISTENED(FarmLandDecayEvent) {
        FarmLandDecayEvent ev{};
        ev.mBlockInstance = Level::getBlockInstance(bp, bs);
        ev.mActor = ac;
        if (!ev.call())
            return;
    }
    IF_LISTENED_END(FarmLandDecayEvent)
    return original(this, bs, bp, ac, a5);
}


/////////////////// PlayerUseFrameBlockEvent  ///////////////////
TClasslessInstanceHook(bool, "?use@ItemFrameBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z",
                       Player* a2, BlockPos* a3) {
    IF_LISTENED(PlayerUseFrameBlockEvent) {
        PlayerUseFrameBlockEvent ev{};
        ev.mType = PlayerUseFrameBlockEvent::Type::Use;
        ev.mBlockInstance = Level::getBlockInstance(a3, a2->getDimensionId());
        ev.mPlayer = a2;
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(PlayerUseFrameBlockEvent)
    return original(this, a2, a3);
}

TClasslessInstanceHook(bool, "?attack@ItemFrameBlock@@UEBA_NPEAVPlayer@@AEBVBlockPos@@@Z",
                       Player* a2, BlockPos* a3) {
    IF_LISTENED(PlayerUseFrameBlockEvent) {
        PlayerUseFrameBlockEvent ev{};
        ev.mType = PlayerUseFrameBlockEvent::Type::Attack;
        ev.mBlockInstance = Level::getBlockInstance(a3, a2->getDimensionId());
        ev.mPlayer = a2;
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(PlayerUseFrameBlockEvent)
    return original(this, a2, a3);
}

/////////////////// LiquidSpreadEvent ///////////////////
#include "llapi/mc/LiquidBlockDynamic.hpp"
TInstanceHook(bool, "?_canSpreadTo@LiquidBlockDynamic@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@1E@Z",
              LiquidBlockDynamic, class BlockSource& bs, class BlockPos const& to, class BlockPos const& from, unsigned char unk) {
    auto rtn = original(this, bs, to, from, unk);
    if (!rtn)
        return rtn;
    IF_LISTENED(LiquidSpreadEvent) {
        LiquidSpreadEvent ev{};
        ev.mBlockInstance = BlockInstance::createBlockInstance(
            const_cast<Block*>(&this->getRenderBlock()), from, bs.getDimensionId());
        ev.mTarget = to;
        ev.mDimensionId = bs.getDimensionId();
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(LiquidSpreadEvent)

    return rtn;
}

// THook(void, "?_trySpreadTo@LiquidBlockDynamic@@AEBAXAEAVBlockSource@@AEBVBlockPos@@H1E@Z",
//       LiquidBlockDynamic* _this, BlockSource* bs, BlockPos* to, unsigned int a4, BlockPos* from, char id)
//{
//     IF_LISTENED(LiquidSpreadEvent)
//     {
//         LiquidSpreadEvent ev{};
//         ev.mBlockInstance = BlockInstance::createBlockInstance(
//             const_cast<Block*>(&_this->getRenderBlock()), *from, bs->getDimensionId());
//         ev.mTarget = *to;
//         ev.mDimensionId = bs->getDimensionId();
//         logger.warn("LiquidSpreadEvent - {} - {} -> {}",
//                     ev.mBlockInstance.getBlock()->getTypeName(), from->toString(), to->toString());
//         if (!ev.call())
//             return;
//     }
//     IF_LISTENED_END(LiquidSpreadEvent)
//     return;
//     original(_this, bs, to, a4, from, id);
// }


/////////////////// PlayerDeath ///////////////////
TInstanceHook(void*, "?die@ServerPlayer@@UEAAXAEBVActorDamageSource@@@Z", ServerPlayer, ActorDamageSource* src) {
    IF_LISTENED(PlayerDieEvent) {
        if (this->isPlayer()) {
            PlayerDieEvent ev{};
            ev.mPlayer = this;
            ev.mDamageSource = src;
            ev.call();
        }
    }
    IF_LISTENED_END(PlayerDieEvent)
    isDieDrop = true;
    auto out = original(this, src);
    isDieDrop = false;
    return out;
}

#include "llapi/mc/SurvivalMode.hpp"
/////////////////// PlayerDestroy ///////////////////

// TInstanceHook(bool, "?destroyBlock@SurvivalMode@@UEAA_NAEBVBlockPos@@E@Z",
//               SurvivalMode, BlockPos a3, unsigned __int8 a4)
//{
//     IF_LISTENED(PlayerDestroyBlockEvent)
//     {
//         if (getPlayer()->isPlayer())
//         {
//             PlayerDestroyBlockEvent ev{};
//             ev.mPlayer = getPlayer();
//             auto bl = Level::getBlockInstance(a3, getPlayer()->getDimensionId());
//             ev.mBlockInstance = bl;
//             if (!ev.call())
//             {
//                 return false;
//             }
//         }
//     }
//     IF_LISTENED_END(PlayerDestroyBlockEvent)
//     return original(this, a3, a4);
// }

TInstanceHook(bool, "?destroyBlock@GameMode@@UEAA_NAEBVBlockPos@@E@Z",
              GameMode, BlockPos a3, unsigned __int8 a4) {
    IF_LISTENED(PlayerDestroyBlockEvent) {
        if (getPlayer()->isPlayer()) {
            PlayerDestroyBlockEvent ev{};
            ev.mPlayer = getPlayer();
            auto bl = Level::getBlockInstance(a3, getPlayer()->getDimensionId());
            ev.mBlockInstance = bl;
            if (!ev.call()) {
                return false;
            }
        }
    }
    IF_LISTENED_END(PlayerDestroyBlockEvent)
    return original(this, a3, a4);
}


/////////////////// PlayerUseItemOn ///////////////////
TInstanceHook(bool, "?useItemOn@GameMode@@UEAA_NAEAVItemStack@@AEBVBlockPos@@EAEBVVec3@@PEBVBlock@@@Z", GameMode,
              ItemStack& it, BlockPos bp, unsigned char side, Vec3* clickPos, void* a6_block) {
    IF_LISTENED(PlayerUseItemOnEvent) {
        PlayerUseItemOnEvent ev{};
        ev.mPlayer = this->getPlayer();
        ev.mBlockInstance = Level::getBlockInstance(bp, ev.mPlayer->getDimensionId());
        ev.mItemStack = &it;
        ev.mFace = side;
        ev.mClickPos = *clickPos;
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(PlayerUseItemOnEvent)
    return original(this, it, bp, side, clickPos, a6_block);
}

/////////////////// PlayerUseBucket ///////////////////
// 倒出
TInstanceHook(bool, "?_emptyBucket@BucketItem@@AEBA_NAEAVBlockSource@@AEBVBlock@@AEBVBlockPos@@PEAVActor@@AEBVItemStack@@E@Z", BucketItem,
              BlockSource* blockSource, Block* block, BlockPos* blockPos, Actor* actor, ItemStack* itemStack, unsigned char face) {
    IF_LISTENED(PlayerUseBucketEvent) {
        // 当actor为空时，执行实体是发射器
        if (actor) {
            PlayerUseBucketEvent ev{};
            ev.mPlayer = (Player*)actor;
            ev.mEventType = PlayerUseBucketEvent::EventType::Place;
            ev.mTargetPos = blockPos->toVec3();
            ev.mBucket = itemStack;
            ev.mBlockInstance = BlockInstance::createBlockInstance(block, *blockPos, actor->getDimensionId());
            ev.mFace = face;
            if (!ev.call())
                return false;
        }
    }
    IF_LISTENED_END(PlayerUseBucketEvent)
    return original(this, blockSource, block, blockPos, actor, itemStack, face);
}
// 装水
TInstanceHook(bool, "?_takeLiquid@BucketItem@@AEBA_NAEAVItemStack@@AEAVActor@@AEBVBlockPos@@@Z", BucketItem,
              ItemStack* itemStack, Actor* actor, BlockPos* blockPos) {
    IF_LISTENED(PlayerUseBucketEvent) {
        PlayerUseBucketEvent ev{};
        ev.mPlayer = (Player*)actor;
        ev.mEventType = PlayerUseBucketEvent::EventType::Take;
        ev.mTargetPos = blockPos->toVec3();
        ev.mBucket = itemStack;
        ev.mBlockInstance = Level::getBlockInstance(blockPos, Level::getBlockSource(actor));
        ev.mFace = -1;
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(PlayerUseBucketEvent)
    return original(this, itemStack, actor, blockPos);
}
// 装牛奶
/*
 * 这个函数是InteractComponent::_runInteraction里面调用的lambda函数实现部分，
 * 这个lambda函数实现了桶装牛奶、剪刀剪羊毛、打火石点苦力怕和紫水晶碎片给予悦灵
 * 这些操作。
 * a1的结构可以在这个lambda的__Copy函数看到：
 * std::_Func_impl_no_alloc__lambda_f1efd4c97256fb90f8a5625718bf0fe5__void_::_Copy
 */
struct BucketPlayerAndActor {
    Player* player;
    Actor* owner;
};
// 也许这个结构体可以用偏移获取替代？
THook(void, "<lambda_54df3fc3e331d6aa3755551a14a31db0>::operator()",
      BucketPlayerAndActor* a1) {
    IF_LISTENED(PlayerUseBucketEvent) {
        BucketPlayerAndActor mBucketPlayerAndActor = *a1;
        if (mBucketPlayerAndActor.owner->getTypeName() == "minecraft:cow" ||
            mBucketPlayerAndActor.owner->getTypeName() == "minecraft:mooshroom") {
            PlayerUseBucketEvent ev{};
            ev.mPlayer = mBucketPlayerAndActor.player;
            ev.mEventType = PlayerUseBucketEvent::EventType::Take;
            ev.mTargetPos = mBucketPlayerAndActor.owner->getPosition();
            ev.mBucket = const_cast<ItemStack*>(&ev.mPlayer->getSelectedItem());
            ev.mTargetActor = mBucketPlayerAndActor.owner;
            ev.mFace = -1;
            if (!ev.call())
                return;
        }
    }
    IF_LISTENED_END(PlayerUseBucketEvent)
    return original(a1);
}
// 装细雪
TInstanceHook(bool, "?_takePowderSnow@BucketItem@@AEBA_NAEAVItemStack@@AEAVActor@@AEBVBlockPos@@@Z", BucketItem,
              ItemStack* itemStack, Actor* actor, BlockPos* blockPos) {
    IF_LISTENED(PlayerUseBucketEvent) {
        PlayerUseBucketEvent ev{};
        ev.mPlayer = (Player*)actor;
        ev.mEventType = PlayerUseBucketEvent::EventType::Take;
        ev.mTargetPos = blockPos->toVec3();
        ev.mBucket = itemStack;
        ev.mBlockInstance = Level::getBlockInstance(blockPos, Level::getBlockSource(actor));
        ev.mFace = -1;
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(PlayerUseBucketEvent)
    return original(this, itemStack, actor, blockPos);
}

// 拿桶与实体交互（装鱼），目前的办法是hook ItemStack::useOn来拦截
// 这个交互实现在BucketableComponent::implInteraction
namespace {
Player* mBucketPlayer; // 传玩家指针
std::mutex mBucketPlayerLuck;
} // namespace
THook(void, "?implInteraction@BucketableComponent@@SAXAEAVActor@@AEAVPlayer@@@Z",
      Actor* actor, Player* player) {
    std::lock_guard<std::mutex> autoLock(mBucketPlayerLuck);
    mBucketPlayer = player;
    return original(actor, player);
}

TInstanceHook(bool, "?useOn@ItemStack@@QEAA_NAEAVActor@@HHHEAEBVVec3@@@Z", ItemStack,
              Actor* actor, int x, int y, int z, unsigned char face, Vec3 clickPos) {
    IF_LISTENED(PlayerUseBucketEvent) {
        if (actor->getTypeName() != "minecraft:player") {
            PlayerUseBucketEvent ev{};
            ev.mPlayer = mBucketPlayer;
            ev.mEventType = PlayerUseBucketEvent::EventType::Take;
            ev.mTargetPos = clickPos;
            ev.mBucket = this;
            ev.mTargetActor = actor;
            ev.mFace = face;
            if (!ev.call())
                return false;
        }
    }
    IF_LISTENED_END(PlayerUseBucketEvent)
    return original(this, actor, x, y, z, face, clickPos);
}


/////////////////// MobHurt ///////////////////
TInstanceHook(bool, "?_hurt@Mob@@MEAA_NAEBVActorDamageSource@@M_N1@Z",
              Mob, ActorDamageSource& src, float damage, bool unk1_1, bool unk2_0) {
    IF_LISTENED(MobHurtEvent) {
        if (this) {
            MobHurtEvent ev{};
            ev.mMob = this;
            ev.mDamageSource = &src;
            ev.mDamage = damage;
            if (!ev.call())
                return false;

            damage = ev.mDamage;
        }
    }
    IF_LISTENED_END(MobHurtEvent)
    return original(this, src, damage, unk1_1, unk2_0);
}

TInstanceHook(float, "?getDamageAfterResistanceEffect@Mob@@UEBAMAEBVActorDamageSource@@M@Z", Mob, ActorDamageSource* src, float damage) {
    if (src->getCause() == ActorDamageCause::Magic) {
        IF_LISTENED(MobHurtEvent) {
            MobHurtEvent ev{};
            ev.mMob = this;
            ev.mDamageSource = src;
            ev.mDamage = damage;
            if (!ev.call())
                return 0;
            damage = ev.mDamage;
        }
        IF_LISTENED_END(MobHurtEvent)
    }
    return original(this, src, damage);
}

//////////////// PlayerUseItem & PlayerEat ////////////////
#include "llapi/mc/ComponentItem.hpp"
TInstanceHook(bool, "?baseUseItem@GameMode@@QEAA_NAEAVItemStack@@@Z", GameMode, ItemStack& it) {
    auto pl = this->getPlayer();
    IF_LISTENED(PlayerUseItemEvent) {
        PlayerUseItemEvent ev{};
        ev.mPlayer = pl;
        ev.mItemStack = &it;
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(PlayerUseItemEvent)
    IF_LISTENED(PlayerEatEvent) {
        if (it.getItem()->isFood() && (pl->isHungry() || pl->forceAllowEating())) {
            PlayerEatEvent ev{};
            ev.mPlayer = pl;
            ev.mFoodItem = &it;
            if (!ev.call()) {
                pl->refreshAttribute(Player::HUNGER);
                return false;
            }
        }
    }
    IF_LISTENED_END(PlayerEatEvent)
    return original(this, it);
}

TInstanceHook(ItemStack*, "?use@BucketItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z", BucketItem, ItemStack* a1, Player* a2) {
    if (this->getFullItemName() == "minecraft:milk_bucket") {
        IF_LISTENED(PlayerEatEvent) {
            PlayerEatEvent ev{};
            ev.mPlayer = a2;
            ev.mFoodItem = a1;
            if (!ev.call()) {
                return a1;
            }
        }
        IF_LISTENED_END(PlayerEatEvent)
    }
    return original(this, a1, a2);
}


TClasslessInstanceHook(ItemStack*, "?use@PotionItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z", ItemStack* a1, Player* a2) {
    IF_LISTENED(PlayerEatEvent) {
        PlayerEatEvent ev{};
        ev.mPlayer = a2;
        ev.mFoodItem = a1;
        if (!ev.call()) {
            return a1;
        }
    }
    IF_LISTENED_END(PlayerEatEvent)
    return original(this, a1, a2);
}

/////////////////// PlayerAte ////////////////////
#include "llapi/mc/FoodItemComponentLegacy.hpp"
TInstanceHook(Item*, "?useTimeDepleted@FoodItemComponentLegacy@@UEAAPEBVItem@@AEAVItemStack@@AEAVPlayer@@AEAVLevel@@@Z", FoodItemComponentLegacy, ItemStack* a, Player* b, Level* c) {
    IF_LISTENED(PlayerAteEvent) {
        PlayerAteEvent ev{};
        ev.mPlayer = b;
        ev.mFoodItem = a;
        ev.call();
    }
    IF_LISTENED_END(PlayerAteEvent)
    return original(this, a, b, c);
}

/////////////////// MobDie ///////////////////
TInstanceHook(bool, "?die@Mob@@UEAAXAEBVActorDamageSource@@@Z", Mob, ActorDamageSource* ads) {
    IF_LISTENED(MobDieEvent) {
        if (this) {
            MobDieEvent ev{};
            ev.mMob = this;
            ev.mDamageSource = ads;
            if (!ev.call())
                return false;
        }
    }
    IF_LISTENED_END(MobDieEvent)
    return original(this, ads);
}

///////////////////  Entity & Block Explosion ///////////////////
TClasslessInstanceHook(void, "?explode@Explosion@@QEAAXXZ") {
    try {
        auto acId = *(ActorUniqueID*)((QWORD*)this + 11);
        auto actor = Level::getEntity(acId);
        auto pos = *(Vec3*)(QWORD*)this;
        auto radius = *((float*)this + 3);
        auto bs = (BlockSource*)*((QWORD*)this + 12);
        auto maxResistance = *((float*)this + 26);
        auto genFire = (bool)*((BYTE*)this + 80);
        auto canBreaking = (bool)*((BYTE*)this + 81);

        IF_LISTENED(EntityExplodeEvent) {
            if (actor) {
                EntityExplodeEvent ev{};
                ev.mActor = actor;
                ev.mBreaking = canBreaking;
                ev.mFire = genFire;
                ev.mMaxResistance = maxResistance;
                ev.mPos = pos;
                ev.mRadius = radius;
                ev.mDimension = bs;
                if (!ev.call())
                    return;

                *((float*)this + 3) = ev.mRadius;
                *((float*)this + 26) = ev.mMaxResistance;
                *((BYTE*)this + 80) = ev.mFire;
                *((BYTE*)this + 81) = ev.mBreaking;
            }
        }
        IF_LISTENED_END(EntityExplodeEvent)

        IF_LISTENED(BlockExplodeEvent) {
            if (!actor) {
                BlockPos bp = pos.toBlockPos();
                BlockExplodeEvent ev{};
                ev.mBlockInstance = Level::getBlockInstance(bp, bs);
                ev.mBreaking = canBreaking;
                ev.mFire = genFire;
                ev.mMaxResistance = maxResistance;
                ev.mRadius = radius;
                if (!ev.call())
                    return;

                *((float*)this + 3) = ev.mRadius;
                *((float*)this + 26) = ev.mMaxResistance;
                *((BYTE*)this + 80) = ev.mFire;
                *((BYTE*)this + 81) = ev.mBreaking;
            }
        }
        IF_LISTENED_END(BlockExplodeEvent)
    } catch (...) {
        logger.error("Event Callback Failed!");
        logger.error("Uncaught Exception Detected!");
        logger.error("In Event: Entity or Block Explosion");
    }
    original(this);
}


////////////// ProjectileHitEntity //////////////
TClasslessInstanceHook(void, "?onHit@ProjectileComponent@@QEAAXAEAVActor@@AEBVHitResult@@@Z",
                       Actor* item, HitResult* res) {
    IF_LISTENED(ProjectileHitEntityEvent) {
        Actor* to = res->getEntity();
        if (to) {
            ProjectileHitEntityEvent ev{};
            ev.mTarget = to;
            ev.mSource = item;
            ev.call();
        }
    }
    IF_LISTENED_END(ProjectileHitEntityEvent)
    return original(this, item, res);
}


////////////// WitherBossDestroy //////////////
TInstanceHook(void, "?_destroyBlocks@WitherBoss@@AEAAXAEAVLevel@@AEBVAABB@@AEAVBlockSource@@HW4WitherAttackType@1@@Z",
              Actor, Level* a2, AABB* aabb, BlockSource* a4, int a5, unsigned int a6) {
    IF_LISTENED(WitherBossDestroyEvent) {
        WitherBossDestroyEvent ev{};
        ev.mWitherBoss = (WitherBoss*)this;
        ev.mDestroyRange = *aabb;
        if (!ev.call())
            return;

        *aabb = ev.mDestroyRange;
    }
    IF_LISTENED_END(WitherBossDestroyEvent)
    original(this, a2, aabb, a4, a5, a6);
}

////////////// EnderDragonDestroy //////////////
#include <llapi/mc/EnderDragon.hpp>
#include <llapi/mc/BlockLegacy.hpp>
TInstanceHook(bool, "?_isDragonImmuneBlock@EnderDragon@@CA_NAEBVBlockLegacy@@@Z",
              EnderDragon, BlockLegacy* bl) {
    IF_LISTENED(EnderDragonDestroyEvent) {
        EnderDragonDestroyEvent ev{};
        ev.mEnderDragon = (EnderDragon*)this;
        ev.mBlockLegacy = bl;
        if (!ev.call()) {
            return true;
        }
    }
    IF_LISTENED_END(EnderDragonDestroyEvent)
    return original(this, bl);
}

////////////// EntityRide //////////////
TInstanceHook(bool, "?canAddPassenger@Actor@@UEBA_NAEAV1@@Z",
              Actor, Actor* a2) {
    auto rtn = original(this, a2);
    if (!rtn)
        return false;
    IF_LISTENED(EntityRideEvent) {
        EntityRideEvent ev{};
        ev.mRider = a2;
        ev.mVehicle = this;
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(EntityRideEvent)
    return rtn;
}


////////////// EntityStepOnPressurePlate //////////////
TClasslessInstanceHook(bool, "?shouldTriggerEntityInside@BasePressurePlateBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z",
                       BlockSource* a2, BlockPos* a3, Actor* a4) {
    IF_LISTENED(EntityStepOnPressurePlateEvent) {
        EntityStepOnPressurePlateEvent ev{};
        ev.mActor = a4;
        ev.mBlockInstance = Level::getBlockInstance(a3, a4->getDimensionId());
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(EntityStepOnPressurePlateEvent)
    return original(this, a2, a3, a4);
}

////////////// ProjectileSpawn //////////////
TClasslessInstanceHook(Actor*,
                       "?spawnProjectile@Spawner@@QEAAPEAVActor@@AEAVBlockSource@@AEBUActorDefinitionIdentifier@@PEAV2@AEBVVec3@@3@Z",
                       BlockSource* a2, ActorDefinitionIdentifier* a3, Actor* a4, Vec3* a5, Vec3* a6) {
    string name = a3->getCanonicalName();
    if (name != "minecraft:thrown_trident") {
        IF_LISTENED(ProjectileSpawnEvent) {
            ProjectileSpawnEvent ev{};
            ev.mShooter = a4;
            ev.mIdentifier = a3;
            ev.mType = name;
            if (!ev.call())
                return nullptr;
        }
        IF_LISTENED_END(ProjectileSpawnEvent)
    }
    auto projectile = original(this, a2, a3, a4, a5, a6);
    IF_LISTENED(ProjectileCreatedEvent) {
        ProjectileCreatedEvent ev{};
        ev.mShooter = a4;
        ev.mProjectile = projectile;
        ev.call();
    }
    IF_LISTENED_END(ProjectileCreatedEvent)
    return projectile;
}

#include "llapi/mc/CrossbowItem.hpp"
#include "llapi/mc/ActorDefinitionIdentifier.hpp"
static_assert(sizeof(ActorDefinitionIdentifier) == 176);
TInstanceHook(void, "?_shootFirework@CrossbowItem@@AEBAXAEBVItemInstance@@AEAVPlayer@@@Z",
              CrossbowItem, void* a1, Player* a2) {
    IF_LISTENED(ProjectileSpawnEvent) {
        ActorDefinitionIdentifier identifier("minecraft:fireworks_rocket");
        ProjectileSpawnEvent ev{};
        ev.mShooter = a2;
        ev.mIdentifier = &identifier;
        ev.mType = this->getFullItemName();

        if (!ev.call())
            return;
    }
    IF_LISTENED_END(ProjectileSpawnEvent)
    original(this, a1, a2);
}

TClasslessInstanceHook(void, "?releaseUsing@TridentItem@@UEBAXAEAVItemStack@@PEAVPlayer@@H@Z",
                       ItemStack* a2, Player* a3, int a4) {
    IF_LISTENED(ProjectileSpawnEvent) {
        ActorDefinitionIdentifier identifier("minecraft:thrown_trident");
        ProjectileSpawnEvent ev{};
        ev.mShooter = a3;
        ev.mIdentifier = &identifier;
        ev.mType = a2->getTypeName();

        if (!ev.call())
            return;
    }
    IF_LISTENED_END(ProjectileSpawnEvent)
    return original(this, a2, a3, a4);
}

#include "llapi/mc/WeakEntityRef.hpp"
#include "llapi/mc/EntityContext.hpp"

////////////// NpcCmd //////////////
TInstanceHook(void,
              "?executeCommandAction@NpcComponent@@QEAAXAEAVActor@@AEAVPlayer@@HAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z",
              NpcComponent, Actor* ac, Player* pl, int a4, string& a5) {
    IF_LISTENED(NpcCmdEvent) {
        // IDA NpcComponent::executeCommandAction
        // NpcSceneDialogueData data(*this, *ac, a5);

        auto ec = (EntityContext*)((char*)ac + 8);
        NpcSceneDialogueData data(WeakEntityRef(ec->getWeakRef()), a5);

        auto container = data.getActionsContainer();
        auto actionAt = container->getActionAt(a4);
        if (actionAt && dAccess<char>(actionAt, 8) == (char)1) {

            NpcCmdEvent ev{};
            ev.mPlayer = pl;
            ev.mNpc = ac;
            ev.mCommand = actionAt->getText();
            if (!ev.call())
                return;
        }
    }
    IF_LISTENED_END(NpcCmdEvent)
    return original(this, ac, pl, a4, a5);
}

////////////// ArmorStandChange //////////////
TInstanceHook(bool, "?_trySwapItem@ArmorStand@@AEAA_NAEAVPlayer@@W4EquipmentSlot@@@Z",
              ArmorStand, Player* a2, int a3) {
    IF_LISTENED(ArmorStandChangeEvent) {
        ArmorStandChangeEvent ev{};
        ev.mArmorStand = this;
        ev.mPlayer = a2;
        ev.mSlot = a3;
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(ArmorStandChangeEvent)
    return original(this, a2, a3);
}

////////////////// EntityTransform //////////////////
TClasslessInstanceHook(void, "?maintainOldData@TransformationComponent@@QEAAXAEAVActor@@0AEBUTransformationDescription@@AEBUActorUniqueID@@AEBVLevel@@@Z",
                       Actor* beforeEntity, Actor* afterEntity, void* a4, ActorUniqueID* aid, Level* level) {
    IF_LISTENED(EntityTransformEvent) {
        EntityTransformEvent ev{};
        ActorUniqueID actorUniqueID = beforeEntity->getActorUniqueId();
        ev.mBeforeEntityUniqueId = &actorUniqueID;
        ev.mAfterEntity = afterEntity;
        ev.call();
    }
    IF_LISTENED_END(EntityTransformEvent)
    original(this, beforeEntity, afterEntity, a4, aid, level);
}

////////////// PlayerScoreChangedEvent  //////////////
TClasslessInstanceHook(void, "?onScoreChanged@ServerScoreboard@@UEAAXAEBUScoreboardId@@AEBVObjective@@@Z",
                       ScoreboardId* a1, Objective* a2) {
    IF_LISTENED(PlayerScoreChangedEvent) {
        int64_t id = a1->id;

        Player* player = nullptr;
        auto pls = Level::getAllPlayers();
        for (auto& pl : pls) {
            if (Global<Scoreboard>->getScoreboardId(*pl).id == id) {
                player = pl;
                break;
            }
        }

        if (player) {
            PlayerScoreChangedEvent ev{};
            ev.mPlayer = player;
            ev.mScore = a2->getPlayerScore(*a1).getCount();
            ev.mScoreboardId = a1;
            ev.mObjective = a2;
            ev.call();
        }
    }
    IF_LISTENED_END(PlayerScoreChangedEvent)

    return original(this, a1, a2);
}


#include "llapi/mc/Minecraft.hpp"
////////////// ServerStarted //////////////
TClasslessInstanceHook(void, "?sendServerThreadStarted@ServerInstanceEventCoordinator@@QEAAXAEAVServerInstance@@@Z",
                       class ServerInstance& ins) {
    if (!ll::isDebugMode())
        _set_se_translator(seh_exception::TranslateSEHtoCE);

    ll::globalRuntimeConfig.tickThreadId = std::this_thread::get_id();
    Global<Level> = Global<Minecraft>->getLevel();
    Global<ServerLevel> = (ServerLevel*)Global<Minecraft>->getLevel();
    ll::globalRuntimeConfig.serverStatus = ll::LLServerStatus::Running;

    IF_LISTENED(ServerStartedEvent) {
        ServerStartedEvent ev{};
        ev.call();
    }
    IF_LISTENED_END(ServerStartedEvent)

    original(this, ins);
}

////////////// ServerStopped //////////////
TClasslessInstanceHook(void, "??1DedicatedServer@@UEAA@XZ") {
    ll::globalRuntimeConfig.serverStatus = ll::LLServerStatus::Stopping;

    IF_LISTENED(ServerStoppedEvent) {
        ServerStoppedEvent ev{};
        ev.call();
    }
    IF_LISTENED_END(ServerStoppedEvent)
    original(this);
}
TClasslessInstanceHook(void, "?execute@StopCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z",
                       class CommandOrigin const& origin, class CommandOutput& output) {
    ll::globalRuntimeConfig.serverStatus = ll::LLServerStatus::Stopping;
    original(this, origin, output);
}


////////////// RegCmd //////////////
TInstanceHook(void, "?setup@ChangeSettingCommand@@SAXAEAVCommandRegistry@@@Z",
              CommandRegistry, void* a1) {
    Global<CommandRegistry> = this;
    original(this, a1);
    IF_LISTENED(RegCmdEvent) {
        RegCmdEvent ev{};
        ev.mCommandRegistry = this;
        ev.call();
        // setup dynamic command
        DynamicCommand::onServerCommandsRegister(*this);
    }
    IF_LISTENED_END(RegCmdEvent)
}

////////////// ConsoleOutput //////////////
THook(std::ostream&,
      "??$_Insert_string@DU?$char_traits@D@std@@_K@std@@YAAEAV?$basic_ostream@DU?$char_traits@D@std@@@0@AEAV10@QEBD_K@Z",
      std::ostream& _this, const char* str, unsigned size) {
    IF_LISTENED(ConsoleOutputEvent) {
        if (&_this == &std::cout) {
            ConsoleOutputEvent ev{};
            ev.mOutput = string(str, size);
            if (!ev.call())
                return _this;
        }
    }
    IF_LISTENED_END(ConsoleOutputEvent)
    return original(_this, str, size);
}

////////////// PlayerDropItem //////////////
TInstanceHook(void*, "?handle@ComplexInventoryTransaction@@UEBA?AW4InventoryTransactionError@@AEAVPlayer@@_N@Z",
              ComplexInventoryTransaction, Player* a2, int a3) {
    if (this->type == ComplexInventoryTransaction::Type::NORMAL) {
        IF_LISTENED(PlayerDropItemEvent) {
            auto& InvTrans = this->data;
            auto& action = InvTrans.getActions(InventorySource(InventorySourceType::Container, ContainerID::Inventory));
            if (action.size() == 1) {
                PlayerDropItemEvent ev{};
                auto& item = a2->getInventory().getItem(action[0].slot);
                ev.mItemStack = const_cast<ItemStack*>(&item);
                ev.mPlayer = a2;
                if (!ev.call()) {
                    a2->sendInventory(1);
                    return nullptr;
                }
                isQDrop = true;
                auto out = original(this, a2, a3);
                isQDrop = false;
                return out;
            }
        }
        IF_LISTENED_END(PlayerDropItemEvent)
    }
    return original(this, a2, a3);
}

TInstanceHook(void, "?dropSlot@Inventory@@QEAAXH_N00@Z",
              Container, int a2, char a3, char a4, bool a5) {
    auto pl = dAccess<Player*, 248>(this);
    if (pl->isPlayer()) {
        IF_LISTENED(PlayerDropItemEvent) {
            PlayerDropItemEvent ev{};
            if (a2 >= 0) {
                auto& item = this->getItem(a2);
                if (!item.isNull()) {
                    ev.mItemStack = const_cast<ItemStack*>(&item);
                    ev.mPlayer = pl;
                }
                if (!ev.call()) {
                    return;
                }
            }
        }
        IF_LISTENED_END(PlayerDropItemEvent)
    }
    return original(this, a2, a3, a4, a5);
}

////////////// PlayerBedEnter //////////////
TInstanceHook(int, "?startSleepInBed@Player@@UEAA?AW4BedSleepingResult@@AEBVBlockPos@@@Z",
              Player, BlockPos const& blk) {
    auto bl = Level::getBlockInstance(blk, getDimensionId());
    IF_LISTENED(PlayerBedEnterEvent) {
        PlayerBedEnterEvent ev{};
        ev.mPlayer = this;
        ev.mBlockInstance = &bl;
        if (!ev.call())
            return 0;
    }
    IF_LISTENED_END(PlayerBedEnterEvent)
    return original(this, blk);
}

#include "llapi/mc/Spawner.hpp"

////////////// MobSpawn //////////////
TInstanceHook(Mob*, "?spawnMob@Spawner@@QEAAPEAVMob@@AEAVBlockSource@@AEBUActorDefinitionIdentifier@@PEAVActor@@AEBVVec3@@_N44@Z",
              Spawner, BlockSource* a2, ActorDefinitionIdentifier* a3, Actor* a4, Vec3& a5, bool a6, bool a7, bool a8) {
    IF_LISTENED(MobTrySpawnEvent) {
        MobTrySpawnEvent ev{};
        ev.mTypeName = a3->getCanonicalName();
        ev.mPos = a5;
        ev.mDimensionId = a2->getDimensionId();
        if (!ev.call()) {
            return nullptr;
        }
    }
    IF_LISTENED_END(MobTrySpawnEvent);
    auto en = original(this, a2, a3, a4, a5, a6, a7, a8);
    if (en == nullptr) {
        return en;
    }
    else {
        IF_LISTENED(MobSpawnedEvent) {
            MobSpawnedEvent ev{};
            ev.mMob = en;
            ev.mPos = a5;
            ev.mDimensionId = a2->getDimensionId();
            ev.call();
        }
        IF_LISTENED_END(MobSpawnedEvent)
        return en;
    }
}

TClasslessInstanceHook(std::optional<class BlockPos>, "?_findValidSpawnPosUnder@WanderingTraderScheduler@@AEBA?AV?$optional@VBlockPos@@@std@@AEBVBlockPos@@AEAVBlockSource@@@Z",
                       BlockPos* pos, BlockSource* bs)
{
    auto spawn = original(this, pos, bs);
    if (spawn)
    {
        IF_LISTENED(MobTrySpawnEvent) {
            MobTrySpawnEvent ev{};
            ev.mTypeName = "minecraft:wandering_trader";
            ev.mPos = spawn->toVec3();
            ev.mDimensionId = bs->getDimensionId();
            if (!ev.call())
                return std::nullopt;
        }
        IF_LISTENED_END(MobTrySpawnEvent)
    }
    return spawn;
}

TClasslessInstanceHook(void, "?_setRespawnStage@EndDragonFight@@AEAAXW4RespawnAnimation@@@Z",
    int a1) {
    IF_LISTENED(MobTrySpawnEvent) {
        MobTrySpawnEvent ev{};
        ev.mTypeName = "minecraft:ender_dragon";
        ev.mPos = Vec3::ZERO;
        ev.mDimensionId = 2;
        if (!ev.call())
            return;
    }
    IF_LISTENED_END(MobTrySpawnEvent);
    original(this, a1);
    auto uid = dAccess<ActorUniqueID>(this, 64);
    auto en = Global<Level>->getEntity(uid);
    if (en) {
        IF_LISTENED(MobSpawnedEvent) {
            MobSpawnedEvent ev{};
            ev.mMob = (Mob*)en;
            ev.mPos = en->getPos();
            ev.mDimensionId = 2;
            ev.call();
        }
        IF_LISTENED_END(MobSpawnedEvent)
    }
}

#include "llapi/impl/FormPacketHelper.h"
#include "llapi/mc/Json.hpp"
////////////// FormResponsePacket //////////////

TClasslessInstanceHook(void, "?handle@?$PacketHandlerDispatcherInstance@VModalFormResponsePacket@@$0A@@@UEBAXAEBVNetworkIdentifier@@AEAVNetEventCallback@@AEAV?$shared_ptr@VPacket@@@std@@@Z",
                       NetworkIdentifier* id, ServerNetworkHandler* handler, void* pPacket) {
    Packet* packet = *(Packet**)pPacket;
    ServerPlayer* sp = handler->getServerPlayer(*id, 0);
    if (sp) {
        string data;
        auto formId = dAccess<int>(packet, 48);

        if (!dAccess<bool>(packet, 81)) {
            if (dAccess<bool>(packet, 72)) {
                auto json = dAccess<Json::Value>(packet, 56);
                data = json.toStyledString();
            }
        }

        if (data.empty()) {
            data = "null";
        }

        if (data.back() == '\n')
            data.pop_back();

        IF_LISTENED(FormResponsePacketEvent) {
            FormResponsePacketEvent ev{};
            ev.mServerPlayer = sp;
            ev.mFormId = formId;
            ev.mJsonData = data;

            if (!ev.call())
                return;
        }
        IF_LISTENED_END(FormResponsePacketEvent)
        HandleFormPacket(sp, formId, data);
    }
    original(this, id, handler, pPacket);
}

THook(void, "?_initialize@ResourcePackRepository@@AEAAXXZ",
      ResourcePackRepository* self) {
    Global<ResourcePackRepository> = self;
    IF_LISTENED(ResourcePackInitEvent) {
        ResourcePackInitEvent ev{};
        ev.mRepo = self;
        ev.call();
    }
    IF_LISTENED_END(ResourcePackInitEvent)
    original(self);
}

TInstanceHook(void, "?openInventory@ServerPlayer@@UEAAXXZ", ServerPlayer) {
    IF_LISTENED(PlayerOpenInventoryEvent) {
        PlayerOpenInventoryEvent ev{};
        ev.mServerPlayer = this;
        ev.mPlayer = (Player*)this;
        if (!ev.call())
            return;
    }
    IF_LISTENED_END(PlayerOpenInventoryEvent)
    original(this);
}