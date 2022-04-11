#include <Main/Config.h>
#include <EventAPI.h>
#include <Global.h>
#include <LoggerAPI.h>
#include <MC/ActorDamageSource.hpp>
#include <MC/BaseCommandBlock.hpp>
#include <MC/Block.hpp>
#include <MC/BlockActor.hpp>
#include <MC/BlockSource.hpp>
#include <MC/CommandContext.hpp>
#include <MC/CommandOrigin.hpp>
#include <MC/ConnectionRequest.hpp>
#include <MC/GameMode.hpp>
#include <MC/HitResult.hpp>
#include <MC/ItemActor.hpp>
#include <MC/PistonBlockActor.hpp>
#include <MC/ComplexInventoryTransaction.hpp>
#include <MC/SignItem.hpp>
#include <MC/InventoryTransaction.hpp>
#include <MC/ItemStack.hpp>
#include <MC/Level.hpp>
#include <MC/ChestBlockActor.hpp>
#include <MC/NetworkIdentifier.hpp>
#include <MC/Objective.hpp>
#include <MC/Player.hpp>
#include <MC/PlayerActionPacket.hpp>
#include <MC/RespawnPacket.hpp>
#include <MC/Scoreboard.hpp>
#include <MC/NpcActionsContainer.hpp>
#include <MC/NpcSceneDialogueData.hpp>
#include <MC/ArmorStand.hpp>
#include <MC/NpcAction.hpp>
#include <MC/NpcComponent.hpp>
#include <MC/Container.hpp>
#include <MC/ScoreboardId.hpp>
#include <MC/ServerNetworkHandler.hpp>
#include <MC/VanillaBlocks.hpp>
#include <ScheduleAPI.h>
#include <MC/ServerPlayer.hpp>
#include <RegCommandAPI.h>
#include <Utils/StringHelper.h>
#include <Utils/DbgHelper.h>
#include <I18nAPI.h>
#include <functional>
#include <tuple>
#include <iostream>
#include <string>
#include <typeinfo>
#include <vector>
#include <MC/ComplexInventoryTransaction.hpp>
#include <MC/InventoryTransaction.hpp>
#include <MC/InventoryAction.hpp>
#include <MC/InventorySource.hpp>
#include <MC/Util.hpp>
#include <DynamicCommandAPI.h>

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
extern Logger logger;

/////////////////////////////// Event Data ///////////////////////////////

int globalListenerId = 0;

template<typename EVENT>
struct ListenerData
{
    std::string pluginName;
    int listenerId;
    bool isRef;
    std::function<bool(EVENT)> callback;
    std::function<bool(EVENT&)> callbackRef;
};

template<typename EVENT>
std::list<ListenerData<EVENT>> listeners;


/////////////////////////////// Listener Manager /////////////////////////////// 

template<typename EVENT>
int EventManager<EVENT>::addEventListener(std::string name, std::function<bool(EVENT)> callback)
{
    int newId = ++globalListenerId;
    listeners<EVENT>.push_back({ name, newId, false, callback, nullptr });
    return newId;
}

template<typename EVENT>
int EventManager<EVENT>::addEventListenerRef(std::string name, std::function<bool(EVENT&)> callback)
{
    int newId = ++globalListenerId;
    listeners<EVENT>.push_back({ name, newId, true, nullptr, callback });
    return newId;
}

template<typename EVENT>
bool EventManager<EVENT>::removeEventListener(int id)
{
    for(auto &i = listeners<EVENT>.begin(); i!=listeners<EVENT>.end(); ++i)
        if (i->listenerId == id)
        { listeners<EVENT>.erase(i); return true; }
    return false;
}

template<typename EVENT>
bool EventManager<EVENT>::hasListener()
{
    return !listeners<EVENT>.empty();
}


/////////////////////////////// Event Calling /////////////////////////////// 

inline void OutputError(std::string errorMsg, int errorCode, std::string errorWhat, std::string eventName, std::string pluginName)
{
    logger.error(errorMsg);
    logger.error("Error: Code [{}] {}", errorCode, errorWhat);
    logger.error("In Event ({})", eventName);
    if (!pluginName.empty())
        logger.error("In Plugin <{}>", pluginName);
}

template<typename EVENT>
bool EventManager<EVENT>::call(EVENT& ev)
{
    bool passToBDS = true;
    for (auto i = listeners<EVENT>.begin(); i != listeners<EVENT>.end(); ++i)
    {
        try {
            bool res = i->isRef ? i->callbackRef(ev) : i->callback(ev);
            if (!res)
                passToBDS = false;
        }
        catch (const seh_exception& e)
        {
            OutputError("Uncaught SEH Exception Detected!", e.code(), TextEncoding::toUTF8(e.what()), typeid(EVENT).name(), i->pluginName);
        }
        catch (const std::exception& e)
        {
            OutputError("Uncaught C++ Exception Detected!", errno, TextEncoding::toUTF8(e.what()), typeid(EVENT).name(), i->pluginName);
        }
        catch (...)
        {
            OutputError("Uncaught Exception Detected!", -1, "", typeid(EVENT).name(), i->pluginName);
        }
    }


    ///////////////////////////////////// For compatibility DO NOT UPDATE /////////////////////////////////////
    auto iNoConst = ev.listenersNoConst.begin();
    try { for (; iNoConst != ev.listenersNoConst.end(); ++iNoConst) if (!iNoConst->second(ev)) passToBDS = false;}
    catch (const seh_exception& e)
    { OutputError("Uncaught SEH Exception Detected!", e.code(), TextEncoding::toUTF8(e.what()), typeid(EVENT).name(), iNoConst->first); }
    catch (const std::exception& e)
    { OutputError("Uncaught Exception Detected! ", -1, TextEncoding::toUTF8(e.what()), typeid(EVENT).name(), iNoConst->first); }
    catch (...)
    { OutputError("Uncaught Exception Detected!", -1, "", typeid(EVENT).name(), iNoConst->first); }
    ///////////////////////////////////// For compatibility DO NOT UPDATE /////////////////////////////////////
    auto i = ev.listeners.begin();
    try { for (; i != ev.listeners.end(); ++i) if (!i->second(ev)) passToBDS = false; }
    catch (const seh_exception& e)
    { OutputError("Uncaught SEH Exception Detected!", e.code(), TextEncoding::toUTF8(e.what()), typeid(EVENT).name(), i->first); }
    catch (const std::exception& e)
    { OutputError("Uncaught Exception Detected! ", -1, TextEncoding::toUTF8(e.what()), typeid(EVENT).name(), i->first); }
    catch (...)
    { OutputError("Uncaught Exception Detected!", -1, "", typeid(EVENT).name(), i->first); }
    ///////////////////////////////////// For compatibility DO NOT UPDATE /////////////////////////////////////

    return passToBDS;
}

template<typename EVENT>
bool EventManager<EVENT>::callToPlugin(std::string pluginName, EVENT& ev)
{
    bool passToBDS = true;
    for (auto i = listeners<EVENT>.begin(); i != listeners<EVENT>.end(); ++i)
    {
        if (i->pluginName != pluginName)
            continue;
        try {
            bool res = i->isRef ? i->callbackRef(ev) : i->callback(ev);
            if (!res) passToBDS = false;
        }
        catch (const seh_exception& e)
        {
            OutputError("Uncaught SEH Exception Detected!", e.code(), TextEncoding::toUTF8(e.what()), typeid(EVENT).name(), i->pluginName);
        }
        catch (const std::exception& e)
        {
            OutputError("Uncaught C++ Exception Detected!", errno, TextEncoding::toUTF8(e.what()), typeid(EVENT).name(), i->pluginName);
        }
        catch (...)
        {
            OutputError("Uncaught Exception Detected!", -1, "", typeid(EVENT).name(), i->pluginName);
        }
    }
    return passToBDS;
}


/////////////////////////////// Event Declare /////////////////////////////// 

#define DECLARE_EVENT_DATA(EVENT) \
    template class EventManager<EVENT>; \
    /*********************** For Compatibility ***********************/ \
    std::list<std::pair<string, std::function<bool(const EVENT&)>>> EventTemplate<EVENT>::listeners; \
    std::list<std::pair<string, std::function<bool(EVENT&)>>> EventTemplate<EVENT>::listenersNoConst;

DECLARE_EVENT_DATA(PlayerPreJoinEvent);
DECLARE_EVENT_DATA(PlayerJoinEvent);
DECLARE_EVENT_DATA(PlayerLeftEvent);
DECLARE_EVENT_DATA(PlayerRespawnEvent);
DECLARE_EVENT_DATA(PlayerChatEvent);
DECLARE_EVENT_DATA(PlayerUseItemEvent);
DECLARE_EVENT_DATA(PlayerUseItemOnEvent);
DECLARE_EVENT_DATA(PlayerChangeDimEvent);
DECLARE_EVENT_DATA(PlayerJumpEvent);
DECLARE_EVENT_DATA(EntityTransformEvent);
DECLARE_EVENT_DATA(PlayerSneakEvent);
DECLARE_EVENT_DATA(PlayerAttackEvent);
DECLARE_EVENT_DATA(PlayerAttackBlockEvent);
DECLARE_EVENT_DATA(PlayerDieEvent);
DECLARE_EVENT_DATA(PlayerPickupItemEvent);
DECLARE_EVENT_DATA(PlayerDropItemEvent);
DECLARE_EVENT_DATA(PlayerEatEvent);
DECLARE_EVENT_DATA(PlayerConsumeTotemEvent);
DECLARE_EVENT_DATA(PlayerCmdEvent);
DECLARE_EVENT_DATA(PlayerDestroyBlockEvent);
DECLARE_EVENT_DATA(PlayerPlaceBlockEvent);
DECLARE_EVENT_DATA(PlayerEffectChangedEvent);
DECLARE_EVENT_DATA(PlayerStartDestroyBlockEvent);
DECLARE_EVENT_DATA(PlayerOpenContainerEvent);
DECLARE_EVENT_DATA(PlayerCloseContainerEvent);
DECLARE_EVENT_DATA(PlayerInventoryChangeEvent);
DECLARE_EVENT_DATA(PlayerMoveEvent);
DECLARE_EVENT_DATA(PlayerSprintEvent);
DECLARE_EVENT_DATA(PlayerSetArmorEvent);
DECLARE_EVENT_DATA(PlayerUseRespawnAnchorEvent);
DECLARE_EVENT_DATA(PlayerOpenContainerScreenEvent);
DECLARE_EVENT_DATA(PlayerUseFrameBlockEvent);
DECLARE_EVENT_DATA(PlayerExperienceAddEvent);
DECLARE_EVENT_DATA(MobHurtEvent);
DECLARE_EVENT_DATA(MobDieEvent);
DECLARE_EVENT_DATA(EntityExplodeEvent);
DECLARE_EVENT_DATA(ProjectileHitEntityEvent);
DECLARE_EVENT_DATA(WitherBossDestroyEvent);
DECLARE_EVENT_DATA(EntityRideEvent);
DECLARE_EVENT_DATA(EntityStepOnPressurePlateEvent);
DECLARE_EVENT_DATA(NpcCmdEvent);
DECLARE_EVENT_DATA(ProjectileSpawnEvent);
DECLARE_EVENT_DATA(ProjectileCreatedEvent);
DECLARE_EVENT_DATA(ItemUseOnActorEvent);
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


#ifdef ENABLE_SEH_PROTECTION
#define IF_LISTENED(EVENT)    \
    if (EVENT::hasListener()) \
    {                         \
        try

#define IF_LISTENED_END(EVENT)                        \
    catch (...)                                       \
    {                                                 \
        logger.error("Event Callback Failed!");       \
        logger.error("Uncaught Exception Detected!"); \
        logger.error("In Event: " #EVENT "");         \
        PrintCurrentStackTraceback();                 \
    }                                                 \
    }
#else
#define IF_LISTENED(EVENT)    \
    if (EVENT::hasListener()) \
    {
#define IF_LISTENED_END(EVENT) }
#endif


/////////////////////////////// Events /////////////////////////////// 


/////////////////// PreJoin ///////////////////
TClasslessInstanceHook(void, "?sendLoginMessageLocal@ServerNetworkHandler@@QEAAXAEBVNetworkIdentifier@@"
            "AEBVConnectionRequest@@AEAVServerPlayer@@@Z",
      NetworkIdentifier* Ni, ConnectionRequest* a3, ServerPlayer* sp)
{
    IF_LISTENED(PlayerPreJoinEvent)
    {
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
              ServerPlayer)
{
    IF_LISTENED(PlayerJoinEvent)
    {
        PlayerJoinEvent ev{};
        ev.mPlayer = this;

        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(PlayerJoinEvent)
    return original(this);
}


/////////////////// PlayerLeft ///////////////////
TClasslessInstanceHook(void, "?_onPlayerLeft@ServerNetworkHandler@@AEAAXPEAVServerPlayer@@_N@Z",
      ServerPlayer* sp, bool a3)
{
    IF_LISTENED(PlayerLeftEvent)
    {
        PlayerLeftEvent ev{};
        ev.mPlayer = sp;
        ev.mXUID = sp->getXuid();
        ev.call();
    }
    IF_LISTENED_END(PlayerLeftEvent)
    return original(this, sp, a3);
}

/////////////////// PlayerRespawn ///////////////////
TClasslessInstanceHook(void, "?handle@?$PacketHandlerDispatcherInstance@VPlayerActionPacket@@$0A@@@UEBAXAEBVNetworkIdentifier@@AEAVNetEventCallback@@AEAV?$shared_ptr@VPacket@@@std@@@Z",
                       NetworkIdentifier* id, ServerNetworkHandler* handler, void* pPacket)
{
    PlayerActionPacket* packet = *(PlayerActionPacket**)pPacket;
    if (packet->actionType == PlayerActionType::Respawn)
    {
        IF_LISTENED(PlayerRespawnEvent)
        {
            PlayerRespawnEvent ev{};
            ev.mPlayer = packet->getPlayerFromPacket(handler, id);
            if (!ev.mPlayer)
                return;
            ev.call();
        }
        IF_LISTENED_END(PlayerRespawnEvent)
    }
    return original(this, id, handler, pPacket);
}

/////////////////// PlayerChat ///////////////////
TInstanceHook(void, "?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVTextPacket@@@Z",
      ServerNetworkHandler, NetworkIdentifier* id, void* text)
{
    IF_LISTENED(PlayerChatEvent)
    {
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
class ChangeDimensionRequest
{
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
      Player* sp, std::unique_ptr<ChangeDimensionRequest> request)
{

    if (request->mToDimensionId == sp->getDimensionId())
        return original(this, sp, std::move(request));

    IF_LISTENED(PlayerChangeDimEvent)
    {
        PlayerChangeDimEvent ev{};
        ev.mPlayer = sp;
        ev.mToDimensionId = request->mToDimensionId;
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(PlayerChangeDimEvent)
    return original(this, sp, std::move(request));
}


/////////////////// PlayerJump ///////////////////
TInstanceHook(void, "?jumpFromGround@Player@@UEAAXXZ", Player)
{
    IF_LISTENED(PlayerJumpEvent)
    {
        PlayerJumpEvent ev{};
        ev.mPlayer = this;
        ev.call();
    }
    IF_LISTENED_END(PlayerJumpEvent)
    return original(this);
}

////////////////// EntityTransform //////////////////
TClasslessInstanceHook(void, "?maintainOldData@TransformationComponent@@QEAAXAEAVActor@@0AEBUTransformationDescription@@AEBUActorUniqueID@@AEBVLevel@@@Z",
    Actor* beforeEntity, Actor* afterEntity, void* a4, ActorUniqueID* aid, Level* level)
{
    IF_LISTENED(EntityTransformEvent)
    {
        EntityTransformEvent ev{};
        ev.mBeforeEntityUniqueId = &beforeEntity->getActorUniqueId();
        ev.mAfterEntity = afterEntity;
        ev.call();
    }
    IF_LISTENED_END(EntityTransformEvent)
    original(this, beforeEntity, afterEntity, a4, aid, level);
}

/////////////////// PlayerSneak ///////////////////
TClasslessInstanceHook(void, "?sendActorSneakChanged@ActorEventCoordinator@@QEAAXAEAVActor@@_N@Z",
      Actor* ac, bool isSneaking)
{
    IF_LISTENED(PlayerSneakEvent)
    {
        PlayerSneakEvent ev{};
        ev.mPlayer = (Player*)ac;
        ev.mIsSneaking = isSneaking;
        ev.call();

        isSneaking = ev.mIsSneaking;
    }
    IF_LISTENED_END(PlayerSneakEvent)
    return original(this, ac, isSneaking);
}


/////////////////// PlayerAttackEntity ///////////////////
TInstanceHook(bool, "?attack@Player@@UEAA_NAEAVActor@@AEBW4ActorDamageCause@@@Z",
      Player , Actor* ac, int* damageCause)
{
    IF_LISTENED(PlayerAttackEvent)
    {
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
    Block , Player* pl, BlockPos* bp)
{
    IF_LISTENED(PlayerAttackBlockEvent)
    {
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
      Player , Actor* actor, int a2, int a3)
{
    IF_LISTENED(PlayerPickupItemEvent)
    {
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
      Player, ItemStack* it, bool a3)
{
    if (isQDrop) return original(this, it, a3);
    if (isDieDrop) return original(this, it, a3);
    IF_LISTENED(PlayerDropItemEvent)
    {
        PlayerDropItemEvent ev{};
        ev.mPlayer = this;
        ev.mItemStack = it;
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(PlayerDropItemEvent)
    return original(this,it,a3);
}

/////////////////// PlayerConsumeTotem ///////////////////
TInstanceHook(void, "?consumeTotem@Player@@UEAA_NXZ", Player)
{
    IF_LISTENED(PlayerConsumeTotemEvent)
    {
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
TInstanceHook(void, "?onEffectAdded@ServerPlayer@@MEAAXAEAVMobEffectInstance@@@Z", Player, MobEffectInstance* effect)
{
    IF_LISTENED(PlayerEffectChangedEvent)
    {
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
TInstanceHook(void, "?onEffectRemoved@ServerPlayer@@MEAAXAEAVMobEffectInstance@@@Z", Player , MobEffectInstance* effect)
{
    IF_LISTENED(PlayerEffectChangedEvent)
    {
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
TInstanceHook(void, "?onEffectUpdated@ServerPlayer@@MEAAXAEAVMobEffectInstance@@@Z", Player, MobEffectInstance* effect)
{
    IF_LISTENED(PlayerEffectChangedEvent)
    {
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
       Player* pl, BlockPos* bp)
{
    IF_LISTENED(PlayerStartDestroyBlockEvent)
    {
        PlayerStartDestroyBlockEvent ev{};
        ev.mPlayer = pl;
        ev.mBlockInstance = Level::getBlockInstance(bp, Level::getBlockSource(pl));
        ev.call();
    }
    IF_LISTENED_END(PlayerStartDestroyBlockEvent)
    return original(this, pl, bp);
}

/////////////////// PlayerPlaceBlock ///////////////////
TInstanceHook(bool, "?mayPlace@BlockSource@@QEAA_NAEBVBlock@@AEBVBlockPos@@EPEAVActor@@_N@Z",
      BlockSource , Block* a2, BlockPos* a3, unsigned __int8 a4, Actor* ac, bool a6)
{
    auto rtn = original(this, a2, a3, a4, ac, a6);
    if (!rtn)
        return rtn;
    IF_LISTENED(PlayerPlaceBlockEvent)
    {
        if (Player::isValid((Player*)ac))
        {
            PlayerPlaceBlockEvent ev{};
            ev.mPlayer = (Player*)ac;
            ev.mBlockInstance = BlockInstance::createBlockInstance(a2, *a3, (int)this->getDimensionId());
            if (!ev.call())
                return false;
        }
    }
    IF_LISTENED_END(PlayerPlaceBlockEvent)
    return rtn;
}

TClasslessInstanceHook(bool, "?_useOn@BambooBlockItem@@UEBA_NAEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z",
       ItemStack* a2, Actor* a3, BlockPos a4, unsigned char a5, Vec3* a6)
{
    IF_LISTENED(PlayerPlaceBlockEvent)
    {
        if (Player::isValid((Player*)a3))
        {
            auto& bs = a3->getRegion();
            auto onBlockPos = a4.relative(a5, -1);
            auto onBlock = &bs.getBlock(onBlockPos).getDefaultState();
            auto underBlock = &bs.getBlock(a4.relative(0, 1)).getDefaultState();
            if (onBlock == VanillaBlocks::mBambooBlock || onBlock == VanillaBlocks::mBambooSapling
                || underBlock == VanillaBlocks::mBambooBlock || underBlock == VanillaBlocks::mBambooSapling)
                return original(this, a2, a3, a4, a5, a6); // listen in BlockSource::mayPlace
            
            PlayerPlaceBlockEvent ev{};
            ev.mPlayer = (Player*)a3;
            ev.mBlockInstance = BlockInstance::createBlockInstance(const_cast<Block*>(VanillaBlocks::mBambooSapling), a4, (int)a3->getDimensionId());
            if (!ev.call())
                return false;
        }
    }
    IF_LISTENED_END(PlayerPlaceBlockEvent)
    return original(this, a2, a3, a4, a5, a6);
}

//THook(bool, "?_useOn@BannerItem@@UEBA_NAEAVItemStack@@AEAVActor@@VBlockPos@@EMMM@Z", __int64 a1, ItemStackBase* a2, Actor* a3, const struct BlockPos* a4, unsigned __int8 a5, int a6, int a7, int a8)
//{
//    IF_LISTENED(PlayerPlaceBlockEvent)
//    {
//        if (Player::isValid((Player*)a3))
//        {
//            PlayerPlaceBlockEvent ev{};
//            ev.mPlayer = (Player*)a3;
//            ev.mBlockInstance = BlockInstance::createBlockInstance(const_cast<Block*>(a2->getBlock()), *a4, (int)a3->getDimensionId());
//            if (!ev.call())
//                return false;
//        }
//    }
//    IF_LISTENED_END(PlayerPlaceBlockEvent)
//    return original(a1, a2, a3, a4, a5, a6);
//}

TClasslessInstanceHook(bool, "?_tryUseOn@BedItem@@AEBA_NAEAVItemStackBase@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z",
     ItemStackBase *a2, Actor* a3, BlockPos a4, unsigned char a5, Vec3* a6)
{
    IF_LISTENED(PlayerPlaceBlockEvent)
    {
        if (Player::isValid((Player*)a3))
        {
            PlayerPlaceBlockEvent ev{};
            ev.mPlayer = (Player*)a3;
            ev.mBlockInstance = BlockInstance::createBlockInstance(const_cast<Block*>(VanillaBlocks::mBed), a4, (int)a3->getDimensionId());
            if (!ev.call())
                return false;
        }
    }
    IF_LISTENED_END(PlayerPlaceBlockEvent)
    return original(this, a2, a3, a4, a5, a6);
}

TClasslessInstanceHook(bool, "?_useOn@DyePowderItem@@EEBA_NAEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z",
      ItemStack* a2, Actor* a3, BlockPos a4, unsigned char a5, Vec3* a6)
{
    IF_LISTENED(PlayerPlaceBlockEvent)
    {
        if (Player::isValid((Player*)a3))
        {
            PlayerPlaceBlockEvent ev{};
            ev.mPlayer = (Player*)a3;
            auto& PlacementBlock = VanillaBlocks::mCocoa->getPlacementBlock(*a3, a4, a5, a4.toVec3(), 0);
            ev.mBlockInstance = BlockInstance::createBlockInstance(const_cast<Block*>(&PlacementBlock), a4, (int)a3->getDimensionId());
            if (!ev.call())
                return false;
        }
    }
    IF_LISTENED_END(PlayerPlaceBlockEvent)
    return original(this, a2, a3, a4, a5, a6);
}

TClasslessInstanceHook(bool, "?_useOn@DoorItem@@EEBA_NAEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z",
      ItemStack* a2, Actor* a3, BlockPos a4, unsigned char a5, Vec3* a6)
{
    IF_LISTENED(PlayerPlaceBlockEvent)
    {
        if (Player::isValid((Player*)a3))
        {
            PlayerPlaceBlockEvent ev{};
            ev.mPlayer = (Player*)a3;
            const Block* v11 = nullptr;
            switch (dAccess<int, 552>(this))
            {
                case 0:
                    v11 = VanillaBlocks::mWoodenDoor;
                    break;
                case 1:
                    v11 = VanillaBlocks::mWoodenDoorSpruce;
                    break;
                case 2:
                    v11 = VanillaBlocks::mWoodenDoorBirch;
                    break;
                case 3:
                    v11 = VanillaBlocks::mWoodenDoorJungle;
                    break;
                case 4:
                    v11 = VanillaBlocks::mWoodenDoorAcacia;
                    break;
                case 5:
                    v11 = VanillaBlocks::mWoodenDoorDarkOak;
                    break;
                case 6:
                    v11 = VanillaBlocks::mIronDoor;
                    break;
                case 7:
                    v11 = VanillaBlocks::mCrimsonDoor;
                    break;
                case 8:
                    v11 = VanillaBlocks::mWarpedDoor;
            }
            if (!v11) return false;
            ev.mBlockInstance = BlockInstance::createBlockInstance(const_cast<Block*>(v11), {a4.x, a4.y + 1, a4.z}, (int)a3->getDimensionId());
            if (!ev.call())
                return false;
        }
    }
    IF_LISTENED_END(PlayerPlaceBlockEvent)
    return original(this, a2, a3, a4, a5, a6);
}

TClasslessInstanceHook(bool, "?_useOn@RedStoneDustItem@@EEBA_NAEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z",
      ItemStack* a2, Actor* a3, BlockPos a4, unsigned char a5, Vec3* a6)
{
    IF_LISTENED(PlayerPlaceBlockEvent)
    {
        if (Player::isValid((Player*)a3))
        {
            PlayerPlaceBlockEvent ev{};
            ev.mPlayer = (Player*)a3;
            ev.mBlockInstance = BlockInstance::createBlockInstance(const_cast<Block*>(VanillaBlocks::mRedStoneDust), a4, (int)a3->getDimensionId());
            if (!ev.call())
                return false;
        }
    }
    IF_LISTENED_END(PlayerPlaceBlockEvent)
    return original(this, a2, a3, a4, a5, a6);
}

//THook(bool, "?_useOn@SignItem@@UEBA_NAEAVItemStack@@AEAVActor@@VBlockPos@@EMMM@Z", 
//      class SignItem* a1, ItemStack* a2, Actor* a3, BlockPos a4, unsigned char a5, Vec3* a6)
//{
//    IF_LISTENED(PlayerPlaceBlockEvent)
//    {
//        if (Player::isValid((Player*)a3))
//        {
//            auto& blockMap = dAccess<std::map<int, std::pair<Block*, Block*>>>(a1, 552); // SignItem::SignItem
//            auto& signType = dAccess<int>(a1, 568);                                      // SignItem::SignItem
//            auto block = a5 == 1 ? blockMap[signType].first : blockMap[signType].second;
//            PlayerPlaceBlockEvent ev{};
//            ev.mPlayer = (Player*)a3;
//            ev.mBlockInstance = BlockInstance::createBlockInstance(block, a4, (int)a3->getDimensionId());
//            if (!ev.call())
//                return false;
//        }
//    }
//    IF_LISTENED_END(PlayerPlaceBlockEvent)
//    return original(a1, a2, a3, a4, a5, a6);
//}

TInstanceHook(bool, "?_calculatePlacePos@SignItem@@EEBA_NAEAVItemStackBase@@AEAVActor@@AEAEAEAVBlockPos@@@Z",
              SignItem, ItemStackBase* a2, Actor* a3, unsigned char& a4, class BlockPos* a5)
{
    auto rtn = original(this, a2, a3, a4, a5);
    if (!rtn)
        return rtn;
    IF_LISTENED(PlayerPlaceBlockEvent)
    {
        if (Player::isValid((Player*)a3))
        {
            // map<SignType, pair<StandingSign, WallSign>> blockMap
            auto& blockMap = dAccess<std::map<int,std::pair<Block*, Block*>>>(this, 552); // SignItem::SignItem
            auto& signType = dAccess<int>(this, 568); // SignItem::SignItem
            auto block = a4 == 1 ? blockMap[signType].first : blockMap[signType].second;
            PlayerPlaceBlockEvent ev{};
            ev.mPlayer = (Player*)a3;
            ev.mBlockInstance = BlockInstance::createBlockInstance(block, *a5, (int)a3->getDimensionId());
            if (!ev.call())
                return false;
        }
    }
    IF_LISTENED_END(PlayerPlaceBlockEvent)
    return rtn;
}

//THook(bool, "?_useOn@BlockPlanterItem@@MEBA_NAEAVItemStack@@AEAVActor@@VBlockPos@@EMMM@Z",
//      class BlockPlanterItem* a1, ItemStack* a2, Actor* a3, BlockPos a4, unsigned char a5, Vec3* a6)
//{
//    IF_LISTENED(PlayerPlaceBlockEvent)
//    {
//        if (Player::isValid((Player*)a3))
//        {
//            PlayerPlaceBlockEvent ev{};
//            ev.mPlayer = (Player*)a3;
//            ev.mBlockInstance = BlockInstance::createBlockInstance(dAccess<Block*>(a1, 69*8), a4, (int)a3->getDimensionId());
//            if (!ev.call())
//                return false;
//        }
//    }
//    IF_LISTENED_END(PlayerPlaceBlockEvent)
//    return original(a1, a2, a3, a4, a5, a6);
//}

#include <MC/SeedItemComponentLegacy.hpp>
TInstanceHook(bool, "?useOn@SeedItemComponentLegacy@@QEAA_NAEAVItemStack@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@@Z",
      SeedItemComponentLegacy, ItemStack* a2, Actor* a3, BlockPos const* a4, unsigned char a5, Vec3 const* a6)
{
    IF_LISTENED(PlayerPlaceBlockEvent)
    {
        if (Player::isValid((Player*)a3))
        {
            //if (!this->_canPlant(a3->getRegion().getBlock(*a4)))
            //    return original(this, a2, a3, a4, a5, a6);
            auto growthDirection = dAccess<unsigned char>(this, 42);
            auto blockPos = a4->relative(growthDirection, 1);
            auto block = dAccess<Block*, 8>(this);
            PlayerPlaceBlockEvent ev{};
            ev.mPlayer = (Player*)a3;
            ev.mBlockInstance = BlockInstance::createBlockInstance(block, blockPos, (int)a3->getDimensionId());
            if (!ev.call())
                return false;
        }
    }
    IF_LISTENED_END(PlayerPlaceBlockEvent)
    return original(this, a2, a3, a4, a5, a6);
}

/////////////////// PlayerOpenContainer ///////////////////
TClasslessInstanceHook(__int64, "?onEvent@VanillaServerGameplayEventListener@@UEAA?AW4EventResult@@AEBUPlayerOpenContainerEvent@@@Z", void* a2)
{
    Actor* pl = SymCall("??$tryUnwrap@VActor@@$$V@WeakEntityRef@@QEBAPEAVActor@@XZ", Actor*, void*)(a2);
    if (pl->isPlayer())
    {
        IF_LISTENED(PlayerOpenContainerEvent)
        {
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
//chest
TInstanceHook(bool, "?stopOpen@ChestBlockActor@@UEAAXAEAVPlayer@@@Z",
              ChestBlockActor, Player* pl)
{
    IF_LISTENED(PlayerCloseContainerEvent)
    {
        BlockActor* ba = (BlockActor*)((char*)this - 240); //IDA ChestBlockActor::stopOpen
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
//barrel
TClasslessInstanceHook(bool, "?stopOpen@BarrelBlockActor@@UEAAXAEAVPlayer@@@Z",
       Player* pl)
{
    IF_LISTENED(PlayerCloseContainerEvent)
    {
        BlockActor* ba = (BlockActor*)((char*)this - 240); //IDA ChestBlockActor::stopOpen
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
      Player , void* container, int slotNumber, ItemStack* oldItem, ItemStack* newItem, bool is)
{
    IF_LISTENED(PlayerInventoryChangeEvent)
    {
        if (this->isPlayer())
        {
            PlayerInventoryChangeEvent ev{};
            ev.mPlayer = this;
            ev.mSlot = slotNumber;
            ev.mPreviousItemStack = oldItem;
            ev.mNewItemStack = newItem;
            ev.call();
        }
    }
    IF_LISTENED_END(PlayerInventoryChangeEvent)
    return original(this, container, slotNumber, oldItem, newItem, is);
}

/////////////////// PlayerMove ///////////////////
TClasslessInstanceHook(void, "?sendPlayerMove@PlayerEventCoordinator@@QEAAXAEAVPlayer@@@Z",
     Player* pl)
{
    IF_LISTENED(PlayerMoveEvent)
    {
        if (pl->isMoving())
        {
            PlayerMoveEvent ev{};
            ev.mPlayer = pl;
            ev.mPos = pl->getPosition();
            ev.call();
        }
    }
    IF_LISTENED_END(PlayerMoveEvent)
    return original(this, pl);
}

/////////////////// PlayerSprint ///////////////////
TInstanceHook(void, "?setSprinting@Mob@@UEAAX_N@Z",
      Mob , bool sprinting)
{
    IF_LISTENED(PlayerSprintEvent)
    {
        if (this->isPlayer() && this->isSprinting() != sprinting)
        {
            PlayerSprintEvent ev{};
            ev.mPlayer = (Player*)this;
            ev.mIsSprinting = sprinting;
            if (!ev.call())
                return;

            //sprinting = ev.mIsSprinting;
        }
    }
    IF_LISTENED_END(PlayerSprintEvent)
    return original(this, sprinting);
}

/////////////////// PlayerSetArmor ///////////////////
TInstanceHook(void, "?setArmor@Player@@UEAAXW4ArmorSlot@@AEBVItemStack@@@Z",
      Player, unsigned slot, ItemStack* it)
{
    IF_LISTENED(PlayerSetArmorEvent)
    {
        if (this->isPlayer())
        {
            PlayerSetArmorEvent ev{};
            ev.mPlayer = this;
            ev.mSlot = slot;
            ev.mArmorItem = it;
            ev.call();
        }
    }
    IF_LISTENED_END(PlayerSetArmorEvent)
    return original(this, slot, it);
}

/////////////////// PlayerUseRespawnAnchor ///////////////////
TInstanceHook(bool, "?trySetSpawn@RespawnAnchorBlock@@CA_NAEAVPlayer@@AEBVBlockPos@@AEAVBlockSource@@AEAVLevel@@@Z",
      Player , BlockPos* bp, BlockSource* bs, Level* a4)
{
    IF_LISTENED(PlayerUseRespawnAnchorEvent)
    {
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
TInstanceHook(bool, "?canOpenContainerScreen@Player@@UEAA_NXZ",Player)
{
    IF_LISTENED(PlayerOpenContainerScreenEvent)
    {
        PlayerOpenContainerScreenEvent ev{};
        ev.mPlayer = this;
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(PlayerOpenContainerScreenEvent)
    return original(this);
}

bool IsMcServerThread()
{
    static auto threadid = std::thread::id();
    if (threadid == std::thread::id())
    {
        PWSTR desc;
        GetThreadDescription(GetCurrentThread(), &desc);
        bool res = std::wstring(desc) == L"MC_SERVER";
        LocalFree(desc);
        if (res)
            threadid = std::this_thread::get_id();
        return res;
    }
    return threadid == std::this_thread::get_id();
}

/////////////////// PlayerCmdEvent & ConsoleCmd ///////////////////
TClasslessInstanceHook(MCRESULT*, "?executeCommand@MinecraftCommands@@QEBA?AUMCRESULT@@V?$shared_ptr@VCommandContext@@@std@@_N@Z",
       MCRESULT* rtn, std::shared_ptr<CommandContext> context, bool print)
{
    Player* sp;
    string cmd;

    try
    {
        sp = context->getOrigin().getPlayer();
        cmd = context->getCmd();
        if (!cmd.empty() && cmd.at(0) == '/')
        {
            cmd = cmd.substr(1, cmd.size() - 1);
        }

        if (!Util::isValidUTF8(cmd)) {
            logger.error("Detected invalid utf-8 character, command will not be executed");
            return rtn;
        }
    }
    catch (...)
    {
        return rtn;
    }

    if (LL::isDebugMode() && !IsMcServerThread())
    {
        logger.warn("The thread executing the command \"{}\" is not the \"MC_SERVER\" thread");
    }
    if (sp)
    {
        //PlayerCmd
        IF_LISTENED(PlayerCmdEvent)
        {
            PlayerCmdEvent ev{};
            ev.mCommand = cmd;
            ev.mPlayer = sp;
            ev.mResult = rtn;

            if (!ev.call())
                return rtn;

            context->getCmd() = ev.mCommand;
        }
        IF_LISTENED_END(PlayerCmdEvent)
    }
    else
    {
        //ConsoleCmd
        IF_LISTENED(ConsoleCmdEvent)
        {
            ConsoleCmdEvent ev{};
            ev.mCommand = cmd;

            if (!ev.call())
                return rtn;

            context->getCmd() = ev.mCommand;
        }
        IF_LISTENED_END(ConsoleCmdEvent)
    }
    return original(this, rtn, context, print);
}

/////////////////// PlayerExperienceAddEvent ///////////////////
TInstanceHook(void, "?addExperience@Player@@UEAAXH@Z", Player , int exp)
{
    IF_LISTENED(PlayerExperienceAddEvent)
    {
        PlayerExperienceAddEvent ev{};
        ev.mPlayer = this;
        ev.mExp = exp;
        if (!ev.call())
            return;
    }
    IF_LISTENED_END(PlayerExperienceAddEvent)
    return original(this, exp);
}

/////////////////// CmdBlockExecute ///////////////////
TInstanceHook(bool, "?_performCommand@BaseCommandBlock@@AEAA_NAEAVBlockSource@@AEBVCommandOrigin@@AEA_N@Z",
      BaseCommandBlock , BlockSource* a2, CommandOrigin* a3, bool* a4)
{
    IF_LISTENED(CmdBlockExecuteEvent)
    {
        CmdBlockExecuteEvent ev{};
        ev.mCommand = this->getCommand();
        if ((OriginType)a3->getOriginType() == OriginType::MinecartBlock)
        {
            ev.mIsMinecart = true;
            ev.mMinecart = a3->getEntity();
        }
        else
        {
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
       Player* pl, BlockPos* bp)
{
    IF_LISTENED(BlockInteractedEvent)
    {
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
TInstanceHook(void, "?_blockChanged@BlockSource@@IEAAXAEBVBlockPos@@IAEBVBlock@@1HPEBUActorBlockSyncMessage@@@Z",
      BlockSource , BlockPos* bp, int a3, Block* afterBlock, Block* beforeBlock, int a6, void* a7)
{
    IF_LISTENED(BlockChangedEvent)
    {
        int dimId = this->getDimensionId();
        BlockChangedEvent ev{};
        ev.mPreviousBlockInstance = BlockInstance::createBlockInstance(beforeBlock, *bp, dimId);
        ev.mNewBlockInstance = BlockInstance::createBlockInstance(afterBlock, *bp, dimId);
        if (!ev.call())
            return;
    }
    IF_LISTENED_END(BlockChangedEvent)
    return original(this, bp, a3, afterBlock, beforeBlock, a6, a7);
}

/////////////////// BlockExploded ///////////////////
TInstanceHook(void, "?onExploded@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z",
      Block, BlockSource* bs, BlockPos* bp, Actor* actor)
{
    IF_LISTENED(BlockExplodedEvent)
    {
        if (actor)
        {
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
     BlockSource* bs, BlockPos* bp)
{
    onFireSpread_OnPlace = true;
    original(this, bs, bp);
    onFireSpread_OnPlace = false;
}

TClasslessInstanceHook(bool, "?mayPlace@FireBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z",
      BlockSource* bs, BlockPos* bp)
{
    auto rtn = original(this, bs, bp);
    if (!onFireSpread_OnPlace || !rtn)
        return rtn;

    IF_LISTENED(FireSpreadEvent)
    {
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
#include <MC/LevelContainerModel.hpp>

TInstanceHook(void, "?_onItemChanged@LevelContainerModel@@MEAAXHAEBVItemStack@@0@Z",
      LevelContainerModel , int slotNumber, ItemStack* oldItem, ItemStack* newItem)
{
    IF_LISTENED(ContainerChangeEvent)
    {
        Player* pl = (Player*)dAccess<Actor*>(this, 208); //IDA LevelContainerModel::LevelContainerModel

        if (pl->hasOpenContainer())
        {
            BlockPos* bp = (BlockPos*)((char*)this + 216);

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
      Block, BlockSource* bs, BlockPos* bp, Actor* actor)
{
    // Exclude default position BlockPos::Zero
    if ((bp->x | bp->y | bp->z) == 0) //actor->getPos().distanceTo(bp->center())>5)
        return original(this, bs, bp, actor);
    IF_LISTENED(ProjectileHitBlockEvent)
    {
        if (this->getTypeName() != "minecraft:air")
        {
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
      BlockSource* bs, BlockPos* bp, int level, bool isActive)
{
    IF_LISTENED(RedStoneUpdateEvent)
    {
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
      BlockSource* bs, BlockPos* bp, int level, bool isActive)
{
    IF_LISTENED(RedStoneUpdateEvent)
    {
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
       BlockSource* bs, BlockPos* bp, int level, bool isActive)
{
    IF_LISTENED(RedStoneUpdateEvent)
    {
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
       BlockSource* bs, BlockPos* bp, int level, bool isActive)
{
    IF_LISTENED(RedStoneUpdateEvent)
    {
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
       BlockSource* bs, void* container, Vec3* pos)
{
    bool isMinecart = dAccess<bool>(this, 5); // IDA Hopper::Hopper

    IF_LISTENED(HopperSearchItemEvent)
    {
        HopperSearchItemEvent ev{};
        if (isMinecart)
        {
            ev.isMinecart = true;
            ev.mMinecartPos = *pos;
        }
        else
        {
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
      BlockSource* bs, void* container, Vec3* pos, int a5)
{
    IF_LISTENED(HopperPushOutEvent)
    {
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
    PistonBlockActor, BlockSource* bs, BlockPos* bp, char a3, char a4)
{
    IF_LISTENED(PistonTryPushEvent)
    {
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

    IF_LISTENED(PistonPushEvent)
    {
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
      BlockSource* bs, BlockPos* bp, Actor* ac, float a5)
{
    IF_LISTENED(FarmLandDecayEvent)
    {
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
      Player* a2, BlockPos* a3)
{
    IF_LISTENED(PlayerUseFrameBlockEvent)
    {
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
       Player* a2, BlockPos* a3)
{
    IF_LISTENED(PlayerUseFrameBlockEvent)
    {
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
#include <MC/LiquidBlockDynamic.hpp>
TInstanceHook(bool, "?_canSpreadTo@LiquidBlockDynamic@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@1E@Z",
      LiquidBlockDynamic , class BlockSource& bs, class BlockPos const& to, class BlockPos const& from, unsigned char unk)
{
    auto rtn = original(this, bs, to, from, unk);
    if (!rtn)
        return rtn;
    IF_LISTENED(LiquidSpreadEvent)
    {
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

//THook(void, "?_trySpreadTo@LiquidBlockDynamic@@AEBAXAEAVBlockSource@@AEBVBlockPos@@H1E@Z",
//      LiquidBlockDynamic* _this, BlockSource* bs, BlockPos* to, unsigned int a4, BlockPos* from, char id)
//{
//    IF_LISTENED(LiquidSpreadEvent)
//    {
//        LiquidSpreadEvent ev{};
//        ev.mBlockInstance = BlockInstance::createBlockInstance(
//            const_cast<Block*>(&_this->getRenderBlock()), *from, bs->getDimensionId());
//        ev.mTarget = *to;
//        ev.mDimensionId = bs->getDimensionId();
//        logger.warn("LiquidSpreadEvent - {} - {} -> {}",
//                    ev.mBlockInstance.getBlock()->getTypeName(), from->toString(), to->toString());
//        if (!ev.call())
//            return;
//    }
//    IF_LISTENED_END(LiquidSpreadEvent)
//    return;
//    original(_this, bs, to, a4, from, id);
//}


/////////////////// PlayerDeath ///////////////////
TInstanceHook(void*, "?die@Player@@UEAAXAEBVActorDamageSource@@@Z", ServerPlayer, ActorDamageSource* src)
{
    IF_LISTENED(PlayerDieEvent)
    {
        if (this->isPlayer())
        {
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

bool isStartDestroy = false;
THook(bool, "?startDestroyBlock@GameMode@@UEAA_NAEBVBlockPos@@EAEA_N@Z", Actor** ac, BlockPos* bpos, unsigned __int8 a3, bool* a4)
{
    IF_LISTENED(PlayerDestroyBlockEvent)
    {
        if (ac[1]->isPlayer())
        {
            PlayerDestroyBlockEvent ev{};
            ev.mPlayer = (ServerPlayer*)ac[1];
            ev.mBlockInstance = Level::getBlockInstance(bpos, ac[1]->getDimensionId());
            if (!ev.call())
                return false;
            isStartDestroy = true;
            auto out = original(ac, bpos, a3, a4);
            isStartDestroy = false;
            return out;
        }
    }
    IF_LISTENED_END(PlayerDestroyBlockEvent)
    return original(ac, bpos, a3, a4);
}

/////////////////// PlayerDestroy ///////////////////
TInstanceHook(bool, "?checkBlockDestroyPermissions@BlockSource@@QEAA_NAEAVActor@@AEBVBlockPos@@AEBVItemStackBase@@_N@Z",
      BlockSource , Actor* ac, BlockPos* bpos, ItemStackBase* a4, bool a5)
{
    if (isStartDestroy) return original(this, ac, bpos, a4, a5);
    IF_LISTENED(PlayerDestroyBlockEvent)
    {
        if (ac->isPlayer())
        {
            PlayerDestroyBlockEvent ev{};
            ev.mPlayer = (ServerPlayer*)ac;
            ev.mBlockInstance = Level::getBlockInstance(bpos, this->getDimensionId());
            if (!ev.call())
                return false;
        }
    }
    IF_LISTENED_END(PlayerDestroyBlockEvent)
    return original(this, ac, bpos, a4, a5);
}

/////////////////// PlayerUseItemOn ///////////////////
TInstanceHook(bool, "?useItemOn@GameMode@@UEAA_NAEAVItemStack@@AEBVBlockPos@@EAEBVVec3@@PEBVBlock@@@Z",
      GameMode , ItemStack& it, BlockPos bp, unsigned char side, void* a5, void* a6_block)
{
    IF_LISTENED(PlayerUseItemOnEvent)
    {
        PlayerUseItemOnEvent ev{};
        ev.mPlayer = this->getPlayer();
        ev.mBlockInstance = Level::getBlockInstance(bp, ev.mPlayer->getDimensionId());
        ev.mItemStack = &it;
        ev.mFace = side;
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(PlayerUseItemOnEvent)
    return original(this, it, bp, side, a5, a6_block);
}


/////////////////// MobHurt ///////////////////
TInstanceHook(bool, "?_hurt@Mob@@MEAA_NAEBVActorDamageSource@@H_N1@Z",
      Mob, ActorDamageSource& src, int damage, bool unk1_1, bool unk2_0)
{
    IF_LISTENED(MobHurtEvent)
    {
        if (this)
        {
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

TInstanceHook(int64_t, "?getDamageAfterMagicAbsorb@Mob@@UEAAHAEBVActorDamageSource@@H@Z", Mob, ActorDamageSource* src, int damage)
{
    if (src->getCause() == ActorDamageCause::Magic)
    {
        IF_LISTENED(MobHurtEvent)
        {
            if (this)
            {
                MobHurtEvent ev{};
                ev.mMob = this;
                ev.mDamageSource = src;
                ev.mDamage = damage;
                if (!ev.call())
                    return 0;
                damage = ev.mDamage;
            }
        }
        IF_LISTENED_END(MobHurtEvent)
    }
    return original(this, src, damage);
}

//////////////// PlayerUseItem & PlayerEat ////////////////
#include <MC/ComponentItem.hpp>
TInstanceHook(bool, "?baseUseItem@GameMode@@QEAA_NAEAVItemStack@@@Z", GameMode , ItemStack& it)
{
    auto pl = this->getPlayer();
    IF_LISTENED(PlayerUseItemEvent)
    {
        PlayerUseItemEvent ev{};
        ev.mPlayer = pl;
        ev.mItemStack = &it;
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(PlayerUseItemEvent)
    IF_LISTENED(PlayerEatEvent)
    {
        if (it.getItem()->isFood() && (pl->isHungry() || pl->forceAllowEating()))
        {
            PlayerEatEvent ev{};
            ev.mPlayer = pl;
            ev.mFoodItem = &it;
            if (!ev.call())
            {
                pl->refreshAttribute(Player::HUNGER);
                return false;
            }
        }
    }
    IF_LISTENED_END(PlayerEatEvent)
    return original(this, it);
}

/////////////////// MobDie ///////////////////
TInstanceHook(bool, "?die@Mob@@UEAAXAEBVActorDamageSource@@@Z", Mob, ActorDamageSource* ads)
{
    IF_LISTENED(MobDieEvent)
    {
        if (this)
        {
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
TClasslessInstanceHook(void, "?explode@Explosion@@QEAAXXZ")
{
    try
    {
        auto acId = *(ActorUniqueID*)((QWORD*)this + 11);
        auto actor = Global<Level>->getEntity(acId);
        auto pos = *(Vec3*)(QWORD*)this;
        auto radius = *((float*)this + 3);
        auto bs = (BlockSource*)*((QWORD*)this + 12);
        auto maxResistance = *((float*)this + 26);
        auto genFire = (bool)*((BYTE*)this + 80);
        auto canBreaking = (bool)*((BYTE*)this + 81);

        IF_LISTENED(EntityExplodeEvent)
        {
            if (actor)
            {
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

        IF_LISTENED(BlockExplodeEvent)
        {
            if (!actor)
            {
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
    }
    catch (...)
    {
        logger.error("Event Callback Failed!");
        logger.error("Uncaught Exception Detected!");
        logger.error("In Event: Entity or Block Explosion");
    }
    original(this);
}


////////////// ProjectileHitEntity //////////////
TClasslessInstanceHook(void, "?onHit@ProjectileComponent@@QEAAXAEAVActor@@AEBVHitResult@@@Z",
       Actor* item, HitResult* res)
{
    IF_LISTENED(ProjectileHitEntityEvent)
    {
        Actor* to = res->getEntity();
        if (to)
        {
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
TInstanceHook(void, "?_destroyBlocks@WitherBoss@@AEAAXAEAVLevel@@AEBVAABB@@AEAVBlockSource@@H@Z",
      Actor , Level* a2, AABB* aabb, BlockSource* a4, int a5)
{
    IF_LISTENED(WitherBossDestroyEvent)
    {
        WitherBossDestroyEvent ev{};
        ev.mWitherBoss = (WitherBoss*)this;
        ev.mDestroyRange = *aabb;
        if (!ev.call())
            return;

        *aabb = ev.mDestroyRange;
    }
    IF_LISTENED_END(WitherBossDestroyEvent)
    original(this, a2, aabb, a4, a5);
}


////////////// EntityRide //////////////
TInstanceHook(bool, "?canAddPassenger@Actor@@UEBA_NAEAV1@@Z",
      Actor, Actor* a2)
{
    auto rtn = original(this, a2);
    if (!rtn)
        return false;
    IF_LISTENED(EntityRideEvent)
    {
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
TClasslessInstanceHook(void, "?entityInside@BasePressurePlateBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z",
      BlockSource* a2, BlockPos* a3, Actor* a4)
{
    IF_LISTENED(EntityStepOnPressurePlateEvent)
    {
        EntityStepOnPressurePlateEvent ev{};
        ev.mActor = a4;
        ev.mBlockInstance = Level::getBlockInstance(a3, a4->getDimensionId());
        ev.call();
    }
    IF_LISTENED_END(EntityStepOnPressurePlateEvent)
    original(this, a2, a3, a4);
}

////////////// ProjectileSpawn //////////////
TClasslessInstanceHook(Actor*,
      "?spawnProjectile@Spawner@@QEAAPEAVActor@@AEAVBlockSource@@AEBUActorDefinitionIdentifier@@PEAV2@AEBVVec3@@3@Z",
       BlockSource* a2, ActorDefinitionIdentifier* a3, Actor* a4, Vec3* a5, Vec3* a6)
{
    string name = a3->getCanonicalName();
    if (name != "minecraft:thrown_trident")
    {
        IF_LISTENED(ProjectileSpawnEvent)
        {
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
    IF_LISTENED(ProjectileCreatedEvent)
    {
        ProjectileCreatedEvent ev{};
        ev.mShooter = a4;
        ev.mProjectile = projectile;
        ev.call();
    }
    IF_LISTENED_END(ProjectileCreatedEvent)
    return projectile;
}

#include <MC/CrossbowItem.hpp>
#include <MC/ActorDefinitionIdentifier.hpp>
static_assert(sizeof(ActorDefinitionIdentifier) == 176);
TInstanceHook(void, "?_shootFirework@CrossbowItem@@AEBAXAEBVItemInstance@@AEAVPlayer@@@Z",
    CrossbowItem, void* a1, Player* a2)
{
    IF_LISTENED(ProjectileSpawnEvent)
    {
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
   ItemStack* a2, Player* a3, int a4)
{
    IF_LISTENED(ProjectileSpawnEvent)
    {
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

////////////// NpcCmd //////////////
TInstanceHook(void,
      "?executeCommandAction@NpcComponent@@QEAAXAEAVActor@@AEAVPlayer@@HAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z",
      NpcComponent, Actor* ac, Player* pl, int a4, string& a5)
{
    IF_LISTENED(NpcCmdEvent)
    {
        //IDA NpcComponent::executeCommandAction
        NpcSceneDialogueData data(*this, *ac, a5);
        auto& container = data.getActionsContainer();
        auto actionAt = container.getActionAt(a4);
        if (actionAt && dAccess<char>(actionAt, 8) == (char)1)
        {
            
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
      ArmorStand, Player* a2, int a3)
{
    IF_LISTENED(ArmorStandChangeEvent)
    {
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


////////////// ItemUseOnActorInventory //////////////
TInstanceHook(void, "?handle@ItemUseOnActorInventoryTransaction@@UEBA?AW4InventoryTransactionError@@AEAVPlayer@@_N@Z",
      ServerNetworkHandler, ServerPlayer* sp, bool unk)
{
    IF_LISTENED(ItemUseOnActorEvent)
    {
        ItemUseOnActorEvent ev{};
        ev.mTarget = dAccess<ActorRuntimeID, 104>(this);
        ev.mInteractiveMode = dAccess<int, 112>(this);
        ev.call();
    }
    IF_LISTENED_END(ItemUseOnActorEvent)
    return original(this, sp, unk);
}

////////////// PlayerScoreChangedEvent  //////////////
TClasslessInstanceHook(void, "?onScoreChanged@ServerScoreboard@@UEAAXAEBUScoreboardId@@AEBVObjective@@@Z",
       ScoreboardId* a1, Objective* a2)
{
    IF_LISTENED(PlayerScoreChangedEvent)
    {
        __int64 id = a1->id;

        Player* player = nullptr;
        auto pls = Level::getAllPlayers();
        for (auto& pl : pls)
        {
            if (Global<Scoreboard>->getScoreboardId(*pl).id == id)
            {
                player = pl;
                break;
            }
        }

        if (player)
        {
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

#include <MC/Minecraft.hpp>
////////////// ServerStarted //////////////
TClasslessInstanceHook(void, "?startServerThread@ServerInstance@@QEAAXXZ")
{
    original(this);
    Global<Level> = Global<Minecraft>->getLevel();
    Global<ServerLevel> = (ServerLevel*)Global<Minecraft>->getLevel();
    //Global<ServerNetworkHandler> = Global<Minecraft>->getServerNetworkHandler();
    LL::globalConfig.serverStatus = LL::LLServerStatus::Running;
    Schedule::nextTick([]() {
        IF_LISTENED(ServerStartedEvent)
        {
            ServerStartedEvent ev{};
            ev.call();
        }
        IF_LISTENED_END(ServerStartedEvent)
    });
}

////////////// ServerStopped //////////////
TClasslessInstanceHook(void, "??1DedicatedServer@@UEAA@XZ")
{
    LL::globalConfig.serverStatus = LL::LLServerStatus::Stopping;

    IF_LISTENED(ServerStoppedEvent)
    {
        ServerStoppedEvent ev{};
        ev.call();
    }
    IF_LISTENED_END(ServerStoppedEvent)
    original(this);
}

////////////// RegCmd //////////////
TInstanceHook(void, "?setup@ChangeSettingCommand@@SAXAEAVCommandRegistry@@@Z",
      CommandRegistry, void* a1)
{
    Global<CommandRegistry> = this;
    original(this, a1);
    IF_LISTENED(RegCmdEvent)
    {
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
      std::ostream& _this, const char* str, unsigned size)
{
    IF_LISTENED(ConsoleOutputEvent)
    {
        if (&_this == &std::cout)
        {
            ConsoleOutputEvent ev{};
            ev.mOutput = string(str, size);
            if (!ev.call())
                return _this;
        }
    }
    IF_LISTENED_END(ConsoleOutputEvent)
    return original(_this, str, size);
}


TInstanceHook(void*, "?handle@ComplexInventoryTransaction@@UEBA?AW4InventoryTransactionError@@AEAVPlayer@@_N@Z",
      ComplexInventoryTransaction, Player* a2, int a3)
{
    if (this->type == ComplexInventoryTransaction::Type::NORMAL)
    {
        IF_LISTENED(PlayerDropItemEvent)
        {
            auto& InvTran = this->data;
            auto& action = InvTran.getActions(InventorySource(InventorySourceType::Container, ContainerID::Inventory));
            if (action.size() == 1)
            {
                PlayerDropItemEvent ev{};
                auto& item = a2->getInventory().getItem(action[0].slot);
                ev.mItemStack = const_cast<ItemStack*>(&item);
                ev.mPlayer = a2;
                if (!ev.call())
                {
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
    Container, int a2, char a3, char a4, bool a5)
{
    auto pl = dAccess<Player*,248>(this);
    if (pl->isPlayer())
    {
        IF_LISTENED(PlayerDropItemEvent)
        {
            PlayerDropItemEvent ev{};
            if (a2 >= 0)
            {
                auto& item = this->getItem(a2);
                if (!item.isNull())
                {        
                   ev.mItemStack = const_cast<ItemStack*>(&item);
                   ev.mPlayer = pl;
                }
                if (!ev.call())
                {
                    return;
                }
            }
        }
        IF_LISTENED_END(PlayerDropItemEvent)
    }
    return original(this, a2, a3,a4,a5);
}

TInstanceHook(int, "?startSleepInBed@Player@@UEAA?AW4BedSleepingResult@@AEBVBlockPos@@@Z",
    Player, BlockPos const& blk)
{
    auto bl = Level::getBlockInstance(blk, getDimensionId());
    IF_LISTENED(PlayerBedEnterEvent)
    {
        PlayerBedEnterEvent ev{};
        ev.mPlayer = this;
        ev.mBlockInstance = &bl;
        if (!ev.call())
            return 0;
    }
    IF_LISTENED_END(PlayerBedEnterEvent)
    return original(this, blk);
}
