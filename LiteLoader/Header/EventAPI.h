/*
MIT License

Copyright (c) 2022 LiteLDev

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.
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
 * \~chinese
 * @brief 事件系统。
 *
 * @par 示例程序：
 * @code
 * // 大多数情况下，使用常参数回调。
 * Event::PlayerJoinEvent::subscribe([](const Event::PlayerJoinEvent& ev) {
 *     ev.mPlayer->sendText("hello world~");
 *     return true;
 * });
 * 
 * // 若需要修改事件参数，使用引用参数回调。
 * Event::PlayerChatEvent::subscribe_ref([](Event::PlayerChatEvent& ev) {
 *     ev.mMessage = "[Plugin Modified] " + ev.mMessage;
 *     return true;
 * });
 * 
 * auto listener = Event::PlayerPickupItemEvent::subscribe([](const Event::PlayerPickupItemEvent& ev) {
 *     if (ev.mPlayer->getName() == "Jack")
 *         // 返回 `false` 以阻止事件发生。
 *         return false;
 *     else
 *         return true;
 * });
 * 
 * // 事件监听器可以被移除。
 * listener.remove();
 * @endcode
 *
 *
 * \~english
 * @brief The event system.
 *
 * @par Example:
 * @code
 * // In most cases, use the callback with constant parameters.
 * Event::PlayerJoinEvent::subscribe([](const Event::PlayerJoinEvent& ev) {
 *     ev.mPlayer->sendText("hello world~");
 *     return true;
 * });
 * 
 * // If you would like to modify the parameters, use the callback with reference parameters.
 * Event::PlayerChatEvent::subscribe_ref([](Event::PlayerChatEvent& ev) {
 *     ev.mMessage = "[Plugin Modified] " + ev.mMessage;
 *     return true;
 * });
 * 
 * auto listener = Event::PlayerPickupItemEvent::subscribe([](const Event::PlayerPickupItemEvent& ev) {
 *     if (ev.mPlayer->getName() == "Jack")
 *         // Return false to suppress the event.
 *         return false;
 *     else
 *         return true;
 * });
 * 
 * // The event listener can be removed.
 * listener.remove();
 * @endcode
 */
namespace Event {
///////////////////////////// Impl /////////////////////////////

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
 * \~chinese
 * @brief 事件监听器。
 * 
 * @tparam EVENT 监听的事件
 * 
 * 
 * \~english
 * @brief Event listener.
 * 
 * @tparam EVENT The event listening to
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
     * \~chinese
     * @brief 停止监听事件，移除事件监听器。
     * 
     * 
     * \~english
     * @brief Stop listening to the event and remove the event listener.
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
     * \~chinese
     * @brief 以常参数回调模式监听事件。
     * 
     * @param callback 当事件触发时调用的函数
     * @return 事件监听器
     * 
     * 
     * \~english
     * @brief Subscribes to an event with constant parameters.
     * 
     * @param callback A function that executes when the event fires
     * @return The event listener
     */
    static EventListener<EVENT> subscribe(std::function<bool(EVENT)> callback) {
        auto plugin = LL::getPlugin(GetCurrentModule());
        return EventListener<EVENT>(EventManager<EVENT>::addEventListener(plugin ? plugin->name : "", callback));
    }

    /**
     * \~chinese
     * @brief 以引用回调模式监听事件。
     * 
     * @param callback 当事件触发时调用的函数
     * @return 事件监听器
     * 
     * 
     * \~english
     * @brief Subscribes to an event with reference parameters.
     * 
     * @param callback A function that executes when the event fires
     * @return The event listener
     */
    static EventListener<EVENT> subscribe_ref(std::function<bool(EVENT&)> callback) {
        auto plugin = LL::getPlugin(GetCurrentModule());
        return EventListener<EVENT>(EventManager<EVENT>::addEventListenerRef(plugin ? plugin->name : "", callback));
    }

    static void unsubscribe(const EventListener<EVENT>& listener) {
        listener.remove();
    }

    /**
     * \~chinese
     * @brief 检查是否存在监听本事件的事件监听器。
     * 
     * @return 若存在则为真；否则为假
     * 
     * 
     * \~english
     * @brief Check if this event is being listened to
     * 
     * @return True if this event is being listened to; otherwise false
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


    ////////////////////// For compatibility DO NOT UPDATE //////////////////////
protected:
    friend class EventManager<EVENT>;
    LIAPI static std::list<std::pair<string, std::function<bool(const EVENT&)>>> listeners;
    LIAPI static std::list<std::pair<string, std::function<bool(EVENT&)>>> listenersNoConst;
    ////////////////////// For compatibility DO NOT UPDATE //////////////////////
};


///////////////////////////// Player Events /////////////////////////////

class PlayerPreJoinEvent : public EventTemplate<PlayerPreJoinEvent> {
public:
    Player* mPlayer;
    string mIP;
    string mXUID;
};

/**
 * \~chinese
 * @brief 当玩家加入游戏时触发的事件。
 * 
 * @note 此事件无法被拦截。
 * 
 * \~english
 * @brief An event that fires as players join the game.
 * 
 * @note This event cannot be suppressed.
 */
class PlayerJoinEvent : public EventTemplate<PlayerJoinEvent> {
public:
    /**
     * \~chinese
     * @brief 刚加入游戏的玩家
     * 
     * \~english
     * @brief The player who has just joined the game
     */
    Player* mPlayer;
};

class PlayerLeftEvent : public EventTemplate<PlayerLeftEvent> {
public:
    Player* mPlayer;
    string mXUID;
};

class PlayerRespawnEvent : public EventTemplate<PlayerRespawnEvent> {
public:
    Player* mPlayer;
};

class PlayerUseItemEvent : public EventTemplate<PlayerUseItemEvent> {
public:
    Player* mPlayer;
    ItemStack* mItemStack;
};

class PlayerUseItemOnEvent : public EventTemplate<PlayerUseItemOnEvent> {
public:
    Player* mPlayer;
    ItemStack* mItemStack;
    BlockInstance mBlockInstance;
    unsigned char mFace;
    Vec3 mClickPos;
};

/**
 * \~english @brief This event indicates that a player used a bucket.
 * \~chinese @brief ���¼��������ʹ����Ͱ��
 *
 */
class PlayerUseBucketEvent : public EventTemplate<PlayerUseBucketEvent> {
public:
    enum class EventType
    {
        Place,
        Take
    };
    Player* mPlayer;
    ItemStack* mBucket;
    BlockInstance mBlockInstance;
    Actor *mTargetActor;
    EventType mEventType;
    unsigned char mFace;
    Vec3 mTargetPos;
};

class PlayerChatEvent : public EventTemplate<PlayerChatEvent> {
public:
    Player* mPlayer;
    string mMessage;
};

class PlayerChangeDimEvent : public EventTemplate<PlayerChangeDimEvent> {
public:
    Player* mPlayer;
    int mToDimensionId;
};

class PlayerJumpEvent : public EventTemplate<PlayerJumpEvent> {
public:
    Player* mPlayer;
};

class PlayerSneakEvent : public EventTemplate<PlayerSneakEvent> {
public:
    Player* mPlayer;
    bool mIsSneaking;
};

class PlayerAttackEvent : public EventTemplate<PlayerAttackEvent> {
public:
    Player* mPlayer;
    Actor* mTarget;
    int mAttackDamage;
};

class PlayerAttackBlockEvent : public EventTemplate<PlayerAttackBlockEvent> {
public:
    Player* mPlayer;
    ItemStack* mItemStack;
    BlockInstance mBlockInstance;
};

/**
 * \~chinese
 * @brief 当玩家死亡时触发的事件。
 * 
 * 
 * @note 此事件无法被拦截。
 * 
 * 
 * \~english
 * @brief An event that fires as players die.
 * 
 * @note This event cannot be suppressed.
 */
class PlayerDieEvent : public EventTemplate<PlayerDieEvent> {
public:
    /**
     * \~chinese
     * @brief 死亡的玩家
     * 
     * 
     * \~english
     * @brief The dead player
     * 
     */
    Player* mPlayer;

    /**
     * \~chinese
     * @brief 导致玩家死亡的伤害来源
     * 
     * 
     * \~english
     * @brief The damage source causing the player death
     * 
     */
    ActorDamageSource* mDamageSource;
};

class PlayerPickupItemEvent : public EventTemplate<PlayerPickupItemEvent> {
public:
    Player* mPlayer;
    Actor* mItemEntity;
    ItemStack* mItemStack;
};

class PlayerDropItemEvent : public EventTemplate<PlayerDropItemEvent> {
public:
    Player* mPlayer;
    ItemStack* mItemStack;
};

class PlayerEatEvent : public EventTemplate<PlayerEatEvent> {
public:
    Player* mPlayer;
    ItemStack* mFoodItem;
};

class PlayerConsumeTotemEvent : public EventTemplate<PlayerConsumeTotemEvent> {
public:
    Player* mPlayer;
};

class PlayerCmdEvent : public EventTemplate<PlayerCmdEvent> {
public:
    Player* mPlayer;
    string mCommand;
    MCRESULT* mResult;
};

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

class PlayerStartDestroyBlockEvent : public EventTemplate<PlayerStartDestroyBlockEvent> {
public:
    Player* mPlayer;
    BlockInstance mBlockInstance;
};

class PlayerDestroyBlockEvent : public EventTemplate<PlayerDestroyBlockEvent> {
public:
    Player* mPlayer;
    BlockInstance mBlockInstance;
};

class PlayerPlaceBlockEvent : public EventTemplate<PlayerPlaceBlockEvent> {
public:
    Player* mPlayer;
    BlockInstance mBlockInstance;
};

class BlockPlacedByPlayerEvent : public EventTemplate<BlockPlacedByPlayerEvent> {
public:
    Player* mPlayer;
    BlockInstance mBlockInstance;
};

class PlayerOpenContainerEvent : public EventTemplate<PlayerOpenContainerEvent> {
public:
    Player* mPlayer;
    BlockInstance mBlockInstance;
    Container* mContainer;
};

class PlayerCloseContainerEvent : public EventTemplate<PlayerCloseContainerEvent> {
public:
    Player* mPlayer;
    BlockInstance mBlockInstance;
    Container* mContainer;
};

class PlayerInventoryChangeEvent : public EventTemplate<PlayerInventoryChangeEvent> {
public:
    Player* mPlayer;
    int mSlot;
    ItemStack* mPreviousItemStack;
    ItemStack* mNewItemStack;
};

class PlayerMoveEvent : public EventTemplate<PlayerMoveEvent> {
public:
    Player* mPlayer;
    Vec3 mPos;
};

class PlayerSprintEvent : public EventTemplate<PlayerSprintEvent> {
public:
    Player* mPlayer;
    bool mIsSprinting;
};

class PlayerSetArmorEvent : public EventTemplate<PlayerSetArmorEvent> {
public:
    Player* mPlayer;
    int mSlot;
    ItemStack* mArmorItem;
};

class PlayerUseRespawnAnchorEvent : public EventTemplate<PlayerUseRespawnAnchorEvent> {
public:
    Player* mPlayer;
    BlockInstance mBlockInstance;
};

class PlayerOpenContainerScreenEvent : public EventTemplate<PlayerOpenContainerScreenEvent> {
public:
    Player* mPlayer;
};

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

class PlayerScoreChangedEvent : public EventTemplate<PlayerScoreChangedEvent> {
public:
    Player* mPlayer;
    int mScore;
    Objective* mObjective;
    ScoreboardId* mScoreboardId;
};

class PlayerExperienceAddEvent : public EventTemplate<PlayerExperienceAddEvent> {
public:
    Player* mPlayer;
    int mExp;
};

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


///////////////////////////// Block Events /////////////////////////////

class BlockInteractedEvent : public EventTemplate<BlockInteractedEvent> {
public:
    BlockInstance mBlockInstance;
    Player* mPlayer;
};

class BlockChangedEvent : public EventTemplate<BlockChangedEvent> {
public:
    BlockInstance mPreviousBlockInstance;
    BlockInstance mNewBlockInstance;
};

class BlockExplodedEvent : public EventTemplate<BlockExplodedEvent> {
public:
    BlockInstance mBlockInstance;
    Actor* mExplodeSource;
};

class FireSpreadEvent : public EventTemplate<FireSpreadEvent> {
public:
    BlockPos mTarget;
    int mDimensionId;
};

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

class ProjectileHitBlockEvent : public EventTemplate<ProjectileHitBlockEvent> {
public:
    BlockInstance mBlockInstance;
    Actor* mSource;
};

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

class HopperPushOutEvent : public EventTemplate<HopperPushOutEvent> {
public:
    Vec3 mPos;
    int mDimensionId;
};

class PistonTryPushEvent : public EventTemplate<PistonTryPushEvent> {
public:
    BlockInstance mPistonBlockInstance;
    BlockInstance mTargetBlockInstance;
};

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

class LiquidSpreadEvent : public EventTemplate<LiquidSpreadEvent> {
public:
    BlockInstance mBlockInstance;
    BlockPos mTarget;
    int mDimensionId;
};

class CmdBlockExecuteEvent : public EventTemplate<CmdBlockExecuteEvent> {
public:
    string mCommand;
    bool mIsMinecart;
    BlockInstance mBlockInstance;
    Actor* mMinecart;
};

class BlockExplodeEvent : public EventTemplate<BlockExplodeEvent> {
public:
    BlockInstance mBlockInstance;
    float mRadius;
    float mMaxResistance;
    bool mBreaking;
    bool mFire;
};


///////////////////////////// Entity Events /////////////////////////////

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

class MobHurtEvent : public EventTemplate<MobHurtEvent> {
public:
    Mob* mMob;
    ActorDamageSource* mDamageSource;
    float mDamage;
};

class MobDieEvent : public EventTemplate<MobDieEvent> {
public:
    Mob* mMob;
    ActorDamageSource* mDamageSource;
};

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

class EntityRideEvent : public EventTemplate<EntityRideEvent> {
public:
    Actor* mRider;
    Actor* mVehicle;
};

class EntityStepOnPressurePlateEvent : public EventTemplate<EntityStepOnPressurePlateEvent> {
public:
    Actor* mActor;
    BlockInstance mBlockInstance;
};

class NpcCmdEvent : public EventTemplate<NpcCmdEvent> {
public:
    Actor* mNpc;
    std::string mCommand;
    Player* mPlayer;
};

class ProjectileSpawnEvent : public EventTemplate<ProjectileSpawnEvent> {
public:
    Actor* mShooter;
    ActorDefinitionIdentifier* mIdentifier;
    std::string mType;
};

class ProjectileCreatedEvent : public EventTemplate<ProjectileCreatedEvent> {
public:
    Actor* mShooter;
    Actor* mProjectile;
};

class ArmorStandChangeEvent : public EventTemplate<ArmorStandChangeEvent> {
public:
    ArmorStand* mArmorStand;
    Player* mPlayer;
    int mSlot;
};

class EntityTransformEvent : public EventTemplate<EntityTransformEvent> {
public:
    ActorUniqueID* mBeforeEntityUniqueId;
    Actor* mAfterEntity;
};

///////////////////////////// Other Events /////////////////////////////

class PostInitEvent : public EventTemplate<PostInitEvent> {
};

/**
 * \~chinese
 * @brief 当服务器启动完成时触发的事件。
 * 
 * @note 此事件不可被拦截。
 * 
 * 
 * \~english
 * @brief An event that fires as the server has started.
 * 
 * @note This event cannot be suppressed.
 */
class ServerStartedEvent : public EventTemplate<ServerStartedEvent> {
};

class ServerStoppedEvent : public EventTemplate<ServerStoppedEvent> {
};

class ConsoleCmdEvent : public EventTemplate<ConsoleCmdEvent> {
public:
    std::string mCommand;
};

class RegCmdEvent : public EventTemplate<RegCmdEvent> {
public:
    CommandRegistry* mCommandRegistry;
};

class ConsoleOutputEvent : public EventTemplate<ConsoleOutputEvent> {
public:
    std::string mOutput;
};

class PlayerBedEnterEvent : public EventTemplate<PlayerBedEnterEvent> {
public:
    Player* mPlayer;
    BlockInstance* mBlockInstance;
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

class MobSpawnEvent : public EventTemplate<MobSpawnEvent> {
public:
    string mTypeName;
    Vec3 mPos;
    int mDimensionId;
};

class FormResponsePacketEvent : public EventTemplate<FormResponsePacketEvent> {
public:
    ServerPlayer* mServerPlayer;
    unsigned mFormId;
    string mJsonData;
};

class ResourcePackInitEvent : public EventTemplate<ResourcePackInitEvent> {
public:
    ResourcePackRepository* mRepo;
};

}; // namespace Event
