#pragma once
#include <EventAPI.h>
#include "../Main/.NETGlobal.hpp"
#include "../Tools/PropertryHelper.h"

#define EventAPIs(RefEvent, NativeEvent)                                                                                \
public:                                                                                                                 \
    using EventListener = EventListener<NativeEvent>;                                                                   \
    using EventTemplate = EventTemplate<RefEvent, NativeEvent>;                                                         \
                                                                                                                        \
    static EventListener ^ Subscribe(EventHandler ^ callback) {                                                         \
        auto assembly = System::Reflection::Assembly::GetCallingAssembly();                                             \
        auto pluginname = assembly->GetName()->FullName;                                                                \
        return EventTemplate::subscribe(pluginname, callback);                                                          \
    };                                                                                                                  \
    static EventListener ^ Subscribe_Ref(EventHandler ^ callback) {                                                     \
        auto assembly = System::Reflection::Assembly::GetCallingAssembly();                                             \
        auto pluginname = assembly->GetName()->FullName;                                                                \
        return EventTemplate::subscribe_ref(pluginname, callback);                                                      \
    };                                                                                                                  \
    static void Unsubscribe(EventListener ^ listener)                                                                   \
    {                                                                                                                   \
        return EventTemplate::unsubscribe(listener);                                                                    \
    }                                                                                                                   \
    static bool HasListener()                                                                                           \
    {                                                                                                                   \
        return EventTemplate::hasListener();                                                                            \
    }                                                                                                                   \
                                                                                                                        \
private:                                                                                                                \
    static List<Pair<EventHandler ^, EventListener ^>> ^ eventData = gcnew List<Pair<EventHandler ^, EventListener ^>>; \
    static EventHandler ^ pE;                                                                                           \
                                                                                                                        \
public:                                                                                                                 \
    static event EventHandler ^ Event {                                                                                 \
        void add(EventHandler ^ p)                                                                                      \
        {                                                                                                               \
            pE = static_cast<EventHandler ^>(System::Delegate::Combine(pE, p));                                         \
            eventData->Add(Pair<EventHandler ^, EventListener ^>(p, Subscribe(p)));                                     \
        }                                                                                                               \
        void remove(EventHandler ^ p)                                                                                   \
        {                                                                                                               \
            pE = static_cast<EventHandler ^>(System::Delegate::Remove(pE, p));                                          \
            auto count = eventData->Count;                                                                              \
            for (int i = 0; i < count; ++i)                                                                             \
            {                                                                                                           \
                auto % pair = eventData[i];                                                                             \
                if (pair.Key->Equals(p))                                                                                \
                {                                                                                                       \
                    Unsubscribe(pair.Value);                                                                            \
                    eventData->Remove(pair);                                                                            \
                }                                                                                                       \
            }                                                                                                           \
        }                                                                                                               \
    };                                                                                                                  \
                                                                                                                        \
private:

#include "MC/AABB.hpp"
#include "MC/Types.hpp"
#include "MC/Block.hpp"
#include "MC/BlockActor.hpp"
#include "MC/BlockInstance.hpp"
#include "MC/BlockSource.hpp"
#include "MC/Container.hpp"
#include "MC/ItemInstance.hpp"
#include "MC/ItemStack.hpp"
#include "MC/Player.hpp"
#include "MC/ActorDamageSource.hpp"
#include "MC/MCRESULT.hpp"
#include "MC/MobEffectInstance.hpp"
#include "MC/Objective.hpp"
#include "MC/WitherBoss.hpp"
#include "MC/ActorDefinitionIdentifier.hpp"
#include "MC/ArmStand.hpp"
#include "MC/Vec3.hpp"
#include "MC/BlockPos.hpp"
#include "MC/ScoreboardId.hpp"
#include "Command/CommandRegistry.hpp"
#include "Command/CommandParameterData.hpp"

#include "Logger.hpp"

namespace LLNET::Event
{
using namespace MC;

template <typename NATIVEEVENT>
public ref class EventListener
{
private:
    int listenerId;
    bool deleted = false;

public:
    EventListener(int id)
        : listenerId(id)
    {
    }

    void Remove()
    {
        if (!deleted)
        {
            deleted = true;
            ::Event::EventManager<NATIVEEVENT>::removeEventListener(listenerId);
        }
    }
};

template <typename REFEVENT, typename NATIVEEVENT>
public ref class EventTemplate
{
protected:
    NATIVEEVENT* _this;
    bool ownsNativeInstance;

public:
    delegate bool EventHandler(REFEVENT ^ ev);

protected:
    inline EventTemplate()
        : _this(nullptr)
        , ownsNativeInstance(false){};
    inline !EventTemplate()
    {
        if (ownsNativeInstance)
            delete _this;
    };
    inline ~EventTemplate()
    {
        this->!EventTemplate();
        GC::SuppressFinalize(this);
    };
    inline static REFEVENT ^ Translate(NATIVEEVENT& ev) {
        auto ret = gcnew REFEVENT{};
        ret->ownsNativeInstance = true;
        ret->_this = new NATIVEEVENT(std::move(ev));
        return ret;
    };
    inline static REFEVENT ^ Translate_ref(const NATIVEEVENT& ev) {
        auto ret = gcnew REFEVENT{};
        ret->ownsNativeInstance = false;
        ret->_this = (NATIVEEVENT*)(&ev);
        return ret;
    };
    inline NATIVEEVENT& Translate()
    {
        return *_this;
    };

private:
    ref class EventCallBack
    {
    private:
        inline bool NATIVECALLBACK Fn(NATIVEEVENT ev)
        {
            auto _ev = EventTemplate::Translate(ev);
            bool ret;
            try
            {
                ret = delfunc(_ev);
            }
            CATCH
            return ret;
        }
        inline bool NATIVECALLBACK Fn_ref(const NATIVEEVENT& ev)
        {
            auto _ev = EventTemplate::Translate_ref(ev);
            bool ret;
            try
            {
                ret = delfunc(_ev);
            }
            CATCH
            return ret;
        }

    private:
        delegate bool DelegateCallbackFunc(NATIVEEVENT ev);
        typedef bool (*NativeCallbackFunc)(NATIVEEVENT ev);
        delegate bool DelegateCallbackFunc_ref(const NATIVEEVENT& ev);
        typedef bool (*NativeCallbackFunc_ref)(const NATIVEEVENT& ev);

    public:
        EventCallBack(System::String ^ pluginName, EventHandler ^ callback, bool isRef)
            : delfunc(callback)
        {
            switch (isRef)
            {
                case true:
                {
                    DelegateCallbackFunc_ref ^ ftr = gcnew DelegateCallbackFunc_ref(this, &EventCallBack::Fn_ref);
                    gch = GCHandle::Alloc(ftr);
                    System::IntPtr ^ _ptr = Marshal::GetFunctionPointerForDelegate(ftr);
                    auto pfunc = static_cast<NativeCallbackFunc_ref>(_ptr->ToPointer());
                    Listener = gcnew EventListener<NATIVEEVENT>(
                        ::Event::EventManager<NATIVEEVENT>::addEventListenerRef(
                            pluginName ? marshalString<Encoding::E_UTF8>(pluginName) : "",
                            pfunc));
                }
                break;
                case false:
                {
                    DelegateCallbackFunc ^ ftr = gcnew DelegateCallbackFunc(this, &EventCallBack::Fn);
                    gch = GCHandle::Alloc(ftr);
                    System::IntPtr ^ _ptr = Marshal::GetFunctionPointerForDelegate(ftr);
                    auto pfunc = static_cast<NativeCallbackFunc>(_ptr->ToPointer());
                    Listener = gcnew EventListener<NATIVEEVENT>(
                        ::Event::EventManager<NATIVEEVENT>::addEventListener(
                            pluginName ? marshalString<Encoding::E_UTF8>(pluginName) : "",
                            pfunc));
                }
                break;
            }
        }
        ~EventCallBack()
        {
            if (gch.IsAllocated)
            {
                gch.Free();
            }
        }

    private:
        EventHandler ^ delfunc;
        GCHandle gch;

    public:
        EventListener<NATIVEEVENT> ^ Listener;
    };

protected:
    inline static EventListener<NATIVEEVENT> ^ subscribe(System::String ^ pluginName, EventHandler ^ callback) {
        auto c = gcnew EventCallBack(pluginName, callback, false);
        GC::KeepAlive(c);
        return c->Listener;
    };
    inline static EventListener<NATIVEEVENT> ^ subscribe_ref(System::String ^ pluginName, EventHandler ^ callback) {
        auto c = gcnew EventCallBack(pluginName, callback, true);
        GC::KeepAlive(c);
        return c->Listener;
    };
    inline static void unsubscribe(EventListener<NATIVEEVENT> ^ listener)
    {
        listener->Remove();
    }
    inline static bool hasListener()
    {
        return ::Event::EventManager<NATIVEEVENT>::hasListener();
    }
};

#define Class \
public        \
    ref class

///////////////////////////// Player Events /////////////////////////////


Class PlayerPreJoinEvent
    : public EventTemplate<PlayerPreJoinEvent, ::Event::PlayerPreJoinEvent>
{
    EventAPIs(PlayerPreJoinEvent, ::Event::PlayerPreJoinEvent);

public:
    Property_Ptr(MC, Player, mPlayer);
    Property_String(mIP);
    Property_String(mXUID);
};

Class PlayerJoinEvent
    : public EventTemplate<PlayerJoinEvent, ::Event::PlayerJoinEvent>
{
    EventAPIs(PlayerJoinEvent, ::Event::PlayerJoinEvent);

public:
    Property_Ptr(MC, Player, mPlayer);
};

Class PlayerLeftEvent
    : public EventTemplate<PlayerLeftEvent, ::Event::PlayerLeftEvent>
{
    EventAPIs(PlayerLeftEvent, ::Event::PlayerLeftEvent);

public:
    Property_Ptr(MC, Player, mPlayer);
    Property_String(mXUID);
};

Class PlayerRespawnEvent
    : public EventTemplate<PlayerRespawnEvent, ::Event::PlayerRespawnEvent>
{
    EventAPIs(PlayerRespawnEvent, ::Event::PlayerRespawnEvent);

public:
    Property_Ptr(MC, Player, mPlayer);
};

Class PlayerUseItemEvent
    : public EventTemplate<PlayerUseItemEvent, ::Event::PlayerUseItemEvent>
{
    EventAPIs(PlayerUseItemEvent, ::Event::PlayerUseItemEvent);

public:
    Property_Ptr(MC, Player, mPlayer);
    Property_Ptr(MC, ItemStack, mItemStack);
};

Class PlayerUseItemOnEvent
    : public EventTemplate<PlayerUseItemOnEvent, ::Event::PlayerUseItemOnEvent>
{
    EventAPIs(PlayerUseItemOnEvent, ::Event::PlayerUseItemOnEvent);

public:
    Property_Ptr(MC, Player, mPlayer);
    Property_Ptr(MC, ItemStack, mItemStack);
    Property_Instance(MC, BlockInstance, mBlockInstance);
    Property(char, mFace);
};

Class PlayerChatEvent
    : public EventTemplate<PlayerChatEvent, ::Event::PlayerChatEvent>
{
    EventAPIs(PlayerChatEvent, ::Event::PlayerChatEvent);

public:
    Property_Ptr(MC, Player, mPlayer);
    Property_String(mMessage);
};

Class PlayerChangeDimEvent
    : public EventTemplate<PlayerChangeDimEvent, ::Event::PlayerChangeDimEvent>
{
    EventAPIs(PlayerChangeDimEvent, ::Event::PlayerChangeDimEvent);

public:
    Property_Ptr(MC, Player, mPlayer);
    Property(int, mToDimensionId);
};

Class PlayerJumpEvent
    : public EventTemplate<PlayerJumpEvent, ::Event::PlayerJumpEvent>
{
    EventAPIs(PlayerJumpEvent, ::Event::PlayerJumpEvent);

public:
    Property_Ptr(MC, Player, mPlayer);
};

Class EntityTransformEvent
    : public EventTemplate<EntityTransformEvent, ::Event::EntityTransformEvent>
{
    EventAPIs(EntityTransformEvent, ::Event::EntityTransformEvent);

public:
    Property_Ptr(MC, ActorUniqueID, mBeforeEntityUniqueId);
    Property_Ptr(MC, Actor, mAfterEntity);
};

Class PlayerSneakEvent
    : public EventTemplate<PlayerSneakEvent, ::Event::PlayerSneakEvent>
{
    EventAPIs(PlayerSneakEvent, ::Event::PlayerSneakEvent);

public:
    Property_Ptr(MC, Player, mPlayer);
    Property(bool, mIsSneaking);
};

Class PlayerAttackEvent
    : public EventTemplate<PlayerAttackEvent, ::Event::PlayerAttackEvent>
{
    EventAPIs(PlayerAttackEvent, ::Event::PlayerAttackEvent);

public:
    Property_Ptr(MC, Player, mPlayer);
    Property_Ptr(MC, Actor, mTarget);
    Property(int, mAttackDamage);
};

Class PlayerAttackBlockEvent
    : public EventTemplate<PlayerAttackBlockEvent, ::Event::PlayerAttackBlockEvent>
{
    EventAPIs(PlayerAttackBlockEvent, ::Event::PlayerAttackBlockEvent);

public:
    Property_Ptr(MC, Player, mPlayer);
    Property_Ptr(MC, ItemStack, mItemStack);
    Property_Instance(MC, BlockInstance, mBlockInstance);
};

Class PlayerDieEvent
    : public EventTemplate<PlayerDieEvent, ::Event::PlayerDieEvent>
{
    EventAPIs(PlayerDieEvent, ::Event::PlayerDieEvent);

public:
    Property_Ptr(MC, Player, mPlayer);
    Property_Ptr(MC, ActorDamageSource, mDamageSource);
};

Class PlayerPickupItemEvent
    : public EventTemplate<PlayerPickupItemEvent, ::Event::PlayerPickupItemEvent>
{
    EventAPIs(PlayerPickupItemEvent, ::Event::PlayerPickupItemEvent);

public:
    Property_Ptr(MC, Player, mPlayer);
    Property_Ptr(MC, Actor, mItemEntity);
    Property_Ptr(MC, ItemStack, mItemStack);
};

Class PlayerDropItemEvent
    : public EventTemplate<PlayerDropItemEvent, ::Event::PlayerDropItemEvent>
{
    EventAPIs(PlayerDropItemEvent, ::Event::PlayerDropItemEvent);

public:
    Property_Ptr(MC, Player, mPlayer);
    Property_Ptr(MC, ItemStack, mItemStack);
};

Class PlayerEatEvent
    : public EventTemplate<PlayerEatEvent, ::Event::PlayerEatEvent>
{
    EventAPIs(PlayerEatEvent, ::Event::PlayerEatEvent);

public:
    Property_Ptr(MC, Player, mPlayer);
    Property_Ptr(MC, ItemStack, mFoodItem);
};

Class PlayerConsumeTotemEvent
    : public EventTemplate<PlayerConsumeTotemEvent, ::Event::PlayerConsumeTotemEvent>
{
    EventAPIs(PlayerConsumeTotemEvent, ::Event::PlayerConsumeTotemEvent);

public:
    Property_Ptr(MC, Player, mPlayer);
};

Class PlayerCmdEvent
    : public EventTemplate<PlayerCmdEvent, ::Event::PlayerCmdEvent>
{
    EventAPIs(PlayerCmdEvent, ::Event::PlayerCmdEvent);

public:
    Property_Ptr(MC, Player, mPlayer);
    Property_String(mCommand);
    Property_Ptr(MC, MCRESULT, mResult);
};

Class PlayerEffectChangedEvent
    : public EventTemplate<PlayerEffectChangedEvent, ::Event::PlayerEffectChangedEvent>
{
    EventAPIs(PlayerEffectChangedEvent, ::Event::PlayerEffectChangedEvent);

public:
    enum class EventType
    {
        Add,
        Remove,
        Update
    };
    Property_Ptr(MC, Player, mPlayer);
    Property_Enum(EventType, ::Event::PlayerEffectChangedEvent::EventType, mEventType);
    Property_Ptr(MC, MobEffectInstance, mEffect);
};

Class PlayerStartDestroyBlockEvent
    : public EventTemplate<PlayerStartDestroyBlockEvent, ::Event::PlayerStartDestroyBlockEvent>
{
    EventAPIs(PlayerStartDestroyBlockEvent, ::Event::PlayerStartDestroyBlockEvent);

public:
    Property_Ptr(MC, Player, mPlayer);
    Property_Instance(MC, BlockInstance, mBlockInstance);
};

Class PlayerDestroyBlockEvent
    : public EventTemplate<PlayerDestroyBlockEvent, ::Event::PlayerDestroyBlockEvent>
{
    EventAPIs(PlayerDestroyBlockEvent, ::Event::PlayerDestroyBlockEvent);

public:
    Property_Ptr(MC, Player, mPlayer);
    Property_Instance(MC, BlockInstance, mBlockInstance);
};

Class PlayerPlaceBlockEvent
    : public EventTemplate<PlayerPlaceBlockEvent, ::Event::PlayerPlaceBlockEvent>
{
    EventAPIs(PlayerPlaceBlockEvent, ::Event::PlayerPlaceBlockEvent);

public:
    Property_Ptr(MC, Player, mPlayer);
    Property_Instance(MC, BlockInstance, mBlockInstance);
};

Class PlayerOpenContainerEvent
    : public EventTemplate<PlayerOpenContainerEvent, ::Event::PlayerOpenContainerEvent>
{
    EventAPIs(PlayerOpenContainerEvent, ::Event::PlayerOpenContainerEvent);

public:
    Property_Ptr(MC, Player, mPlayer);
    Property_Instance(MC, BlockInstance, mBlockInstance);
    Property_Ptr(MC, Container, mContainer);
};

Class PlayerCloseContainerEvent
    : public EventTemplate<PlayerCloseContainerEvent, ::Event::PlayerCloseContainerEvent>
{
    EventAPIs(PlayerCloseContainerEvent, ::Event::PlayerCloseContainerEvent);

public:
    Property_Ptr(MC, Player, mPlayer);
    Property_Instance(MC, BlockInstance, mBlockInstance);
    Property_Ptr(MC, Container, mContainer);
};

Class PlayerInventoryChangeEvent
    : public EventTemplate<PlayerInventoryChangeEvent, ::Event::PlayerInventoryChangeEvent>
{
    EventAPIs(PlayerInventoryChangeEvent, ::Event::PlayerInventoryChangeEvent);

public:
    Property_Ptr(MC, Player, mPlayer);
    Property(int, mSlot);
    Property_Ptr(MC, ItemStack, mPreviousItemStack);
    Property_Ptr(MC, ItemStack, mNewItemStack);
};

Class PlayerMoveEvent
    : public EventTemplate<PlayerMoveEvent, ::Event::PlayerMoveEvent>
{
    EventAPIs(PlayerMoveEvent, ::Event::PlayerMoveEvent);

public:
    Property_Ptr(MC, Player, mPlayer);
    Property_Instance(MC, Vec3, mPos);
};

Class PlayerSprintEvent
    : public EventTemplate<PlayerSprintEvent, ::Event::PlayerSprintEvent>
{
    EventAPIs(PlayerSprintEvent, ::Event::PlayerSprintEvent);

public:
    Property_Ptr(MC, Player, mPlayer);
    Property(bool, mIsSprinting);
};

Class PlayerSetArmorEvent
    : public EventTemplate<PlayerSetArmorEvent, ::Event::PlayerSetArmorEvent>
{
    EventAPIs(PlayerSetArmorEvent, ::Event::PlayerSetArmorEvent);

public:
    Property_Ptr(MC, Player, mPlayer);
    Property(int, mSlot);
    Property_Ptr(MC, ItemStack, mArmorItem);
};

Class PlayerUseRespawnAnchorEvent
    : public EventTemplate<PlayerUseRespawnAnchorEvent, ::Event::PlayerUseRespawnAnchorEvent>
{
    EventAPIs(PlayerUseRespawnAnchorEvent, ::Event::PlayerUseRespawnAnchorEvent);

public:
    Property_Ptr(MC, Player, mPlayer);
    Property_Instance(MC, BlockInstance, mBlockInstance);
};

Class PlayerOpenContainerScreenEvent
    : public EventTemplate<PlayerOpenContainerScreenEvent, ::Event::PlayerOpenContainerScreenEvent>
{
    EventAPIs(PlayerOpenContainerScreenEvent, ::Event::PlayerOpenContainerScreenEvent);

public:
    Property_Ptr(MC, Player, mPlayer);
};

Class PlayerUseFrameBlockEvent
    : public EventTemplate<PlayerUseFrameBlockEvent, ::Event::PlayerUseFrameBlockEvent>
{
    EventAPIs(PlayerUseFrameBlockEvent, ::Event::PlayerUseFrameBlockEvent);

public:
    enum class Type
    {
        Use,
        Attack
    };
    Property_Enum(Type, ::Event::PlayerUseFrameBlockEvent::Type, mType);
    Property_Ptr(MC, Player, mPlayer);
    Property_Instance(MC, BlockInstance, mBlockInstance);
};

Class PlayerScoreChangedEvent
    : public EventTemplate<PlayerScoreChangedEvent, ::Event::PlayerScoreChangedEvent>
{
    EventAPIs(PlayerScoreChangedEvent, ::Event::PlayerScoreChangedEvent);

public:
    Property_Ptr(MC, Player, mPlayer);
    Property(int, mScore);
    Property_Ptr(MC, Objective, mObjective);
    Property_Ptr(MC, ScoreboardId, mScoreboardId);
};

Class PlayerExperienceAddEvent
    : public EventTemplate<PlayerExperienceAddEvent, ::Event::PlayerExperienceAddEvent>
{
    EventAPIs(PlayerExperienceAddEvent, ::Event::PlayerExperienceAddEvent);

public:
    Property_Ptr(MC, Player, mPlayer);
    Property(int, mExp);
};


///////////////////////////// Block Events /////////////////////////////

Class BlockInteractedEvent
    : public EventTemplate<BlockInteractedEvent, ::Event::BlockInteractedEvent>
{
    EventAPIs(BlockInteractedEvent, ::Event::BlockInteractedEvent);

public:
    Property_Instance(MC, BlockInstance, mBlockInstance);
    Property_Ptr(MC, Player, mPlayer);
};

Class BlockChangedEvent
    : public EventTemplate<BlockChangedEvent, ::Event::BlockChangedEvent>
{
    EventAPIs(BlockChangedEvent, ::Event::BlockChangedEvent);

public:
    Property_Instance(MC, BlockInstance, mPreviousBlockInstance);
    Property_Instance(MC, BlockInstance, mNewBlockInstance);
};

Class BlockExplodedEvent
    : public EventTemplate<BlockExplodedEvent, ::Event::BlockExplodedEvent>
{
    EventAPIs(BlockExplodedEvent, ::Event::BlockExplodedEvent);

public:
    Property_Instance(MC, BlockInstance, mBlockInstance);
    Property_Ptr(MC, Actor, mExplodeSource);
};

Class FireSpreadEvent
    : public EventTemplate<FireSpreadEvent, ::Event::FireSpreadEvent>
{
    EventAPIs(FireSpreadEvent, ::Event::FireSpreadEvent);

public:
    Property_Instance(MC, BlockPos, mTarget);
    Property(int, mDimensionId);
};

Class ContainerChangeEvent
    : public EventTemplate<ContainerChangeEvent, ::Event::ContainerChangeEvent>
{
    EventAPIs(ContainerChangeEvent, ::Event::ContainerChangeEvent);

public:
    Property_Ptr(MC, Player, mPlayer);
    Property_Ptr(MC, Actor, mActor);
    Property_Instance(MC, BlockInstance, mBlockInstance);
    Property_Ptr(MC, Container, mContainer);
    Property(int, mSlot);
    Property_Ptr(MC, ItemStack, mPreviousItemStack);
    Property_Ptr(MC, ItemStack, mNewItemStack);
};

Class ProjectileHitBlockEvent
    : public EventTemplate<ProjectileHitBlockEvent, ::Event::ProjectileHitBlockEvent>
{
    EventAPIs(ProjectileHitBlockEvent, ::Event::ProjectileHitBlockEvent);

public:
    Property_Instance(MC, BlockInstance, mBlockInstance);
    Property_Ptr(MC, Actor, mSource);
};

Class RedStoneUpdateEvent
    : public EventTemplate<RedStoneUpdateEvent, ::Event::RedStoneUpdateEvent>
{
    EventAPIs(RedStoneUpdateEvent, ::Event::RedStoneUpdateEvent);

public:
    Property_Instance(MC, BlockInstance, mBlockInstance);
    Property(int, mRedStonePower);
    Property(int, mIsActivated);
};

Class HopperSearchItemEvent
    : public EventTemplate<HopperSearchItemEvent, ::Event::HopperSearchItemEvent>
{
    EventAPIs(HopperSearchItemEvent, ::Event::HopperSearchItemEvent);

public:
    Property(int, isMinecart);
    Property_Instance(MC, BlockInstance, mHopperBlock);
    Property_Instance(MC, Vec3, mMinecartPos);
    Property(int, mDimensionId);
};

Class HopperPushOutEvent
    : public EventTemplate<HopperPushOutEvent, ::Event::HopperPushOutEvent>
{
    EventAPIs(HopperPushOutEvent, ::Event::HopperPushOutEvent);

public:
    Property_Instance(MC, Vec3, mPos);
    Property(int, mDimensionId);
};

Class PistonTryPushEvent
    : public EventTemplate<PistonTryPushEvent, ::Event::PistonTryPushEvent>
{
    EventAPIs(PistonTryPushEvent, ::Event::PistonTryPushEvent);

public:
    Property_Instance(MC, BlockInstance, mPistonBlockInstance);
    Property_Instance(MC, BlockInstance, mTargetBlockInstance);
};

Class PistonPushEvent
    : public EventTemplate<PistonPushEvent, ::Event::PistonPushEvent>
{
    EventAPIs(PistonPushEvent, ::Event::PistonPushEvent);

public:
    Property_Instance(MC, BlockInstance, mPistonBlockInstance);
    Property_Instance(MC, BlockInstance, mTargetBlockInstance);
};

Class FarmLandDecayEvent
    : public EventTemplate<FarmLandDecayEvent, ::Event::FarmLandDecayEvent>
{
    EventAPIs(FarmLandDecayEvent, ::Event::FarmLandDecayEvent);

public:
    Property_Instance(MC, BlockInstance, mBlockInstance);
    Property_Ptr(MC, Actor, mActor);
};

Class LiquidSpreadEvent
    : public EventTemplate<LiquidSpreadEvent, ::Event::LiquidSpreadEvent>
{
    EventAPIs(LiquidSpreadEvent, ::Event::LiquidSpreadEvent);

public:
    Property_Instance(MC, BlockInstance, mBlockInstance);
    Property_Instance(MC, BlockPos, mTarget);
    Property(int, mDimensionId);
};

Class CmdBlockExecuteEvent
    : public EventTemplate<CmdBlockExecuteEvent, ::Event::CmdBlockExecuteEvent>
{
    EventAPIs(CmdBlockExecuteEvent, ::Event::CmdBlockExecuteEvent);

public:
    Property_String(mCommand);
    Property(bool, mIsMinecart);
    Property_Instance(MC, BlockInstance, mBlockInstance);
    Property_Ptr(MC, Actor, mMinecart);
};

Class BlockExplodeEvent
    : public EventTemplate<BlockExplodeEvent, ::Event::BlockExplodeEvent>
{
    EventAPIs(BlockExplodeEvent, ::Event::BlockExplodeEvent);

public:
    Property_Instance(MC, BlockInstance, mBlockInstance);
    Property(float, mRadius);
    Property(float, mMaxResistance);
    Property(bool, mBreaking);
    Property(bool, mFire);
};

///////////////////////////// Entity Events /////////////////////////////

Class EntityExplodeEvent
    : public EventTemplate<EntityExplodeEvent, ::Event::EntityExplodeEvent>
{
    EventAPIs(EntityExplodeEvent, ::Event::EntityExplodeEvent);

public:
    Property_Ptr(MC, Actor, mActor);
    Property_Instance(MC, Vec3, mPos);
    Property_Ptr(MC, BlockSource, mDimension);
    Property(float, mRadius);
    Property(float, mMaxResistance);
    Property(bool, mBreaking);
    Property(bool, mFire);
};

Class MobHurtEvent
    : public EventTemplate<MobHurtEvent, ::Event::MobHurtEvent>
{
    EventAPIs(MobHurtEvent, ::Event::MobHurtEvent);

public:
    Property_Ptr(MC, Mob, mMob);
    Property_Ptr(MC, ActorDamageSource, mDamageSource);
    Property(float, mDamage);
};

Class MobDieEvent
    : public EventTemplate<MobDieEvent, ::Event::MobDieEvent>
{
    EventAPIs(MobDieEvent, ::Event::MobDieEvent);

public:
    Property_Ptr(MC, Mob, mMob);
    Property_Ptr(MC, ActorDamageSource, mDamageSource);
};

Class ProjectileHitEntityEvent
    : public EventTemplate<ProjectileHitEntityEvent, ::Event::ProjectileHitEntityEvent>
{
    EventAPIs(ProjectileHitEntityEvent, ::Event::ProjectileHitEntityEvent);

public:
    Property_Ptr(MC, Actor, mTarget);
    Property_Ptr(MC, Actor, mSource);
};

Class WitherBossDestroyEvent
    : public EventTemplate<WitherBossDestroyEvent, ::Event::WitherBossDestroyEvent>
{
    EventAPIs(WitherBossDestroyEvent, ::Event::WitherBossDestroyEvent);

public:
    Property_Ptr(MC, WitherBoss, mWitherBoss);
    Property_Instance(MC, AABB, mDestroyRange);
};

Class EntityRideEvent
    : public EventTemplate<EntityRideEvent, ::Event::EntityRideEvent>
{
    EventAPIs(EntityRideEvent, ::Event::EntityRideEvent);

public:
    Property_Ptr(MC, Actor, mRider);
    Property_Ptr(MC, Actor, mVehicle);
};

Class EntityStepOnPressurePlateEvent
    : public EventTemplate<EntityStepOnPressurePlateEvent, ::Event::EntityStepOnPressurePlateEvent>
{
    EventAPIs(EntityStepOnPressurePlateEvent, ::Event::EntityStepOnPressurePlateEvent);

public:
    Property_Ptr(MC, Actor, mActor);
    Property_Instance(MC, BlockInstance, mBlockInstance);
};

Class NpcCmdEvent
    : public EventTemplate<NpcCmdEvent, ::Event::NpcCmdEvent>
{
    EventAPIs(NpcCmdEvent, ::Event::NpcCmdEvent);

public:
    Property_Ptr(MC, Actor, mNpc);
    Property_String(mCommand);
    Property_Ptr(MC, Player, mPlayer);
};

Class ProjectileSpawnEvent
    : public EventTemplate<ProjectileSpawnEvent, ::Event::ProjectileSpawnEvent>
{
    EventAPIs(ProjectileSpawnEvent, ::Event::ProjectileSpawnEvent);

public:
    Property_Ptr(MC, Actor, mShooter);
    Property_Ptr(MC, ActorDefinitionIdentifier, mIdentifier);
    Property_String(mType);
};

Class ProjectileCreatedEvent
    : public EventTemplate<ProjectileCreatedEvent, ::Event::ProjectileCreatedEvent>
{
    EventAPIs(ProjectileCreatedEvent, ::Event::ProjectileCreatedEvent);

public:
    Property_Ptr(MC, Actor, mShooter);
    Property_Ptr(MC, Actor, mProjectile);
};

Class ArmorStandChangeEvent
    : public EventTemplate<ArmorStandChangeEvent, ::Event::ArmorStandChangeEvent>
{
    EventAPIs(ArmorStandChangeEvent, ::Event::ArmorStandChangeEvent);

public:
    Property_Ptr(MC, ArmorStand, mArmorStand);
    Property_Ptr(MC, Player, mPlayer);
    Property(int, mSlot);
};

Class ItemUseOnActorEvent
    : public EventTemplate<ItemUseOnActorEvent, ::Event::ItemUseOnActorEvent>
{
    EventAPIs(ItemUseOnActorEvent, ::Event::ItemUseOnActorEvent);

public:
    Property_Instance(MC, ActorRuntimeID, mTarget);
    Property(int, mInteractiveMode);
};

///////////////////////////// Other Events /////////////////////////////

Class PostInitEvent
    : public EventTemplate<PostInitEvent, ::Event::PostInitEvent>{
          EventAPIs(PostInitEvent, ::Event::PostInitEvent)};

Class ServerStartedEvent
    : public EventTemplate<ServerStartedEvent, ::Event::ServerStartedEvent>{
          EventAPIs(ServerStartedEvent, ::Event::ServerStartedEvent)};

Class ServerStoppedEvent
    : public EventTemplate<ServerStoppedEvent, ::Event::ServerStoppedEvent>{
          EventAPIs(ServerStoppedEvent, ::Event::ServerStoppedEvent)};

Class ConsoleCmdEvent
    : public EventTemplate<ConsoleCmdEvent, ::Event::ConsoleCmdEvent>
{
    EventAPIs(ConsoleCmdEvent, ::Event::ConsoleCmdEvent);

public:
    Property_String(mCommand);
};

Class RegCmdEvent
    : public EventTemplate<RegCmdEvent, ::Event::RegCmdEvent>
{
    EventAPIs(RegCmdEvent, ::Event::RegCmdEvent);

public:
    Property_Ptr(MC, CommandRegistry, mCommandRegistry);
};

Class ConsoleOutputEvent
    : public EventTemplate<ConsoleOutputEvent, ::Event::ConsoleOutputEvent>
{
    EventAPIs(ConsoleOutputEvent, ::Event::ConsoleOutputEvent);

public:
    Property_String(mOutput);
};

Class PlayerBedEnterEvent
    : public EventTemplate<PlayerBedEnterEvent, ::Event::PlayerBedEnterEvent>
{
    EventAPIs(PlayerBedEnterEvent, ::Event::PlayerBedEnterEvent);

public:
    Property_Ptr(MC, Player, mPlayer);
    Property_Ptr(MC, BlockInstance, mBlockInstance);
};

Class ScriptPluginManagerEvent
    : public EventTemplate<ScriptPluginManagerEvent, ::Event::ScriptPluginManagerEvent>
{
    EventAPIs(ScriptPluginManagerEvent, ::Event::ScriptPluginManagerEvent);

public:
    enum class Operation
    {
        Load,
        Unload,
        Reload
    };
    Property_Enum(Operation, ::Event::ScriptPluginManagerEvent::Operation, operation);
    Property_String(target);
    Property_String(otherInfo);
    Property_String(pluginExtention);
    Property(bool, success);
};

} // namespace LLNET::Event