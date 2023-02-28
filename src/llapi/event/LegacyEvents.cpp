#include "llapi/event/LegacyEvents.h"

#include <functional>
#include <iostream>
#include <string>
#include <tuple>
#include <typeinfo>
#include <vector>

#include "llapi/mc/ActorDamageSource.hpp"
#include "llapi/mc/AnimatePacket.hpp"
#include "llapi/mc/ArmorStand.hpp"
#include "llapi/mc/BaseCommandBlock.hpp"
#include "llapi/mc/Block.hpp"
#include "llapi/mc/BlockActor.hpp"
#include "llapi/mc/BlockSource.hpp"
#include "llapi/mc/BucketItem.hpp"
#include "llapi/mc/BucketableComponent.hpp"
#include "llapi/mc/ChangeDimensionRequest.hpp"
#include "llapi/mc/ChestBlockActor.hpp"
#include "llapi/mc/CommandContext.hpp"
#include "llapi/mc/CommandOrigin.hpp"
#include "llapi/mc/ComplexInventoryTransaction.hpp"
#include "llapi/mc/CompositePackSource.hpp"
#include "llapi/mc/ConnectionRequest.hpp"
#include "llapi/mc/Container.hpp"
#include "llapi/mc/DirectoryPackSource.hpp"
#include "llapi/mc/GameMode.hpp"
#include "llapi/mc/HitResult.hpp"
#include "llapi/mc/InventoryAction.hpp"
#include "llapi/mc/InventorySource.hpp"
#include "llapi/mc/InventoryTransaction.hpp"
#include "llapi/mc/ItemActor.hpp"
#include "llapi/mc/ItemStack.hpp"
#include "llapi/mc/Level.hpp"
#include "llapi/mc/NetworkIdentifier.hpp"
#include "llapi/mc/NpcAction.hpp"
#include "llapi/mc/NpcActionsContainer.hpp"
#include "llapi/mc/NpcComponent.hpp"
#include "llapi/mc/NpcSceneDialogueData.hpp"
#include "llapi/mc/Objective.hpp"
#include "llapi/mc/PackSource.hpp"
#include "llapi/mc/PackSourceFactory.hpp"
#include "llapi/mc/PistonBlockActor.hpp"
#include "llapi/mc/Player.hpp"
#include "llapi/mc/PlayerActionPacket.hpp"
#include "llapi/mc/ResourceLocation.hpp"
#include "llapi/mc/ResourcePackManager.hpp"
#include "llapi/mc/ResourcePackPaths.hpp"
#include "llapi/mc/RespawnPacket.hpp"
#include "llapi/mc/Scoreboard.hpp"
#include "llapi/mc/ScoreboardId.hpp"
#include "llapi/mc/ServerNetworkHandler.hpp"
#include "llapi/mc/ServerPlayer.hpp"
#include "llapi/mc/SignItem.hpp"
#include "llapi/mc/Util.hpp"
#include "llapi/mc/VanillaBlocks.hpp"

#include "llapi/utils/DbgHelper.h"
#include "llapi/utils/StringHelper.h"

#include "llapi/DynamicCommandAPI.h"
#include "llapi/I18nAPI.h"
#include "llapi/LoggerAPI.h"
#include "llapi/RegCommandAPI.h"
#include "llapi/ScheduleAPI.h"

#include "llapi/memory/Hook.h"

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

using namespace ll::event::legacy;
using ll::logger;
using std::vector;

/////////////////////////////// Event Data ///////////////////////////////

int globalListenerId = 0;

template <typename EVENT>
struct ListenerData {
    std::string                 pluginName;
    int                         listenerId = -1;
    bool                        isRef      = false;
    std::function<bool(EVENT)>  callback;
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

inline void OutputError(
    std::string        errorMsg,
    int                errorCode,
    const std::string& errorWhat,
    std::string        eventName,
    std::string        pluginName
) {
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
            OutputError(
                "Uncaught SEH Exception Detected!",
                e.code(),
                TextEncoding::toUTF8(e.what()),
                typeid(EVENT).name(),
                i->pluginName
            );
        } catch (const std::exception& e) {
            OutputError(
                "Uncaught C++ Exception Detected!",
                errno,
                TextEncoding::toUTF8(e.what()),
                typeid(EVENT).name(),
                i->pluginName
            );
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
    } catch (const seh_exception& e) {
        OutputError(
            "Uncaught SEH Exception Detected!",
            e.code(),
            TextEncoding::toUTF8(e.what()),
            typeid(EVENT).name(),
            iNoConst->first
        );
    } catch (const std::exception& e) {
        OutputError(
            "Uncaught Exception Detected! ", -1, TextEncoding::toUTF8(e.what()), typeid(EVENT).name(), iNoConst->first
        );
    } catch (...) {
        OutputError("Uncaught Exception Detected!", -1, "", typeid(EVENT).name(), iNoConst->first);
    }
    ///////////////////////////////////// For compatibility DO NOT UPDATE /////////////////////////////////////
    auto i = ev.listeners.begin();
    try {
        for (; i != ev.listeners.end(); ++i)
            if (!i->second(ev))
                passToBDS = false;
    } catch (const seh_exception& e) {
        OutputError(
            "Uncaught SEH Exception Detected!", e.code(), TextEncoding::toUTF8(e.what()), typeid(EVENT).name(), i->first
        );
    } catch (const std::exception& e) {
        OutputError(
            "Uncaught Exception Detected! ", -1, TextEncoding::toUTF8(e.what()), typeid(EVENT).name(), i->first
        );
    } catch (...) {
        OutputError("Uncaught Exception Detected!", -1, "", typeid(EVENT).name(), i->first);
    }
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
            OutputError(
                "Uncaught SEH Exception Detected!",
                e.code(),
                TextEncoding::toUTF8(e.what()),
                typeid(EVENT).name(),
                i->pluginName
            );
        } catch (const std::exception& e) {
            OutputError(
                "Uncaught C++ Exception Detected!",
                errno,
                TextEncoding::toUTF8(e.what()),
                typeid(EVENT).name(),
                i->pluginName
            );
        } catch (...) {
            OutputError("Uncaught Exception Detected!", -1, "", typeid(EVENT).name(), i->pluginName);
        }
    }
    return passToBDS;
}


/////////////////////////////// Event Declare ///////////////////////////////

#define DECLARE_EVENT_DATA(EVENT)                                                                                      \
    template class ll::event::legacy::EventManager<EVENT>;                                                             \
    /*********************** For Compatibility ***********************/                                                \
    std::list<std::pair<string, std::function<bool(const EVENT&)>>> EventTemplate<EVENT>::listeners;                   \
    std::list<std::pair<string, std::function<bool(EVENT&)>>>       EventTemplate<EVENT>::listenersNoConst;

DECLARE_EVENT_DATA(PlayerUseItemEvent);
DECLARE_EVENT_DATA(PlayerUseItemOnEvent);
DECLARE_EVENT_DATA(PlayerUseBucketEvent);
DECLARE_EVENT_DATA(PlayerDieEvent);
DECLARE_EVENT_DATA(PlayerDropItemEvent);
DECLARE_EVENT_DATA(PlayerEatEvent);
DECLARE_EVENT_DATA(PlayerAteEvent);
DECLARE_EVENT_DATA(PlayerCmdEvent);
DECLARE_EVENT_DATA(PlayerUseFrameBlockEvent);
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
DECLARE_EVENT_DATA(ConsoleCmdEvent);
DECLARE_EVENT_DATA(PlayerScoreChangedEvent);
DECLARE_EVENT_DATA(ConsoleOutputEvent);
DECLARE_EVENT_DATA(PostInitEvent);
DECLARE_EVENT_DATA(PlayerBedEnterEvent);
DECLARE_EVENT_DATA(ScriptPluginManagerEvent);
DECLARE_EVENT_DATA(MobTrySpawnEvent);
DECLARE_EVENT_DATA(MobSpawnedEvent);
DECLARE_EVENT_DATA(FormResponsePacketEvent);
DECLARE_EVENT_DATA(ResourcePackInitEvent);
DECLARE_EVENT_DATA(PlayerOpenInventoryEvent);

#define IF_LISTENED(EVENT)                                                                                             \
    if (EVENT::hasListener()) {                                                                                        \
        try

#define IF_LISTENED_END(EVENT)                                                                                         \
    catch (...) {                                                                                                      \
        logger.error("Event Callback Failed!");                                                                        \
        logger.error("Uncaught Exception Detected!");                                                                  \
        logger.error("In Event: " #EVENT "");                                                                          \
        PrintCurrentStackTraceback();                                                                                  \
    }                                                                                                                  \
    }


/////////////////////////////// Events ///////////////////////////////

bool isQDrop;
bool isDieDrop;

/////////////////// PlayerDropItem ///////////////////
LL_AUTO_TYPED_INSTANCE_HOOK(
    PlayerDropItemEventHook,
    Player,
    HookPriority::Normal,
    "?drop@Player@@UEAA_NAEBVItemStack@@_N@Z",
    bool,
    ItemStack* it,
    bool       a3
) {
    if (isQDrop)
        return origin(it, a3);
    if (isDieDrop)
        return origin(it, a3);
    IF_LISTENED(PlayerDropItemEvent) {
        PlayerDropItemEvent ev{};
        ev.mPlayer    = this;
        ev.mItemStack = it;
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(PlayerDropItemEvent)
    return origin(it, a3);
}

/////////////////// PlayerCmdEvent & ConsoleCmd ///////////////////
LL_AUTO_INSTANCE_HOOK(
    PlayerCmdEventAndConsoleCmdHook,
    HookPriority::Normal,
    "?executeCommand@MinecraftCommands@@QEBA?AUMCRESULT@@AEAVCommandContext@@_N@Z",
    MCRESULT*,
    MCRESULT*       rtn,
    CommandContext* context,
    bool            print
) {
    Player* sp;
    string  cmd;

    try {
        sp  = context->getOrigin().getPlayer();
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
            ev.mPlayer  = sp;
            ev.mResult  = rtn;

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
    return origin(rtn, context, print);
}

/////////////////// PlayerUseFrameBlockEvent  ///////////////////
LL_AUTO_INSTANCE_HOOK(
    PlayerUseFrameBlockEventHook,
    HookPriority::Normal,
    "?use@ItemFrameBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z",
    bool,
    Player*   a2,
    BlockPos* a3
) {
    IF_LISTENED(PlayerUseFrameBlockEvent) {
        PlayerUseFrameBlockEvent ev{};
        ev.mType          = PlayerUseFrameBlockEvent::Type::Use;
        ev.mBlockInstance = Level::getBlockInstance(a3, a2->getDimensionId());
        ev.mPlayer        = a2;
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(PlayerUseFrameBlockEvent)
    return origin(a2, a3);
}

LL_AUTO_INSTANCE_HOOK(
    PlayerUseFrameBlockEventHook2,
    HookPriority::Normal,
    "?attack@ItemFrameBlock@@UEBA_NPEAVPlayer@@AEBVBlockPos@@@Z",
    bool,
    Player*   a2,
    BlockPos* a3
) {
    IF_LISTENED(PlayerUseFrameBlockEvent) {
        PlayerUseFrameBlockEvent ev{};
        ev.mType          = PlayerUseFrameBlockEvent::Type::Attack;
        ev.mBlockInstance = Level::getBlockInstance(a3, a2->getDimensionId());
        ev.mPlayer        = a2;
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(PlayerUseFrameBlockEvent)
    return origin(a2, a3);
}

/////////////////// PlayerDeath ///////////////////
LL_AUTO_TYPED_INSTANCE_HOOK(
    PlayerDeathEventHook,
    ServerPlayer,
    HookPriority::Normal,
    "?die@ServerPlayer@@UEAAXAEBVActorDamageSource@@@Z",
    void*,
    ActorDamageSource* src
) {
    IF_LISTENED(PlayerDieEvent) {
        if (this->isPlayer()) {
            PlayerDieEvent ev{};
            ev.mPlayer       = this;
            ev.mDamageSource = src;
            ev.call();
        }
    }
    IF_LISTENED_END(PlayerDieEvent)
    isDieDrop = true;
    auto out  = origin(src);
    isDieDrop = false;
    return out;
}

/////////////////// PlayerUseItemOn ///////////////////
LL_AUTO_TYPED_INSTANCE_HOOK(
    PlayerUseItemOnEventHook,
    GameMode,
    HookPriority::Normal,
    "?useItemOn@GameMode@@UEAA_NAEAVItemStack@@AEBVBlockPos@@EAEBVVec3@@PEBVBlock@@@Z",
    bool,
    ItemStack&    it,
    BlockPos      bp,
    unsigned char side,
    Vec3*         clickPos,
    void*         a6_block
) {
    IF_LISTENED(PlayerUseItemOnEvent) {
        PlayerUseItemOnEvent ev{};
        ev.mPlayer        = this->getPlayer();
        ev.mBlockInstance = Level::getBlockInstance(bp, ev.mPlayer->getDimensionId());
        ev.mItemStack     = &it;
        ev.mFace          = side;
        ev.mClickPos      = *clickPos;
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(PlayerUseItemOnEvent)
    return origin(it, bp, side, clickPos, a6_block);
}

/////////////////// PlayerUseBucket ///////////////////
// 倒出
LL_AUTO_TYPED_INSTANCE_HOOK(
    PlayerUseBucketEventHook1,
    BucketItem,
    HookPriority::Normal,
    "?_emptyBucket@BucketItem@@AEBA_NAEAVBlockSource@@AEBVBlock@@AEBVBlockPos@@PEAVActor@@AEBVItemStack@@E@Z",
    bool,
    BlockSource*  blockSource,
    Block*        block,
    BlockPos*     blockPos,
    Actor*        actor,
    ItemStack*    itemStack,
    unsigned char face
) {
    IF_LISTENED(PlayerUseBucketEvent) {
        // 当actor为空时，执行实体是发射器
        if (actor) {
            PlayerUseBucketEvent ev{};
            ev.mPlayer        = (Player*)actor;
            ev.mEventType     = PlayerUseBucketEvent::EventType::Place;
            ev.mTargetPos     = blockPos->toVec3();
            ev.mBucket        = itemStack;
            ev.mBlockInstance = BlockInstance::createBlockInstance(block, *blockPos, actor->getDimensionId());
            ev.mFace          = face;
            if (!ev.call())
                return false;
        }
    }
    IF_LISTENED_END(PlayerUseBucketEvent)
    return origin(blockSource, block, blockPos, actor, itemStack, face);
}

// 装水
LL_AUTO_TYPED_INSTANCE_HOOK(
    PlayerUseBucketEventHook2,
    BucketItem,
    HookPriority::Normal,
    "?_takeLiquid@BucketItem@@AEBA_NAEAVItemStack@@AEAVActor@@AEBVBlockPos@@@Z",
    bool,
    ItemStack* itemStack,
    Actor*     actor,
    BlockPos*  blockPos
) {
    IF_LISTENED(PlayerUseBucketEvent) {
        PlayerUseBucketEvent ev{};
        ev.mPlayer        = (Player*)actor;
        ev.mEventType     = PlayerUseBucketEvent::EventType::Take;
        ev.mTargetPos     = blockPos->toVec3();
        ev.mBucket        = itemStack;
        ev.mBlockInstance = Level::getBlockInstance(blockPos, Level::getBlockSource(actor));
        ev.mFace          = -1;
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(PlayerUseBucketEvent)
    return origin(itemStack, actor, blockPos);
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
    Actor*  owner;
};

// 也许这个结构体可以用偏移获取替代？
LL_AUTO_STATIC_HOOK(
    PlayerUseBucketEventHook3,
    HookPriority::Normal,
    "<lambda_54df3fc3e331d6aa3755551a14a31db0>::operator()",
    void,
    BucketPlayerAndActor* a1
) {
    IF_LISTENED(PlayerUseBucketEvent) {
        BucketPlayerAndActor mBucketPlayerAndActor = *a1;
        if (mBucketPlayerAndActor.owner->getTypeName() == "minecraft:cow" ||
            mBucketPlayerAndActor.owner->getTypeName() == "minecraft:mooshroom") {
            PlayerUseBucketEvent ev{};
            ev.mPlayer      = mBucketPlayerAndActor.player;
            ev.mEventType   = PlayerUseBucketEvent::EventType::Take;
            ev.mTargetPos   = mBucketPlayerAndActor.owner->getPosition();
            ev.mBucket      = const_cast<ItemStack*>(&ev.mPlayer->getSelectedItem());
            ev.mTargetActor = mBucketPlayerAndActor.owner;
            ev.mFace        = -1;
            if (!ev.call())
                return;
        }
    }
    IF_LISTENED_END(PlayerUseBucketEvent)
    return origin(a1);
}

// 装细雪
LL_AUTO_TYPED_INSTANCE_HOOK(
    PlayerUseBucketEventHook4,
    BucketItem,
    HookPriority::Normal,
    "?_takePowderSnow@BucketItem@@AEBA_NAEAVItemStack@@AEAVActor@@AEBVBlockPos@@@Z",
    bool,
    ItemStack* itemStack,
    Actor*     actor,
    BlockPos*  blockPos
) {
    IF_LISTENED(PlayerUseBucketEvent) {
        PlayerUseBucketEvent ev{};
        ev.mPlayer        = (Player*)actor;
        ev.mEventType     = PlayerUseBucketEvent::EventType::Take;
        ev.mTargetPos     = blockPos->toVec3();
        ev.mBucket        = itemStack;
        ev.mBlockInstance = Level::getBlockInstance(blockPos, Level::getBlockSource(actor));
        ev.mFace          = -1;
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(PlayerUseBucketEvent)
    return origin(itemStack, actor, blockPos);
}

// 拿桶与实体交互（装鱼），目前的办法是hook ItemStack::useOn来拦截
// 这个交互实现在BucketableComponent::implInteraction
namespace {
Player*    mBucketPlayer; // 传玩家指针
std::mutex mBucketPlayerLuck;
} // namespace
LL_AUTO_STATIC_HOOK(
    PlayerUseBucketEventHook5,
    HookPriority::Normal,
    "?implInteraction@BucketableComponent@@SAXAEAVActor@@AEAVPlayer@@@Z",
    void,
    Actor*  actor,
    Player* player
) {
    std::lock_guard<std::mutex> autoLock(mBucketPlayerLuck);
    mBucketPlayer = player;
    return origin(actor, player);
}

LL_AUTO_TYPED_INSTANCE_HOOK(
    PlayerUseBucketEventHook6,
    ItemStack,
    HookPriority::Normal,
    "?useOn@ItemStack@@QEAA_NAEAVActor@@HHHEAEBVVec3@@@Z",
    bool,
    Actor*        actor,
    int           x,
    int           y,
    int           z,
    unsigned char face,
    Vec3          clickPos
) {
    IF_LISTENED(PlayerUseBucketEvent) {
        if (actor->getTypeName() != "minecraft:player") {
            PlayerUseBucketEvent ev{};
            ev.mPlayer      = mBucketPlayer;
            ev.mEventType   = PlayerUseBucketEvent::EventType::Take;
            ev.mTargetPos   = clickPos;
            ev.mBucket      = this;
            ev.mTargetActor = actor;
            ev.mFace        = face;
            if (!ev.call())
                return false;
        }
    }
    IF_LISTENED_END(PlayerUseBucketEvent)
    return origin(actor, x, y, z, face, clickPos);
}

/////////////////// MobHurt ///////////////////
LL_AUTO_TYPED_INSTANCE_HOOK(
    MobHurtEventHook1,
    Mob,
    HookPriority::Normal,
    "?_hurt@Mob@@MEAA_NAEBVActorDamageSource@@M_N1@Z",
    bool,
    ActorDamageSource& src,
    float              damage,
    bool               unk1_1,
    bool               unk2_0
) {
    IF_LISTENED(MobHurtEvent) {
        if (this) {
            MobHurtEvent ev{};
            ev.mMob          = this;
            ev.mDamageSource = &src;
            ev.mDamage       = damage;
            if (!ev.call())
                return false;

            damage = ev.mDamage;
        }
    }
    IF_LISTENED_END(MobHurtEvent)
    return origin(src, damage, unk1_1, unk2_0);
}

LL_AUTO_TYPED_INSTANCE_HOOK(
    MobHurtEventHook2,
    Mob,
    HookPriority::Normal,
    "?getDamageAfterResistanceEffect@Mob@@UEBAMAEBVActorDamageSource@@M@Z",
    float,
    ActorDamageSource* src,
    float              damage
) {
    if (src->getCause() == ActorDamageCause::Magic) {
        IF_LISTENED(MobHurtEvent) {
            MobHurtEvent ev{};
            ev.mMob          = this;
            ev.mDamageSource = src;
            ev.mDamage       = damage;
            if (!ev.call())
                return 0;
            damage = ev.mDamage;
        }
        IF_LISTENED_END(MobHurtEvent)
    }
    return origin(src, damage);
}

//////////////// PlayerUseItem & PlayerEat ////////////////
#include "llapi/mc/ComponentItem.hpp"
LL_AUTO_TYPED_INSTANCE_HOOK(
    PlayerUseItemEventAndPlayerEatEventHook,
    GameMode,
    HookPriority::Normal,
    "?baseUseItem@GameMode@@QEAA_NAEAVItemStack@@@Z",
    bool,
    ItemStack& it
) {
    auto pl = this->getPlayer();
    IF_LISTENED(PlayerUseItemEvent) {
        PlayerUseItemEvent ev{};
        ev.mPlayer    = pl;
        ev.mItemStack = &it;
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(PlayerUseItemEvent)
    IF_LISTENED(PlayerEatEvent) {
        if (it.getItem()->isFood() && (pl->isHungry() || pl->forceAllowEating())) {
            PlayerEatEvent ev{};
            ev.mPlayer   = pl;
            ev.mFoodItem = &it;
            if (!ev.call()) {
                pl->refreshAttribute(Player::HUNGER);
                return false;
            }
        }
    }
    IF_LISTENED_END(PlayerEatEvent)
    return origin(it);
}

LL_AUTO_TYPED_INSTANCE_HOOK(
    PlayerEatEventHook1,
    BucketItem,
    HookPriority::Normal,
    "?use@BucketItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z",
    ItemStack*,
    ItemStack* a1,
    Player*    a2
) {
    if (this->getFullItemName() == "minecraft:milk_bucket") {
        IF_LISTENED(PlayerEatEvent) {
            PlayerEatEvent ev{};
            ev.mPlayer   = a2;
            ev.mFoodItem = a1;
            if (!ev.call()) {
                return a1;
            }
        }
        IF_LISTENED_END(PlayerEatEvent)
    }
    return origin(a1, a2);
}

LL_AUTO_INSTANCE_HOOK(
    PlayerEatEventHook2,
    HookPriority::Normal,
    "?use@PotionItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z",
    ItemStack*,
    ItemStack* a1,
    Player*    a2
) {
    IF_LISTENED(PlayerEatEvent) {
        PlayerEatEvent ev{};
        ev.mPlayer   = a2;
        ev.mFoodItem = a1;
        if (!ev.call()) {
            return a1;
        }
    }
    IF_LISTENED_END(PlayerEatEvent)
    return origin(a1, a2);
}

/////////////////// PlayerAte ////////////////////
#include "llapi/mc/FoodItemComponentLegacy.hpp"
LL_AUTO_TYPED_INSTANCE_HOOK(
    PlayerAteEventHook,
    FoodItemComponentLegacy,
    HookPriority::Normal,
    "?useTimeDepleted@FoodItemComponentLegacy@@UEAAPEBVItem@@AEAVItemStack@@AEAVPlayer@@AEAVLevel@@@Z",
    Item*,
    ItemStack* a,
    Player*    b,
    Level*     c
) {
    IF_LISTENED(PlayerAteEvent) {
        PlayerAteEvent ev{};
        ev.mPlayer   = b;
        ev.mFoodItem = a;
        ev.call();
    }
    IF_LISTENED_END(PlayerAteEvent)
    return origin(a, b, c);
}

/////////////////// MobDie ///////////////////
LL_AUTO_TYPED_INSTANCE_HOOK(
    MobDieEventHook,
    Mob,
    HookPriority::Normal,
    "?die@Mob@@UEAAXAEBVActorDamageSource@@@Z",
    bool,
    ActorDamageSource* ads
) {
    IF_LISTENED(MobDieEvent) {
        if (this) {
            MobDieEvent ev{};
            ev.mMob          = this;
            ev.mDamageSource = ads;
            if (!ev.call())
                return false;
        }
    }
    IF_LISTENED_END(MobDieEvent)
    return origin(ads);
}

///////////////////  Entity & Block Explosion ///////////////////
LL_AUTO_INSTANCE_HOOK(EntityAndBlockExplosionEventHook, HookPriority::Normal, "?explode@Explosion@@QEAAXXZ", void, ) {
    try {
        auto acId          = *(ActorUniqueID*)((QWORD*)this + 11);
        auto actor         = Level::getEntity(acId);
        auto pos           = *(Vec3*)(QWORD*)this;
        auto radius        = *((float*)this + 3);
        auto bs            = (BlockSource*)*((QWORD*)this + 12);
        auto maxResistance = *((float*)this + 26);
        auto genFire       = (bool)*((BYTE*)this + 80);
        auto canBreaking   = (bool)*((BYTE*)this + 81);

        IF_LISTENED(EntityExplodeEvent) {
            if (actor) {
                EntityExplodeEvent ev{};
                ev.mActor         = actor;
                ev.mBreaking      = canBreaking;
                ev.mFire          = genFire;
                ev.mMaxResistance = maxResistance;
                ev.mPos           = pos;
                ev.mRadius        = radius;
                ev.mDimension     = bs;
                if (!ev.call())
                    return;

                *((float*)this + 3)  = ev.mRadius;
                *((float*)this + 26) = ev.mMaxResistance;
                *((BYTE*)this + 80)  = ev.mFire;
                *((BYTE*)this + 81)  = ev.mBreaking;
            }
        }
        IF_LISTENED_END(EntityExplodeEvent)

        // IF_LISTENED(BlockExplodeEvent) {
        //     if (!actor) {
        //         BlockPos          bp = pos.toBlockPos();
        //         BlockExplodeEvent ev{};
        //         ev.mBlockInstance = Level::getBlockInstance(bp, bs);
        //         ev.mBreaking      = canBreaking;
        //         ev.mFire          = genFire;
        //         ev.mMaxResistance = maxResistance;
        //         ev.mRadius        = radius;
        //         if (!ev.call())
        //             return;

        //         *((float*)this + 3)  = ev.mRadius;
        //         *((float*)this + 26) = ev.mMaxResistance;
        //         *((BYTE*)this + 80)  = ev.mFire;
        //         *((BYTE*)this + 81)  = ev.mBreaking;
        //     }
        // }
        // IF_LISTENED_END(BlockExplodeEvent)
    } catch (...) {
        logger.error("Event Callback Failed!");
        logger.error("Uncaught Exception Detected!");
        logger.error("In Event: Entity or Block Explosion");
    }
    origin();
}

////////////// ProjectileHitEntity //////////////
LL_AUTO_INSTANCE_HOOK(
    ProjectileHitEntityHook,
    ll::memory::HookPriority::Normal,
    "?onHit@ProjectileComponent@@QEAAXAEAVActor@@AEBVHitResult@@@Z",
    void,
    Actor*     item,
    HitResult* res
) {
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
    return origin(item, res);
}


////////////// WitherBossDestroy //////////////
LL_AUTO_TYPED_INSTANCE_HOOK(
    WitherBossDestroyEventHook,
    Actor,
    ll::memory::HookPriority::Normal,
    "?_destroyBlocks@WitherBoss@@AEAAXAEAVLevel@@AEBVAABB@@AEAVBlockSource@@HW4WitherAttackType@1@@Z",
    void,
    Level*       a2,
    AABB*        aabb,
    BlockSource* a4,
    int          a5,
    unsigned int a6
) {
    IF_LISTENED(WitherBossDestroyEvent) {
        WitherBossDestroyEvent ev{};
        ev.mWitherBoss   = (WitherBoss*)this;
        ev.mDestroyRange = *aabb;
        if (!ev.call())
            return;

        *aabb = ev.mDestroyRange;
    }
    IF_LISTENED_END(WitherBossDestroyEvent)
    origin(a2, aabb, a4, a5, a6);
}

////////////// EnderDragonDestroy //////////////
#include "llapi/mc/BlockLegacy.hpp"
#include "llapi/mc/EnderDragon.hpp"
LL_AUTO_TYPED_INSTANCE_HOOK(
    EnderDragonDestroyEventHook,
    EnderDragon,
    ll::memory::HookPriority::Normal,
    "?_isDragonImmuneBlock@EnderDragon@@CA_NAEBVBlockLegacy@@@Z",
    bool,
    BlockLegacy* bl
) {
    IF_LISTENED(EnderDragonDestroyEvent) {
        EnderDragonDestroyEvent ev{};
        ev.mEnderDragon = (EnderDragon*)this;
        ev.mBlockLegacy = bl;
        if (!ev.call()) {
            return true;
        }
    }
    IF_LISTENED_END(EnderDragonDestroyEvent)
    return origin(bl);
}

////////////// EntityRide //////////////
LL_AUTO_TYPED_INSTANCE_HOOK(
    EntityRideEventHook,
    Actor,
    ll::memory::HookPriority::Normal,
    "?canAddPassenger@Actor@@UEBA_NAEAV1@@Z",
    bool,
    Actor* a2
) {
    auto rtn = origin(a2);
    if (!rtn)
        return false;
    IF_LISTENED(EntityRideEvent) {
        EntityRideEvent ev{};
        ev.mRider   = a2;
        ev.mVehicle = this;
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(EntityRideEvent)
    return rtn;
}


////////////// EntityStepOnPressurePlate //////////////
LL_AUTO_INSTANCE_HOOK(
    EntityStepOnPressurePlateEventHook,
    ll::memory::HookPriority::Normal,
    "?shouldTriggerEntityInside@BasePressurePlateBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z",
    bool,
    BlockSource* a2,
    BlockPos*    a3,
    Actor*       a4
) {
    IF_LISTENED(EntityStepOnPressurePlateEvent) {
        EntityStepOnPressurePlateEvent ev{};
        ev.mActor         = a4;
        ev.mBlockInstance = Level::getBlockInstance(a3, a4->getDimensionId());
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(EntityStepOnPressurePlateEvent)
    return origin(a2, a3, a4);
}

////////////// ProjectileSpawn //////////////
LL_AUTO_INSTANCE_HOOK(
    ProjectileSpawnEventHook1,
    ll::memory::HookPriority::Normal,
    "?spawnProjectile@Spawner@@QEAAPEAVActor@@AEAVBlockSource@@AEBUActorDefinitionIdentifier@@PEAV2@AEBVVec3@@3@Z",
    Actor*,
    BlockSource*               a2,
    ActorDefinitionIdentifier* a3,
    Actor*                     a4,
    Vec3*                      a5,
    Vec3*                      a6
) {
    string name = a3->getCanonicalName();
    if (name != "minecraft:thrown_trident") {
        IF_LISTENED(ProjectileSpawnEvent) {
            ProjectileSpawnEvent ev{};
            ev.mShooter    = a4;
            ev.mIdentifier = a3;
            ev.mType       = name;
            if (!ev.call())
                return nullptr;
        }
        IF_LISTENED_END(ProjectileSpawnEvent)
    }
    auto projectile = origin(a2, a3, a4, a5, a6);
    IF_LISTENED(ProjectileCreatedEvent) {
        ProjectileCreatedEvent ev{};
        ev.mShooter    = a4;
        ev.mProjectile = projectile;
        ev.call();
    }
    IF_LISTENED_END(ProjectileCreatedEvent)
    return projectile;
}

#include "llapi/mc/ActorDefinitionIdentifier.hpp"
#include "llapi/mc/CrossbowItem.hpp"
static_assert(sizeof(ActorDefinitionIdentifier) == 176);
LL_AUTO_TYPED_INSTANCE_HOOK(
    ProjectileSpawnEventHook2,
    CrossbowItem,
    ll::memory::HookPriority::Normal,
    "?_shootFirework@CrossbowItem@@AEBAXAEBVItemInstance@@AEAVPlayer@@@Z",
    void,
    void*   a1,
    Player* a2
) {
    IF_LISTENED(ProjectileSpawnEvent) {
        ActorDefinitionIdentifier identifier("minecraft:fireworks_rocket");
        ProjectileSpawnEvent      ev{};
        ev.mShooter    = a2;
        ev.mIdentifier = &identifier;
        ev.mType       = this->getFullItemName();

        if (!ev.call())
            return;
    }
    IF_LISTENED_END(ProjectileSpawnEvent)
    origin(a1, a2);
}

LL_AUTO_INSTANCE_HOOK(
    ProjectileSpawnEventHook3,
    ll::memory::HookPriority::Normal,
    "?releaseUsing@TridentItem@@UEBAXAEAVItemStack@@PEAVPlayer@@H@Z",
    void,
    ItemStack* a2,
    Player*    a3,
    int        a4
) {
    IF_LISTENED(ProjectileSpawnEvent) {
        ActorDefinitionIdentifier identifier("minecraft:thrown_trident");
        ProjectileSpawnEvent      ev{};
        ev.mShooter    = a3;
        ev.mIdentifier = &identifier;
        ev.mType       = a2->getTypeName();

        if (!ev.call())
            return;
    }
    IF_LISTENED_END(ProjectileSpawnEvent)
    return origin(a2, a3, a4);
}

#include "llapi/mc/EntityContext.hpp"
#include "llapi/mc/WeakEntityRef.hpp"

////////////// NpcCmd //////////////
LL_AUTO_TYPED_INSTANCE_HOOK(
    NpcCmdEventHook,
    NpcComponent,
    ll::memory::HookPriority::Normal,
    "?executeCommandAction@NpcComponent@@QEAAXAEAVActor@@AEAVPlayer@@HAEBV?$basic_string@DU?$char_traits@D@std@@V?$"
    "allocator@D@2@@std@@@Z",
    void,
    Actor*  ac,
    Player* pl,
    int     a4,
    string& a5
) {
    IF_LISTENED(NpcCmdEvent) {
        // IDA NpcComponent::executeCommandAction
        // NpcSceneDialogueData data(*this, *ac, a5);

        auto                 ec = (EntityContext*)((char*)ac + 8);
        NpcSceneDialogueData data(WeakEntityRef(ec->getWeakRef()), a5);

        auto container = data.getActionsContainer();
        auto actionAt  = container->getActionAt(a4);
        if (actionAt && dAccess<char>(actionAt, 8) == (char)1) {

            NpcCmdEvent ev{};
            ev.mPlayer  = pl;
            ev.mNpc     = ac;
            ev.mCommand = actionAt->getText();
            if (!ev.call())
                return;
        }
    }
    IF_LISTENED_END(NpcCmdEvent)
    return origin(ac, pl, a4, a5);
}

//////////// ArmorStandChange //////////////
LL_AUTO_TYPED_INSTANCE_HOOK(
    ArmorStandChangeEventHook,
    ArmorStand,
    ll::memory::HookPriority::Normal,
    "?_trySwapItem@ArmorStand@@AEAA_NAEAVPlayer@@W4EquipmentSlot@@@Z",
    bool,
    Player* a2,
    int     a3
) {
    IF_LISTENED(ArmorStandChangeEvent) {
        ArmorStandChangeEvent ev{};
        ev.mArmorStand = this;
        ev.mPlayer     = a2;
        ev.mSlot       = a3;
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(ArmorStandChangeEvent)
    return origin(a2, a3);
}

////////////////// EntityTransform //////////////////
LL_AUTO_INSTANCE_HOOK(
    EntityTransformEventHook,
    ll::memory::HookPriority::Normal,
    "?maintainOldData@TransformationComponent@@QEAAXAEAVActor@@0AEBUTransformationDescription@@AEBUActorUniqueID@@"
    "AEBVLevel@@@Z",
    void,
    Actor*         beforeEntity,
    Actor*         afterEntity,
    void*          a4,
    ActorUniqueID* aid,
    Level*         level
) {
    IF_LISTENED(EntityTransformEvent) {
        EntityTransformEvent ev{};
        ActorUniqueID        actorUniqueID = beforeEntity->getActorUniqueId();
        ev.mBeforeEntityUniqueId           = &actorUniqueID;
        ev.mAfterEntity                    = afterEntity;
        ev.call();
    }
    IF_LISTENED_END(EntityTransformEvent)
    origin(beforeEntity, afterEntity, a4, aid, level);
}

////////////// PlayerScoreChangedEvent  //////////////
LL_AUTO_INSTANCE_HOOK(
    PlayerScoreChangedEventHook,
    ll::memory::HookPriority::Normal,
    "?onScoreChanged@ServerScoreboard@@UEAAXAEBUScoreboardId@@AEBVObjective@@@Z",
    void,
    ScoreboardId* a1,
    Objective*    a2
) {
    IF_LISTENED(PlayerScoreChangedEvent) {
        int64_t id = a1->id;

        Player* player = nullptr;
        auto    pls    = Level::getAllPlayers();
        for (auto& pl : pls) {
            if (Global<Scoreboard>->getScoreboardId(*pl).id == id) {
                player = pl;
                break;
            }
        }

        if (player) {
            PlayerScoreChangedEvent ev{};
            ev.mPlayer       = player;
            ev.mScore        = a2->getPlayerScore(*a1).getCount();
            ev.mScoreboardId = a1;
            ev.mObjective    = a2;
            ev.call();
        }
    }
    IF_LISTENED_END(PlayerScoreChangedEvent)

    return origin(a1, a2);
}

////////////// ConsoleOutput //////////////
LL_AUTO_STATIC_HOOK(
    ConsoleOutputEventHook,
    ll::memory::HookPriority::Normal,
    "??$_Insert_string@DU?$char_traits@D@std@@_K@std@@YAAEAV?$basic_ostream@DU?$char_traits@D@std@@@0@AEAV10@QEBD_K@Z",
    std::ostream&,
    std::ostream& _this,
    const char*   str,
    unsigned      size
) {
    IF_LISTENED(ConsoleOutputEvent) {
        if (&_this == &std::cout) {
            ConsoleOutputEvent ev{};
            ev.mOutput = string(str, size);
            if (!ev.call())
                return _this;
        }
    }
    IF_LISTENED_END(ConsoleOutputEvent)
    return origin(_this, str, size);
}

////////////// PlayerDropItem //////////////
LL_AUTO_TYPED_INSTANCE_HOOK(
    PlayerDropItemEventHook2,
    ComplexInventoryTransaction,
    ll::memory::HookPriority::Normal,
    "?handle@ComplexInventoryTransaction@@UEBA?AW4InventoryTransactionError@@AEAVPlayer@@_N@Z",
    void*,
    Player* a2,
    int     a3
) {
    if (this->type == ComplexInventoryTransaction::Type::NORMAL) {
        IF_LISTENED(PlayerDropItemEvent) {
            auto& InvTrans = this->data;
            auto& action = InvTrans.getActions(InventorySource(InventorySourceType::Container, ContainerID::Inventory));
            if (action.size() == 1) {
                PlayerDropItemEvent ev{};
                auto&               item = a2->getInventory().getItem(action[0].slot);
                ev.mItemStack            = const_cast<ItemStack*>(&item);
                ev.mPlayer               = a2;
                if (!ev.call()) {
                    a2->sendInventory(1);
                    return nullptr;
                }
                isQDrop  = true;
                auto out = origin(a2, a3);
                isQDrop  = false;
                return out;
            }
        }
        IF_LISTENED_END(PlayerDropItemEvent)
    }
    return origin(a2, a3);
}

LL_AUTO_TYPED_INSTANCE_HOOK(
    PlayerDropItemEventHook3,
    Container,
    ll::memory::HookPriority::Normal,
    "?dropSlot@Inventory@@QEAAXH_N00@Z",
    void,
    int  a2,
    char a3,
    char a4,
    bool a5
) {
    auto pl = dAccess<Player*, 248>(this);
    if (pl->isPlayer()) {
        IF_LISTENED(PlayerDropItemEvent) {
            PlayerDropItemEvent ev{};
            if (a2 >= 0) {
                auto& item = this->getItem(a2);
                if (!item.isNull()) {
                    ev.mItemStack = const_cast<ItemStack*>(&item);
                    ev.mPlayer    = pl;
                }
                if (!ev.call()) {
                    return;
                }
            }
        }
        IF_LISTENED_END(PlayerDropItemEvent)
    }
    return origin(a2, a3, a4, a5);
}

////////////// PlayerBedEnter //////////////
LL_AUTO_TYPED_INSTANCE_HOOK(
    PlayerBedEnterEventHook,
    Player,
    ll::memory::HookPriority::Normal,
    "?startSleepInBed@Player@@UEAA?AW4BedSleepingResult@@AEBVBlockPos@@@Z",
    int,
    BlockPos const& blk
) {
    auto bl = Level::getBlockInstance(blk, getDimensionId());
    IF_LISTENED(PlayerBedEnterEvent) {
        PlayerBedEnterEvent ev{};
        ev.mPlayer        = this;
        ev.mBlockInstance = &bl;
        if (!ev.call())
            return 0;
    }
    IF_LISTENED_END(PlayerBedEnterEvent)
    return origin(blk);
}

#include "llapi/mc/Spawner.hpp"

////////////// MobSpawn //////////////
LL_AUTO_TYPED_INSTANCE_HOOK(
    MobSpawn1,
    Spawner,
    ll::memory::HookPriority::Normal,
    "?spawnMob@Spawner@@QEAAPEAVMob@@AEAVBlockSource@@AEBUActorDefinitionIdentifier@@PEAVActor@@AEBVVec3@@_N44@Z",
    Mob*,
    BlockSource*               a2,
    ActorDefinitionIdentifier* a3,
    Actor*                     a4,
    Vec3&                      a5,
    bool                       a6,
    bool                       a7,
    bool                       a8
) {
    IF_LISTENED(MobTrySpawnEvent) {
        MobTrySpawnEvent ev{};
        ev.mTypeName    = a3->getCanonicalName();
        ev.mPos         = a5;
        ev.mDimensionId = a2->getDimensionId();
        if (!ev.call()) {
            return nullptr;
        }
    }
    IF_LISTENED_END(MobTrySpawnEvent);
    auto en = origin(a2, a3, a4, a5, a6, a7, a8);
    if (en == nullptr) {
        return en;
    } else {
        IF_LISTENED(MobSpawnedEvent) {
            MobSpawnedEvent ev{};
            ev.mMob         = en;
            ev.mPos         = a5;
            ev.mDimensionId = a2->getDimensionId();
            ev.call();
        }
        IF_LISTENED_END(MobSpawnedEvent)
        return en;
    }
}

LL_AUTO_INSTANCE_HOOK(
    MobSpawn2,
    ll::memory::HookPriority::Normal,
    "?_findValidSpawnPosUnder@WanderingTraderScheduler@@AEBA?AV?$optional@VBlockPos@@@std@@AEBVBlockPos@@"
    "AEAVBlockSource@@@Z",
    std::optional<class BlockPos>,
    BlockPos*    pos,
    BlockSource* bs
) {
    auto spawn = origin(pos, bs);
    if (spawn) {
        IF_LISTENED(MobTrySpawnEvent) {
            MobTrySpawnEvent ev{};
            ev.mTypeName    = "minecraft:wandering_trader";
            ev.mPos         = spawn->toVec3();
            ev.mDimensionId = bs->getDimensionId();
            if (!ev.call())
                return std::nullopt;
        }
        IF_LISTENED_END(MobTrySpawnEvent)
    }
    return spawn;
}

LL_AUTO_INSTANCE_HOOK(
    MobSpawn3,
    ll::memory::HookPriority::Normal,
    "?_setRespawnStage@EndDragonFight@@AEAAXW4RespawnAnimation@@@Z",
    void,
    int a1
) {
    IF_LISTENED(MobTrySpawnEvent) {
        MobTrySpawnEvent ev{};
        ev.mTypeName    = "minecraft:ender_dragon";
        ev.mPos         = Vec3::ZERO;
        ev.mDimensionId = 2;
        if (!ev.call())
            return;
    }
    IF_LISTENED_END(MobTrySpawnEvent);
    origin(a1);
    auto uid = dAccess<ActorUniqueID>(this, 64);
    auto en  = Level::getEntity(uid);
    if (en) {
        IF_LISTENED(MobSpawnedEvent) {
            MobSpawnedEvent ev{};
            ev.mMob         = (Mob*)en;
            ev.mPos         = en->getPos();
            ev.mDimensionId = 2;
            ev.call();
        }
        IF_LISTENED_END(MobSpawnedEvent)
    }
}

#include "llapi/impl/FormPacketHelper.h"
#include "llapi/mc/Json.hpp"
////////////// FormResponsePacket //////////////

LL_AUTO_INSTANCE_HOOK(
    FormResponsePacketEventHook,
    ll::memory::HookPriority::Normal,
    "?handle@?$PacketHandlerDispatcherInstance@VModalFormResponsePacket@@$0A@@@UEBAXAEBVNetworkIdentifier@@"
    "AEAVNetEventCallback@@AEAV?$shared_ptr@VPacket@@@std@@@Z",
    void,
    NetworkIdentifier*    id,
    ServerNetworkHandler* handler,
    void*                 pPacket
) {
    Packet*       packet = *(Packet**)pPacket;
    ServerPlayer* sp     = handler->getServerPlayer(*id, 0);
    if (sp) {
        string data;
        auto   formId = dAccess<int>(packet, 48);

        if (!dAccess<bool>(packet, 81)) {
            if (dAccess<bool>(packet, 72)) {
                auto json = dAccess<Json::Value>(packet, 56);
                data      = json.toStyledString();
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
            ev.mFormId       = formId;
            ev.mJsonData     = data;

            if (!ev.call())
                return;
        }
        IF_LISTENED_END(FormResponsePacketEvent)
        HandleFormPacket(sp, formId, data);
    }
    origin(id, handler, pPacket);
}

LL_AUTO_STATIC_HOOK(
    ResourcePackInitEventHook,
    ll::memory::HookPriority::Normal,
    "?_initialize@ResourcePackRepository@@AEAAXXZ",
    void,
    ResourcePackRepository* self
) {
    Global<ResourcePackRepository> = self;
    IF_LISTENED(ResourcePackInitEvent) {
        ResourcePackInitEvent ev{};
        ev.mRepo = self;
        ev.call();
    }
    IF_LISTENED_END(ResourcePackInitEvent)
    origin(self);
}

LL_AUTO_TYPED_INSTANCE_HOOK(
    PlayerOpenInventoryEventHook,
    ServerPlayer,
    ll::memory::HookPriority::Normal,
    "?openInventory@ServerPlayer@@UEAAXXZ",
    void,
) {
    IF_LISTENED(PlayerOpenInventoryEvent) {
        PlayerOpenInventoryEvent ev{};
        ev.mServerPlayer = this;
        ev.mPlayer       = (Player*)this;
        if (!ev.call())
            return;
    }
    IF_LISTENED_END(PlayerOpenInventoryEvent)
    origin();
}
