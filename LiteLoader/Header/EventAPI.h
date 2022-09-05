/**
 * @file EventAPI.h
 *
 * \~english @brief This file contains declarations of the event system.
 * \~chinese @brief 本文件包含事件系统相关定义。
 *
 */

#pragma once

#include "Global.h"
#include "LoggerAPI.h"
#include "MC/BlockInstance.hpp"
#include "MC/MCRESULT.hpp"
#include <functional>
#include <iterator>
#include <list>
#include <string>
#include <unordered_map>
#include <LLAPI.h>
#include <Utils/WinHelper.h>

class Actor;
class ServerPlayer;
class Player;
class Block;
class Mob;
struct ActorDefinitionIdentifier;
class ItemStack;
class ActorDamageSource;
class Certificate;
class CommandRegistry;
class MobEffectInstance;
class Container;
class WitherBoss;
class ArmorStand;
class Objective;
struct ScoreboardId;

/**
 * \~english @brief The event system, making it easier to listen to game events.
 * \~chinese @brief 事件系统，用于监听游戏事件。
 *
 * \~english @par Example:
 * \~chinese @par 示例代码：
 * @code
 * // Under most circumstances, use normal subscription for better performance and security.
 * Event::PlayerJoinEvent::subscribe([](const Event::PlayerJoinEvent& ev) {
 *   ev.mPlayer->sendText("Hello, world!");
 *   return true;
 * });
 *
 * // If you need to adjust the parameters, use referral subscription.
 * Event::PlayerChatEvent::subscribe_ref([](Event::PlayerChatEvent& ev) {
 *   ev.mMessage = "[Plugin Modified] " + ev.mMessage;
 *   return true;
 * });
 *
 * // You can also keep the listener instance, in order to cancel listening when necessary.
 * // Some events can be suppressed. For these events, you can return `false` to prevent them from
 * // taking effect.
 * auto listener = Event::PlayerPickupItemEvent::subscribe([](const Event::PlayerPickupItemEvent& ev) {
 *   if(ev.mPlayer->getName() == "Jack") {
 *     return false;
 *   } else {
 *     return true;
 *   }
 * });
 *
 * // Other code here
 *
 * // Remove this event listener
 * listener.remove();
 * @endcode
 */
namespace Event {

constexpr bool Ok = true;
constexpr bool Cancel = false;

template <typename EVENT>
class EventManager {
public:
    LIAPI static int addEventListener(std::string name, std::function<bool(EVENT)> callback);
    LIAPI static int addEventListenerRef(std::string name, std::function<bool(EVENT&)> callback);
    LIAPI static bool removeEventListener(int id);
    LIAPI static bool hasListener();
    LIAPI static bool call(EVENT& ev);
    LIAPI static bool callToPlugin(std::string pluginName, EVENT& ev);
};

/**
 * \~english @brief The event listener
 * \~chinese @brief 事件监听器
 *
 * \~english @tparam EVENT The event listening to
 * \~chinese @tparam EVENT 被监听的事件
 */
template <typename EVENT>
class EventListener {
private:
    int listenerId;
    bool deleted = false;

public:
    EventListener(int id)
    : listenerId(id) {
    }

    /**
     * \~english @brief Removes the event listener.
     * \~chinese @brief 删除事件监听。
     *
     */
    void remove() {
        if (!deleted) {
            deleted = true;
            EventManager<EVENT>::removeEventListener(listenerId);
        }
    }
};

template <typename EVENT>
class EventTemplate {
public:
    /**
     * \~english @brief Subscribes to an event with read-only permission.
     * \~chinese @brief 以只读方式监听事件
     *
     * \~english @param callback The callback function, which cannot modify the event object
     * \~english @return The event listener instance
     * \~chinese @param callback 回调函数（不能修改事件对象）
     * \~chinese @return 事件监听器实例
     *
     * \~english @par We recommend you choose this method instead of `subscribe_ref()` method
     */
    static EventListener<EVENT> subscribe(std::function<bool(EVENT)> callback) {
        auto plugin = LL::getPlugin(GetCurrentModule());
        return EventListener<EVENT>(EventManager<EVENT>::addEventListener(plugin ? plugin->name : "", callback));
    }

    /**
     * \~english @brief Subscribes to an event with read-write permission.
     * \~chinese @brief 以读写方式监听事件
     *
     * \~english @param callback The callback function, which can modify parameters in the event object
     * \~english @return The event listener instance
     * \~chinese @param callback 回调函数（可以修改事件对象）
     * \~chinese @return 事件监听器实例
     */
    static EventListener<EVENT> subscribe_ref(std::function<bool(EVENT&)> callback) {
        auto plugin = LL::getPlugin(GetCurrentModule());
        return EventListener<EVENT>(EventManager<EVENT>::addEventListenerRef(plugin ? plugin->name : "", callback));
    }

    static void unsubscribe(const EventListener<EVENT>& listener) {
        listener.remove();
    }

    /**
     * \~english @brief Checks if there exists at least one event listener listening to the event
     * \~chinese @brief 检查是否存在至少一个事件监听器监听该事件。
     *
     * \~english @return True if at least one event listener exists; otherwise false
     * \~chinese @return 若存在，则真；否则假
     */
    static bool hasListener() {
        return EventManager<EVENT>::hasListener();
    }

    bool call() {
        return EventManager<EVENT>::call(*(EVENT*)this);
    }
    bool callToPlugin(std::string pluginName) {
        return EventManager<EVENT>::callToPlugin(pluginName, *(EVENT*)this);
    }


    // For compatibility, DO NOT modify the code below
    // ********************************************************************************
protected:
    friend class EventManager<EVENT>;
    LIAPI static std::list<std::pair<string, std::function<bool(const EVENT&)>>> listeners;
    LIAPI static std::list<std::pair<string, std::function<bool(EVENT&)>>> listenersNoConst;
    // ********************************************************************************
};

// Player events
// ********************************************************************************
/**
 * \~english @brief This event indicates that a player is connecting to the server.
 * \~chinese @brief 此事件表明玩家正在连接服务器。
 *
 */
class PlayerPreJoinEvent : public EventTemplate<PlayerPreJoinEvent> {
public:
    Player* mPlayer;
    string mIP;
    string mXUID;
};

/**
 * \~english @brief This event indicates that a player joins the server.
 * \~chinese @brief 此事件表明玩家加入服务器。
 *
 * \~english @note This event cannot be suppressed.
 * \~chinese @note 此事件不可拦截。
 */
class PlayerJoinEvent : public EventTemplate<PlayerJoinEvent> {
public:
    Player* mPlayer;
};

/**
 * \~english @brief This event indicates that a player leaves the server.
 * \~chinese @brief 此事件表明玩家离开服务器。
 *
 * \~english @note This event cannot be suppressed.
 * \~chinese @note 此事件不可拦截。
 */
class PlayerLeftEvent : public EventTemplate<PlayerLeftEvent> {
public:
    Player* mPlayer;
    string mXUID;
};

/**
 * \~english @brief This event indicates that a player respawns.
 * \~chinese @brief 此事件表明玩家重生。
 *
 * \~english @note This event cannot be suppressed.
 * \~chinese @note 此事件不可拦截。
 */
class PlayerRespawnEvent : public EventTemplate<PlayerRespawnEvent> {
public:
    Player* mPlayer;
};

/**
 * \~english @brief This event indicates that a player uses an item.
 * \~chinese @brief 此事件表明玩家使用物品。
 *
 */
class PlayerUseItemEvent : public EventTemplate<PlayerUseItemEvent> {
public:
    Player* mPlayer;
    ItemStack* mItemStack;
};

/**
 * \~english @brief This event indicates that a player uses an item on a block.
 * \~chinese @brief 此事件表明玩家对方块使用物品。
 *
 */
class PlayerUseItemOnEvent : public EventTemplate<PlayerUseItemOnEvent> {
public:
    Player* mPlayer;
    ItemStack* mItemStack;
    BlockInstance mBlockInstance;
    unsigned char mFace;
    Vec3 mClickPos;
};

/**
 * \~english @brief This event indicates that a player sends a chat message.
 * \~chinese @brief 此事件表明玩家发送聊天消息。
 *
 */
class PlayerChatEvent : public EventTemplate<PlayerChatEvent> {
public:
    Player* mPlayer;
    string mMessage;
};

/**
 * \~english @brief This event indicates that a player changes dimension.
 * \~chinese @brief 此事件表明玩家变更维度。
 *
 * \~english @note This event cannot be suppressed. When the player return Overworld via
 * portal, this event will not be triggered.
 * \~chinese @note 此事件不可拦截。玩家从末地通过传送门返回主世界时，该事件不会触发。
 */
class PlayerChangeDimEvent : public EventTemplate<PlayerChangeDimEvent> {
public:
    Player* mPlayer;
    int mToDimensionId;
};

/**
 * \~english @brief This event indicates that a player jumps.
 * \~chinese @brief 此事件表明玩家跳跃。
 *
 * \~english @note This event cannot be suppressed.
 * \~chinese @note 此事件不可拦截。
 */
class PlayerJumpEvent : public EventTemplate<PlayerJumpEvent> {
public:
    Player* mPlayer;
};

/**
 * \~english @brief This event indicates that a player starts to sneak.
 * \~chinese @brief 此事件表明玩家进入潜行状态。
 *
 * \~english @note This event cannot be suppressed.
 * \~chinese @note 此事件不可拦截。
 */
class PlayerSneakEvent : public EventTemplate<PlayerSneakEvent> {
public:
    Player* mPlayer;
    bool mIsSneaking;
};

/**
 * \~english @brief This event indicates that a player attacks an entity.
 * \~chinese @brief 此事件表明玩家攻击实体。
 *
 */
class PlayerAttackEvent : public EventTemplate<PlayerAttackEvent> {
public:
    Player* mPlayer;
    Actor* mTarget;
    int mAttackDamage; // The value of this variable has no meaning
};

/**
 * \~english @brief This event indicates that a player attacks a block.
 * \~chinese @brief 此事件表明玩家攻击方块。
 *
 */
class PlayerAttackBlockEvent : public EventTemplate<PlayerAttackBlockEvent> {
public:
    Player* mPlayer;
    ItemStack* mItemStack;
    BlockInstance mBlockInstance;
};

/**
 * \~english @brief This event indicates that a player dies.
 * \~chinese @brief 此事件表明玩家死亡。
 *
 * \~english @note This event cannot be suppressed.
 * \~chinese @note 此事件不可拦截。
 */
class PlayerDieEvent : public EventTemplate<PlayerDieEvent> {
public:
    Player* mPlayer;
    ActorDamageSource* mDamageSource;
};

/**
 * \~english @brief This event indicates that a player picks up items.
 * \~chinese @brief 此事件表明玩家捡起物品。
 *
 */
class PlayerPickupItemEvent : public EventTemplate<PlayerPickupItemEvent> {
public:
    Player* mPlayer;
    Actor* mItemEntity;
    ItemStack* mItemStack;
};

/**
 * \~english @brief This event indicates that a player drops items.
 * \~chinese @brief 此事件表明玩家掉落物品。
 *
 */
class PlayerDropItemEvent : public EventTemplate<PlayerDropItemEvent> {
public:
    Player* mPlayer;
    ItemStack* mItemStack;
};

/**
 * \~english @brief This event indicates that a player eats something.
 * \~chinese @brief 此事件表明玩家进食。
 *
 */
class PlayerEatEvent : public EventTemplate<PlayerEatEvent> {
public:
    Player* mPlayer;
    ItemStack* mFoodItem;
};

/**
 * \~english @brief This event indicates that a player consumes a totem of undying.
 * \~chinese @brief 此事件表明玩家消耗不死图腾。
 *
 * \~english @note If suppressed, the player will still revive, but without consuming a totem of undying.
 * \~chinese @note 若拦截，玩家将在不消耗不死图腾的情况下复活。
 */
class PlayerConsumeTotemEvent : public EventTemplate<PlayerConsumeTotemEvent> {
public:
    Player* mPlayer;
};

/**
 * \~english @brief This event indicates that a player executes a command.
 * \~chinese @brief 此事件表明玩家执行命令。
 *
 */
class PlayerCmdEvent : public EventTemplate<PlayerCmdEvent> {
public:
    Player* mPlayer;
    string mCommand;
    MCRESULT* mResult;
};

/**
 * \~english @brief This event indicates that the effects on a player changes.
 * \~chinese @brief 此事件表明玩家状态效果改变。
 *
 */
class PlayerEffectChangedEvent : public EventTemplate<PlayerEffectChangedEvent> {
public:
    enum class EventType {
        Add,
        Remove,
        Update
    };
    Player* mPlayer;
    EventType mEventType;
    MobEffectInstance* mEffect;
};

/**
 * \~english @brief This event indicates that a player starts to detroy a block.
 * \~chinese @brief 此事件表明玩家开始破坏方块。
 *
 * \~english @note This event cannot be suppressed.
 * \~chinese @note 此事件不可拦截。
 */
class PlayerStartDestroyBlockEvent : public EventTemplate<PlayerStartDestroyBlockEvent> {
public:
    Player* mPlayer;
    BlockInstance mBlockInstance;
};

/**
 * \~english @brief This event indicates that a player destroys a block.
 * \~chinese @brief 此事件表明玩家破坏方块。
 *
 */
class PlayerDestroyBlockEvent : public EventTemplate<PlayerDestroyBlockEvent> {
public:
    Player* mPlayer;
    BlockInstance mBlockInstance;
};

/**
 * \~english @brief This event indicates that a player places a block.
 * \~chinese @brief 此事件表明玩家放置方块。
 *
 */
class PlayerPlaceBlockEvent : public EventTemplate<PlayerPlaceBlockEvent> {
public:
    Player* mPlayer;
    BlockInstance mBlockInstance;
};

/**
 * \~english @brief This event indicates that a player opens a container.
 * \~chinese @brief 此事件表明玩家打开容器。
 *
 * \~english @note This event cannot be triggered by opening inventory. This event is triggered
 * Earlier than `PlayerOpenContainerScreenEvent`.
 * \~chinese @note 打开背包时此事件无法触发。此事件先于 `PlayerOpenContainerScreen` 事件触发。
 */
class PlayerOpenContainerEvent : public EventTemplate<PlayerOpenContainerEvent> {
public:
    Player* mPlayer;
    BlockInstance mBlockInstance;
    Container* mContainer;
};

/**
 * \~english @brief This event indicates that a player closes a container.
 * \~chinese @brief 此事件表明玩家关闭容器。
 *
 */
class PlayerCloseContainerEvent : public EventTemplate<PlayerCloseContainerEvent> {
public:
    Player* mPlayer;
    BlockInstance mBlockInstance;
    Container* mContainer;
};

/**
 * \~english @brief This event indicates that a player's inventory changes.
 * \~chinese @brief 此事件表明玩家背包发生改变。
 *
 * \~english @note This event cannot be suppressed.
 * \~chinese @note 此事件不可拦截。
 */
class PlayerInventoryChangeEvent : public EventTemplate<PlayerInventoryChangeEvent> {
public:
    Player* mPlayer;
    int mSlot;
    ItemStack* mPreviousItemStack;
    ItemStack* mNewItemStack;
};

/**
 * \~english @brief This event indicates that a player moves.
 * \~chinese @brief 此事件表明玩家移动。
 *
 */
class PlayerMoveEvent : public EventTemplate<PlayerMoveEvent> {
public:
    Player* mPlayer;
    Vec3 mPos;
};

/**
 * \~english @brief This event indicates that a player starts to sprint.
 * \~chinese @brief 此事件表明玩家进入疾跑状态。
 *
 * \~english @note This event cannot be suppressed. You can set the sprinting status next tick instead.
 * \~chinese @note 此事件不可拦截。作为替代，你可以在下一游戏刻设置玩家疾跑状态。
 */
class PlayerSprintEvent : public EventTemplate<PlayerSprintEvent> {
public:
    Player* mPlayer;
    bool mIsSprinting;
};

/**
 * \~english @brief This event indicates that a player sets his/her armor slot.
 * \~chinese @brief 此事件表明玩家改变盔甲栏。
 *
 */
class PlayerSetArmorEvent : public EventTemplate<PlayerSetArmorEvent> {
public:
    Player* mPlayer;
    int mSlot;
    ItemStack* mArmorItem;
};

/**
 * \~english @brief This event indicates that a player uses a respawn anchor.
 * \~chinese @brief 此事件表明玩家使用重生锚。
 *
 * \~english @note If suppressed, the armor will be taken off.
 * \~chinese @note 若拦截，盔甲将被脱下。
 */
class PlayerUseRespawnAnchorEvent : public EventTemplate<PlayerUseRespawnAnchorEvent> {
public:
    Player* mPlayer;
    BlockInstance mBlockInstance;
};

/**
 * \~english @brief This event indicates that a player opens a container screen.
 * \~chinese @brief 此事件表明玩家打开容器GUI。
 *
 * \~english @note This event can be triggered by opening inventory.
 * \~chinese @note 打开背包时可触发此事件。
 */
class PlayerOpenContainerScreenEvent : public EventTemplate<PlayerOpenContainerScreenEvent> {
public:
    Player* mPlayer;
};

/**
 * \~english @brief This event indicates that a player interacts with an item frame.
 * \~chinese @brief 此事件表明玩家操作物品展示框。
 *
 */
class PlayerUseFrameBlockEvent : public EventTemplate<PlayerUseFrameBlockEvent> {
public:
    enum class Type {
        Use,
        Attack
    };
    Type mType;
    Player* mPlayer;
    BlockInstance mBlockInstance;
};

/**
 * \~english @brief This event indicates that a player's scoreboard changes.
 * \~chinese @brief 此事件表明玩家计分板改变。
 *
 */
class PlayerScoreChangedEvent : public EventTemplate<PlayerScoreChangedEvent> {
public:
    Player* mPlayer;
    int mScore;
    Objective* mObjective;
    ScoreboardId* mScoreboardId;
};

/**
 * \~english @brief This event indicates that a player gains experience.
 * \~chinese @brief 此事件表明玩家经验增加。
 *
 */
class PlayerExperienceAddEvent : public EventTemplate<PlayerExperienceAddEvent> {
public:
    Player* mPlayer;
    int mExp;
};

/**
 * \~english @brief This event indicates that a player interacts with an entity.
 * \~chinese @brief 此事件表明玩家与实体交互。
 *
 */
class PlayerInteractEntityEvent : public EventTemplate<PlayerInteractEntityEvent> {
public:
    enum class InteractiveMode {
        RightClick,
        LeftClick
    };

    ServerPlayer* mPlayer;
    ActorRuntimeID mTargetId;
    InteractiveMode mInteractiveMode;
};
// ********************************************************************************

// Block events
// ********************************************************************************
/**
 * \~english @brief This event indicates that a block is placed by a player.
 * \~chinese @brief 此事件表明方块被玩家放置。
 *
 */
class BlockPlacedByPlayerEvent : public EventTemplate<BlockPlacedByPlayerEvent> {
public:
    Player* mPlayer;
    BlockInstance mBlockInstance;
};

/**
 * \~english @brief This event indicates that a block is interacted with by a player.
 * \~chinese @brief 此事件表明方块被玩家交互。
 *
 */
class BlockInteractedEvent : public EventTemplate<BlockInteractedEvent> {
public:
    BlockInstance mBlockInstance;
    Player* mPlayer;
};

/**
 * \~english @brief This event indicates that a block changes.
 * \~chinese @brief 此事件表明方块发生改变。
 *
 */
class BlockChangedEvent : public EventTemplate<BlockChangedEvent> {
public:
    BlockInstance mPreviousBlockInstance;
    BlockInstance mNewBlockInstance;
};

/**
 * \~english @brief This event indicates that a block has exploded.
 * \~chinese @brief 此事件表明方块爆炸完成。
 *
 */
class BlockExplodedEvent : public EventTemplate<BlockExplodedEvent> {
public:
    BlockInstance mBlockInstance;
    Actor* mExplodeSource;
};

/**
 * \~english @brief This event indicates that fire spreads.
 * \~chinese @brief 此事件表明火焰蔓延。
 *
 */
class FireSpreadEvent : public EventTemplate<FireSpreadEvent> {
public:
    BlockPos mTarget;
    int mDimensionId;
};

/**
 * \~english @brief This event indicates that a container changes.
 * \~chinese @brief 此事件表明容器发生改变。
 *
 */
class ContainerChangeEvent : public EventTemplate<ContainerChangeEvent> {
public:
    Player* mPlayer;
    Actor* mActor;
    BlockInstance mBlockInstance;
    Container* mContainer;
    int mSlot;
    ItemStack* mPreviousItemStack;
    ItemStack* mNewItemStack;
};

/**
 * \~english @brief This event indicates that a block is hit by a projectile.
 * \~chinese @brief 此事件表明方块被投掷物击中。
 *
 */
class ProjectileHitBlockEvent : public EventTemplate<ProjectileHitBlockEvent> {
public:
    BlockInstance mBlockInstance;
    Actor* mSource;
};

/**
 * \~english @brief This event indicates that redstone updates.
 * \~chinese @brief 此事件表明红石更新。
 *
 */
class RedStoneUpdateEvent : public EventTemplate<RedStoneUpdateEvent> {
public:
    BlockInstance mBlockInstance;
    int mRedStonePower;
    bool mIsActivated;
};

class HopperSearchItemEvent : public EventTemplate<HopperSearchItemEvent> {
public:
    bool isMinecart;
    BlockInstance mHopperBlock;
    Vec3 mMinecartPos;
    int mDimensionId;
};

/**
 * \~english @brief This event indicates that a hopper ejects an item.
 * \~chinese @brief 此事件表明漏斗弹出物品。
 *
 */
class HopperPushOutEvent : public EventTemplate<HopperPushOutEvent> {
public:
    Vec3 mPos;
    int mDimensionId;
};

/**
 * \~english @brief This event indicates that a piston attempts to push.
 * \~chinese @brief 此事件表明活塞尝试推动。
 *
 */
class PistonTryPushEvent : public EventTemplate<PistonTryPushEvent> {
public:
    BlockInstance mPistonBlockInstance;
    BlockInstance mTargetBlockInstance;
};

/**
 * \~english @brief This event indicates that a piston pushes.
 * \~chinese @brief 此事件表明活塞推动。
 *
 */
class PistonPushEvent : public EventTemplate<PistonPushEvent> {
public:
    BlockInstance mPistonBlockInstance;
    BlockInstance mTargetBlockInstance;
};

class FarmLandDecayEvent : public EventTemplate<FarmLandDecayEvent> {
public:
    BlockInstance mBlockInstance;
    Actor* mActor;
};

/**
 * \~english @brief This event indicates that liquid spreads.
 * \~chinese @brief 此事件表明液体浸润。
 *
 */
class LiquidSpreadEvent : public EventTemplate<LiquidSpreadEvent> {
public:
    BlockInstance mBlockInstance;
    BlockPos mTarget;
    int mDimensionId;
};

/**
 * \~english @brief This event indicates that a command block executes a command.
 * \~chinese @brief 此事件表明命令方块执行命令。
 *
 */
class CmdBlockExecuteEvent : public EventTemplate<CmdBlockExecuteEvent> {
public:
    string mCommand;
    bool mIsMinecart;
    BlockInstance mBlockInstance;
    Actor* mMinecart;
};

/**
 * \~english @brief This event indicates that a block explodes.
 * \~chinese @brief 此事件表明方块爆炸。
 *
 */
class BlockExplodeEvent : public EventTemplate<BlockExplodeEvent> {
public:
    BlockInstance mBlockInstance;
    float mRadius;
    float mMaxResistance;
    bool mBreaking;
    bool mFire;
};

/**
 * \~english @brief This event indicates that a player enters a bed.
 * \~chinese @brief 此事件表明玩家上床。
 *
 */
class PlayerBedEnterEvent : public EventTemplate<PlayerBedEnterEvent> {
public:
    Player* mPlayer;
    BlockInstance* mBlockInstance;
};
// ********************************************************************************

// Entity Events
// ********************************************************************************
/**
 * \~english @brief This event indicates that an entity explodes.
 * \~chinese @brief 此事件表明实体爆炸。
 *
 */
class EntityExplodeEvent : public EventTemplate<EntityExplodeEvent> {
public:
    Actor* mActor;
    Vec3 mPos;
    BlockSource* mDimension;
    float mRadius;
    float mMaxResistance;
    bool mBreaking;
    bool mFire;
};

/**
 * \~english @brief This event indicates that an entity is hurt.
 * \~chinese @brief 此事件表明实体受伤。
 *
 */
class MobHurtEvent : public EventTemplate<MobHurtEvent> {
public:
    Mob* mMob;
    ActorDamageSource* mDamageSource;
    float mDamage;
};

/**
 * \~english @brief This event indicates that an entity dies.
 * \~chinese @brief 此事件表明实体死亡。
 *
 */
class MobDieEvent : public EventTemplate<MobDieEvent> {
public:
    Mob* mMob;
    ActorDamageSource* mDamageSource;
};

/**
 * \~english @brief This event indicates that an entity is hit by a projectile.
 * \~chinese @brief 此事件表明实体被投掷物击中。
 *
 */
class ProjectileHitEntityEvent : public EventTemplate<ProjectileHitEntityEvent> {
public:
    Actor* mTarget;
    Actor* mSource;
};

class WitherBossDestroyEvent : public EventTemplate<WitherBossDestroyEvent> {
public:
    WitherBoss* mWitherBoss;
    AABB mDestroyRange = {{}, {}};
};

/**
 * \~english @brief This event indicates that an entity starts to ride.
 * \~chinese @brief 此事件表明实体开始骑乘。
 *
 */
class EntityRideEvent : public EventTemplate<EntityRideEvent> {
public:
    Actor* mRider;
    Actor* mVehicle;
};

/**
 * \~english @brief This event indicates that an entity steps on a pressure plate.
 * \~chinese @brief 此事件表明实体踩上压力板。
 *
 */
class EntityStepOnPressurePlateEvent : public EventTemplate<EntityStepOnPressurePlateEvent> {
public:
    Actor* mActor;
    BlockInstance mBlockInstance;
};

/**
 * \~english @brief This event indicates that an NPC executes a command.
 * \~chinese @brief 此事件表明NPC执行命令。
 *
 */
class NpcCmdEvent : public EventTemplate<NpcCmdEvent> {
public:
    Actor* mNpc;
    std::string mCommand;
    Player* mPlayer;
};

/**
 * \~english @brief This event indicates that a projectile spawns.
 * \~chinese @brief 此事件表明投掷物生成。
 *
 */
class ProjectileSpawnEvent : public EventTemplate<ProjectileSpawnEvent> {
public:
    Actor* mShooter;
    ActorDefinitionIdentifier* mIdentifier;
    std::string mType;
};

/**
 * \~english @brief This event indicates that a projectile is created.
 * \~chinese @brief 此事件表明投掷物生成完毕。
 *
 */
class ProjectileCreatedEvent : public EventTemplate<ProjectileCreatedEvent> {
public:
    Actor* mShooter;
    Actor* mProjectile;
};

/**
 * \~english @brief This event indicates that an armor stand changes.
 * \~chinese @brief 此事件表明盔甲架被操作。
 *
 */
class ArmorStandChangeEvent : public EventTemplate<ArmorStandChangeEvent> {
public:
    ArmorStand* mArmorStand;
    Player* mPlayer;
    int mSlot;
};

/**
 * \~english @brief This event indicates that an entity transforms to another one.
 * \~chinese @brief 此事件表明实体类型转变。
 *
 */
class EntityTransformEvent : public EventTemplate<EntityTransformEvent> {
public:
    ActorUniqueID* mBeforeEntityUniqueId;
    Actor* mAfterEntity;
};
// ********************************************************************************

// Other events
// ********************************************************************************
class PostInitEvent : public EventTemplate<PostInitEvent> {
};

/**
 * \~english @brief This event indicates that the server starts.
 * \~chinese @brief 此事件表明服务器启动。
 *
 */
class ServerStartedEvent : public EventTemplate<ServerStartedEvent> {
};

/**
 * \~english @brief This event indicates that the server stops.
 * \~chinese @brief 此事件表明服务器关闭。
 *
 */
class ServerStoppedEvent : public EventTemplate<ServerStoppedEvent> {
};

/**
 * \~english @brief This event indicates that a command is executed in the console.
 * \~chinese @brief 此事件表明控制台执行命令
 *
 */
class ConsoleCmdEvent : public EventTemplate<ConsoleCmdEvent> {
public:
    std::string mCommand;
};

/**
 * \~english @brief This event indicates that a command is registered.
 * \~chinese @brief 此事件表明一个命令被注册。
 *
 */
class RegCmdEvent : public EventTemplate<RegCmdEvent> {
public:
    CommandRegistry* mCommandRegistry;
};

/**
 * \~english @brief This event indicates that some texts are outputed to the console.
 * \~chinese @brief 此事件表明控制台输出文字。
 *
 */
class ConsoleOutputEvent : public EventTemplate<ConsoleOutputEvent> {
public:
    std::string mOutput;
};

class ScriptPluginManagerEvent : public EventTemplate<ScriptPluginManagerEvent> {
public:
    enum class Operation {
        Load,
        Unload,
        Reload
    };
    enum class PluginType {
        SingleFile,         // like .js / .lua
        PluginPackage,      // like .llplugin
        UncompressedPackage // like plugins/nodejs/ABC
    };

    Operation operation;
    std::string target;
    std::string otherInfo;
    std::string pluginExtention;

    bool success = false;
    PluginType pluginType;
};

/**
 * \~english @brief This event indicates that a mob spawns.
 * \~chinese @brief 此事件表明生物生成。
 *
 */
class MobSpawnEvent : public EventTemplate<MobSpawnEvent> {
public:
    string mTypeName;
    Vec3 mPos;
    int mDimensionId;
};

/**
 * \~english @brief This event indicates that the server receives a form response packet.
 * \~chinese @brief 此事件表明服务器收到一个表单响应包。
 *
 */
class FormResponsePacketEvent : public EventTemplate<FormResponsePacketEvent> {
public:
    ServerPlayer* mServerPlayer;
    unsigned mFormId;
    string mJsonData;
};

/**
 * \~english @brief This event indicates that the resource pack is initialized.
 * \~chinese @brief 此事件表明资源包初始化。
 *
 */
class ResourcePackInitEvent : public EventTemplate<ResourcePackInitEvent> {
public:
    ResourcePackRepository* mRepo;
};

}; // namespace Event
