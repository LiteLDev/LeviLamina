#pragma once
#include "Global.h"
#include "LoggerAPI.h"
#include "MC/BlockInstance.hpp"
#include "MC/MCRESULT.hpp"
#include <functional>
#include <iterator>
#include <list>
#include <string>
#include <LLAPI.h>
#include <Utils/WinHelper.h>

using std::function;
using std::string;

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
class ArmStand;
class Objective;
struct ScoreboardId;

namespace Event {
///////////////////////////// Impl /////////////////////////////

constexpr bool Ok = true;
constexpr bool Cancel = false;

template <typename ListenersContainer>
class EventListener {
private:
    using Iterator = typename ListenersContainer::const_iterator;
    ListenersContainer* listeners;
    Iterator _this;
    bool deleted = false;

public:
    EventListener(ListenersContainer* listeners, Iterator _this)
        : listeners(listeners)
        , _this(_this) {
    }

    void remove() {
        if (!deleted) {
            listeners->erase(_this);
            deleted = true;
        }
    }
};

template <typename EVENT>
class EventTemplate {
public:
    using Callback = std::function<bool(const EVENT&)>;
    using ListenersContainer = std::list<std::pair<string,Callback>>;   // pluginName & callback
    using Listener = EventListener<ListenersContainer>;

protected:
    LIAPI static ListenersContainer listeners;

public:
    static Listener subscribe(Callback callback) {
        auto plugin = LL::getPlugin(GetCurrentModule());
        std::string pluginName = plugin == nullptr ? "" : plugin->name;
        listeners.emplace_back(std::make_pair(pluginName, callback));
        return Listener(&listeners, --listeners.end());
    }

    static void unsubscribe(const Listener& listener) {
        listener.remove();
    }

    static bool hasListener() {
        return !listeners.empty();
    }

    bool call()
    {
        bool passToBDS = true;
        auto i = listeners.begin();
        try {
            for (; i != listeners.end(); ++i)
            {
                if (!i->second(*(EVENT*)this))
                    passToBDS = false;
            }
            return passToBDS;
        } catch (const seh_exception& e) {
            logger.error("Uncaught SEH Exception Detected!");
            logger.error("In Event ({})", typeid(EVENT).name());
            if(!i->first.empty())
                logger.error("In Plugin <{}>", i->first);
        } catch (const std::exception& e) {
            logger.error("Uncaught Exception Detected!");
            logger.error("In Event ({})", typeid(EVENT).name());
            if (!i->first.empty())
                logger.error("In Plugin <{}>", i->first);
        }
        return passToBDS;
    }
};


///////////////////////////// Player Events /////////////////////////////

class PlayerPreJoinEvent : public EventTemplate<PlayerPreJoinEvent> {
public:
    Player* mPlayer;
    string mIP;
    string mXUID;
};

class PlayerJoinEvent : public EventTemplate<PlayerJoinEvent> {
public:
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

class PlayerDieEvent : public EventTemplate<PlayerDieEvent> {
public:
    Player* mPlayer;
    ActorDamageSource* mDamageSource;
};

class PlayerTakeItemEvent : public EventTemplate<PlayerTakeItemEvent> {
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
    enum class EventType { Add,
                           Remove,
                           Update };
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
    enum class Type { Use,
                      Attack };
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
    int mDamage;
};

class MobDieEvent : public EventTemplate<MobDieEvent> {
public:
    Mob* mMob;
    ActorDamageSource *mDamageSource;
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


class ArmorStandChangeEvent : public EventTemplate<ArmorStandChangeEvent> {
public:
    ArmStand* mArmorStand;
    Player* mPlayer;
    int mSlot;
};

class ItemUseOnActorEvent : public EventTemplate<ItemUseOnActorEvent> {
public:
    ActorRuntimeID mTarget;
    int mInteractiveMode;
};

///////////////////////////// Other Events /////////////////////////////

class PostInitEvent : public EventTemplate<PostInitEvent> {};

class ServerStartedEvent : public EventTemplate<ServerStartedEvent> {};

class ServerStoppedEvent: public EventTemplate<ServerStoppedEvent>{};

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
}; // namespace Event