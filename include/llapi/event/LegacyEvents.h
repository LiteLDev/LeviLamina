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

// TODO: Migration to new event system

#pragma once

#include <functional>
#include <iterator>
#include <list>
#include <string>
#include <unordered_map>

#include "llapi/Global.h"
#include "llapi/LLAPI.h"
#include "llapi/LoggerAPI.h"
#include "llapi/mc/AABB.hpp"
#include "llapi/mc/BlockInstance.hpp"
#include "llapi/mc/BlockLegacy.hpp"
#include "llapi/mc/EnderDragon.hpp"
#include "llapi/mc/MCRESULT.hpp"
#include "llapi/utils/WinHelper.h"

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
class EnderDragon;
class BlockLegacy;
class ArmorStand;
class Objective;
struct ScoreboardId;

/**
 * @brief The event system.
 *
 * @par Example
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
namespace ll::event::legacy {

/* region ## Base ## */
///////////////////////////// Base /////////////////////////////

constexpr bool Ok     = true;
constexpr bool Cancel = false;

template <typename EVENT>
class EventManager {
public:
    LIAPI static int  addEventListener(std::string name, std::function<bool(EVENT)> callback);
    LIAPI static int  addEventListenerRef(std::string name, std::function<bool(EVENT&)> callback);
    LIAPI static bool removeEventListener(int id);
    LIAPI static bool hasListener();
    LIAPI static bool call(EVENT& ev);
    LIAPI static bool callToPlugin(std::string pluginName, EVENT& ev);
};

/**
 * @brief Event listener.
 *
 * @tparam EVENT The event listening to
 */
template <typename EVENT>
class EventListener {
private:
    int  listenerId;
    bool deleted = false;

public:
    explicit EventListener(int id) : listenerId(id) {}

    /**
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
     * @brief Subscribes to an event with constant parameters.
     *
     * @param callback A function that executes when the event fires
     * @return The event listener
     */
    static EventListener<EVENT> subscribe(std::function<bool(EVENT)> callback) {
        auto plugin = ll::getPlugin(GetCurrentModule());
        return EventListener<EVENT>(EventManager<EVENT>::addEventListener(plugin ? plugin->name : "", callback));
    }

    /**
     * @brief Subscribes to an event with reference parameters.
     *
     * @param callback A function that executes when the event fires
     * @return The event listener
     */
    static EventListener<EVENT> subscribe_ref(std::function<bool(EVENT&)> callback) {
        auto plugin = ll::getPlugin(GetCurrentModule());
        return EventListener<EVENT>(EventManager<EVENT>::addEventListenerRef(plugin ? plugin->name : "", callback));
    }

    static void unsubscribe(const EventListener<EVENT>& listener) { listener.remove(); }

    /**
     * @brief Check if this event is being listened to
     *
     * @return True if this event is being listened to; otherwise false
     */
    static bool hasListener() { return EventManager<EVENT>::hasListener(); }

    bool call() { return EventManager<EVENT>::call(*(EVENT*)this); }

    bool callToPlugin(std::string pluginName) { return EventManager<EVENT>::callToPlugin(pluginName, *(EVENT*)this); }


    ////////////////////// For compatibility DO NOT UPDATE //////////////////////
protected:
    friend class EventManager<EVENT>;
    LIAPI static std::list<std::pair<string, std::function<bool(const EVENT&)>>> listeners;
    LIAPI static std::list<std::pair<string, std::function<bool(EVENT&)>>>       listenersNoConst;
    ////////////////////// For compatibility DO NOT UPDATE //////////////////////
};

/* endregion */

/* region ## Player Events ## */
///////////////////////////// Player Events /////////////////////////////

class PlayerUseItemEvent : public EventTemplate<PlayerUseItemEvent> {
public:
    Player*    mPlayer;
    ItemStack* mItemStack;
};

class PlayerUseItemOnEvent : public EventTemplate<PlayerUseItemOnEvent> {
public:
    Player*       mPlayer    = nullptr;
    ItemStack*    mItemStack = nullptr;
    BlockInstance mBlockInstance;
    unsigned char mFace = 0;
    Vec3          mClickPos;
};

/**
 * @brief An event that fires as players use bucket.
 *
 */
class PlayerUseBucketEvent : public EventTemplate<PlayerUseBucketEvent> {
public:
    enum class EventType {
        None = -1,
        Place,

        Take
    };
    Player*       mPlayer = nullptr;
    ItemStack*    mBucket = nullptr;
    BlockInstance mBlockInstance;
    Actor*        mTargetActor = nullptr;
    EventType     mEventType   = EventType::None;
    unsigned char mFace        = 0;
    Vec3          mTargetPos;
};

/**
 * @brief An event that fires as players die.
 *
 * @note This event cannot be suppressed.
 */
class PlayerDieEvent : public EventTemplate<PlayerDieEvent> {
public:
    /**
     * @brief The dead player
     *
     */
    Player* mPlayer;

    /**
     * @brief The damage source causing the player death
     *
     */
    ActorDamageSource* mDamageSource;
};

class PlayerDropItemEvent : public EventTemplate<PlayerDropItemEvent> {
public:
    Player*    mPlayer;
    ItemStack* mItemStack;
};

class PlayerEatEvent : public EventTemplate<PlayerEatEvent> {
public:
    Player*    mPlayer;
    ItemStack* mFoodItem;
};

class PlayerAteEvent : public EventTemplate<PlayerAteEvent> {
public:
    Player*    mPlayer;
    ItemStack* mFoodItem;
};

class PlayerCmdEvent : public EventTemplate<PlayerCmdEvent> {
public:
    Player*   mPlayer;
    string    mCommand;
    MCRESULT* mResult;
};

class PlayerStartDestroyBlockEvent : public EventTemplate<PlayerStartDestroyBlockEvent> {
public:
    Player*       mPlayer = nullptr;
    BlockInstance mBlockInstance;
};

class PlayerUseFrameBlockEvent : public EventTemplate<PlayerUseFrameBlockEvent> {
public:
    enum class Type { None = -1, Use, Attack };
    Type          mType   = Type::None;
    Player*       mPlayer = nullptr;
    BlockInstance mBlockInstance;
};

class PlayerScoreChangedEvent : public EventTemplate<PlayerScoreChangedEvent> {
public:
    Player*       mPlayer       = nullptr;
    int           mScore        = -1;
    Objective*    mObjective    = nullptr;
    ScoreboardId* mScoreboardId = nullptr;
};

class PlayerBedEnterEvent : public EventTemplate<PlayerBedEnterEvent> {
public:
    Player*        mPlayer        = nullptr;
    BlockInstance* mBlockInstance = nullptr;
};

class PlayerOpenInventoryEvent : public EventTemplate<PlayerOpenInventoryEvent> {
public:
    Player*       mPlayer       = nullptr;
    ServerPlayer* mServerPlayer = nullptr;
};

/* endregion */

/* region ## Block Events ## */
///////////////////////////// Block Events /////////////////////////////

class BlockInteractedEvent : public EventTemplate<BlockInteractedEvent> {
public:
    BlockInstance mBlockInstance;
    Player*       mPlayer = nullptr;
};

/* endregion */

/* region ## Actor Events ## */
///////////////////////////// Entity Events /////////////////////////////

class EntityExplodeEvent : public EventTemplate<EntityExplodeEvent> {
public:
    Actor*       mActor = nullptr;
    Vec3         mPos;
    BlockSource* mDimension     = nullptr;
    float        mRadius        = 0.0f;
    float        mMaxResistance = 0.0f;
    bool         mBreaking      = false;
    bool         mFire          = false;
};

class MobHurtEvent : public EventTemplate<MobHurtEvent> {
public:
    Mob*               mMob          = nullptr;
    ActorDamageSource* mDamageSource = nullptr;
    float              mDamage       = 0.0f;
};

class MobDieEvent : public EventTemplate<MobDieEvent> {
public:
    Mob*               mMob          = nullptr;
    ActorDamageSource* mDamageSource = nullptr;
};

class ProjectileHitEntityEvent : public EventTemplate<ProjectileHitEntityEvent> {
public:
    Actor* mTarget = nullptr;
    Actor* mSource = nullptr;
};

class WitherBossDestroyEvent : public EventTemplate<WitherBossDestroyEvent> {
public:
    WitherBoss* mWitherBoss = nullptr;
    AABB        mDestroyRange{{}, {}};
};

class EnderDragonDestroyEvent : public EventTemplate<EnderDragonDestroyEvent> {
public:
    EnderDragon* mEnderDragon = nullptr;
    BlockLegacy* mBlockLegacy = nullptr;
};

class EntityRideEvent : public EventTemplate<EntityRideEvent> {
public:
    Actor* mRider   = nullptr;
    Actor* mVehicle = nullptr;
};

class EntityStepOnPressurePlateEvent : public EventTemplate<EntityStepOnPressurePlateEvent> {
public:
    Actor*        mActor = nullptr;
    BlockInstance mBlockInstance;
};

class NpcCmdEvent : public EventTemplate<NpcCmdEvent> {
public:
    Actor*      mNpc = nullptr;
    std::string mCommand;
    Player*     mPlayer = nullptr;
};

class ProjectileSpawnEvent : public EventTemplate<ProjectileSpawnEvent> {
public:
    Actor*                     mShooter    = nullptr;
    ActorDefinitionIdentifier* mIdentifier = nullptr;
    std::string                mType;
};

class ProjectileCreatedEvent : public EventTemplate<ProjectileCreatedEvent> {
public:
    Actor* mShooter    = nullptr;
    Actor* mProjectile = nullptr;
};

class ArmorStandChangeEvent : public EventTemplate<ArmorStandChangeEvent> {
public:
    ArmorStand* mArmorStand = nullptr;
    Player*     mPlayer     = nullptr;
    int         mSlot       = -1;
};

class EntityTransformEvent : public EventTemplate<EntityTransformEvent> {
public:
    ActorUniqueID* mBeforeEntityUniqueId = nullptr;
    Actor*         mAfterEntity          = nullptr;
};

class MobSpawnEvent : public EventTemplate<MobSpawnEvent> {
public:
    [[deprecated("MobSpawnEvent is outdated, please use MobTrySpawnEvent instead")]] string mTypeName;
    Vec3                                                                                    mPos;
    int                                                                                     mDimensionId = -1;
};

class MobTrySpawnEvent : public EventTemplate<MobTrySpawnEvent> {
public:
    string mTypeName;
    Vec3   mPos;
    int    mDimensionId = -1;
};

class MobSpawnedEvent : public EventTemplate<MobSpawnedEvent> {
public:
    Mob* mMob;
    Vec3 mPos;
    int  mDimensionId = -1;
};

/* endregion */

/* region ## Other Events ## */
///////////////////////////// Other Events /////////////////////////////

class PostInitEvent : public EventTemplate<PostInitEvent> {};

class ConsoleCmdEvent : public EventTemplate<ConsoleCmdEvent> {
public:
    std::string mCommand;
};

class ConsoleOutputEvent : public EventTemplate<ConsoleOutputEvent> {
public:
    std::string mOutput;
};

class ScriptPluginManagerEvent : public EventTemplate<ScriptPluginManagerEvent> {
public:
    enum class Operation { Load, Unload, Reload };
    enum class PluginType {
        SingleFile,         // like .js / .lua
        PluginPackage,      // like .llplugin
        UncompressedPackage // like plugins/nodejs/ABC
    };

    Operation   operation;
    std::string target;
    std::string otherInfo;
    std::string pluginExtension;

    bool       success = false;
    PluginType pluginType;
};

class FormResponsePacketEvent : public EventTemplate<FormResponsePacketEvent> {
public:
    ServerPlayer* mServerPlayer = nullptr;
    unsigned      mFormId       = 0;
    string        mJsonData;
};

class ResourcePackInitEvent : public EventTemplate<ResourcePackInitEvent> {
public:
    ResourcePackRepository* mRepo = nullptr;
};

/* endregion */

} // namespace ll::event::legacy
