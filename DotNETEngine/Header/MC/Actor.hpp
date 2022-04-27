#pragma once
#include <MC/Actor.hpp>

#include <DotNETEngine/Main/ClassTemplate.h>

namespace MC
{
ref class Vec2;
ref class BlockPos;
ref class Vec3;
ref class UserEntityIdentifierComponent;
ref class CompoundTag;
ref class BlockSource;
ref class BlockPos;
ref struct Tick;
ref class ItemStack;
ref class MobEffectInstance;
} // namespace MC

#include "BlockInstance.hpp"
#include "MobEffect.hpp"

namespace MC
{
public
ref class Actor : ClassTemplate<Actor, ::Actor>
{
public:
    __ctor(Actor, ::Actor);

    inline List<System::String ^> ^ GetAllTags();
    inline BlockInstance ^ GetBlockFromViewVector();
    inline BlockInstance ^ GetBlockFromViewVector(bool includeLiquid);
    inline BlockInstance ^ GetBlockFromViewVector(bool includeLiquid, bool solidOnly);
    inline BlockInstance ^ GetBlockFromViewVector(bool includeLiquid, bool solidOnly, float maxDistance);
    inline BlockInstance ^ GetBlockFromViewVector(bool includeLiquid, bool solidOnly, float maxDistance, bool ignoreBorderBlocks);
    inline BlockInstance ^ GetBlockFromViewVector(bool includeLiquid, bool solidOnly, float maxDistance, bool ignoreBorderBlocks, bool fullOnly);
    inline BlockInstance ^ GetBlockFromViewVector(FaceID face);
    inline BlockInstance ^ GetBlockFromViewVector(FaceID face, bool includeLiquid);
    inline BlockInstance ^ GetBlockFromViewVector(FaceID face, bool includeLiquid, bool solidOnly);
    inline BlockInstance ^ GetBlockFromViewVector(FaceID face, bool includeLiquid, bool solidOnly, float maxDistance);
    inline BlockInstance ^ GetBlockFromViewVector(FaceID face, bool includeLiquid, bool solidOnly, float maxDistance, bool ignoreBorderBlocks);
    inline BlockInstance ^ GetBlockFromViewVector(FaceID face, bool includeLiquid, bool solidOnly, float maxDistance, bool ignoreBorderBlocks, bool fullOnly);
    inline Actor ^ GetActorFromViewVector(float maxDistance);
    inline bool SetOnFire(int time, bool isEffect);
    inline bool StopFire();
    inline bool HasTag(System::String ^ tag);
    inline bool HurtEntity(float damage);
    inline bool Teleport(Vec3 ^ pos, int dimid);
    inline bool RefreshActorData();
    inline bool AddEffect(MobEffect::EffectType type, int tick, int level, bool ambient, bool showParticles, bool showAnimation);
    inline bool AddEffect(MobEffect::EffectType type, int tick, int level, bool ambient, bool showParticles);
    inline bool AddEffect(MobEffect::EffectType type, int tick, int level, bool ambient);
    inline bool AddEffect(MobEffect::EffectType type, int tick, int level);

    property UserEntityIdentifierComponent ^ UserEntityIdentifierComponent { MC::UserEntityIdentifierComponent ^ get(); };
    property CompoundTag ^ Nbt {CompoundTag ^ get();void set(CompoundTag ^); };
    property BlockPos ^ BlockPos { MC::BlockPos ^ get(); };
    property BlockInstance ^ BlockStandingOn { BlockInstance ^ get(); };
    property System::String ^ TypeName { System::String ^ get(); };
    property Vec3 ^ Position { Vec3 ^ get(); };
    property BlockSource ^ Blocksource { BlockSource ^ get(); };
    property Vec2 ^ Direction { Vec2 ^ get(); };
    // property ActorUniqueID ^ ActorUniqueId { ActorUniqueID ^ get(); };
    property Vec3 ^ CameraPos { Vec3 ^ get(); };
    property Tick ^ LastTick { Tick ^ get(); };
    property ItemStack ^ HandSlot { ItemStack ^ get(); };
    inline bool Rename(System::String ^ name);

    property bool IsSimulatedPlayer
    {
        bool get();
    };
    property bool IsPlayer
    {
        bool get();
    };
    property bool IsItemActor
    {
        bool get();
    };
    property bool IsOnGround
    {
        bool get();
    }

#ifdef INCLUDE_MCAPI


    property int OnDeathExperience
    {
        int get();
    }

    property MC::Vec3 ^ Pos {
        MC::Vec3 ^ get();
        void set(MC::Vec3 ^);
    }

        property bool IsRuntimePredictedMovementEnabled
    {
        bool get();
    }

    property MC::Vec3 ^ PosOld {
        MC::Vec3 ^ get();
    }

        property MC::Vec3 ^
        FiringPos {
            MC::Vec3 ^ get();
        }

        property float YawSpeedInDegreesPerSecond
    {
        float get();
    }

    property bool IsFireImmune
    {
        bool get();
    }

    property float RidingHeight
    {
        float get();
    }

    property bool IsInWall
    {
        bool get();
    }

    property bool Invisible
    {
        bool get();
        void set(bool);
    }

    property ::System::String ^ NameTag {
        ::System::String ^ get();
        void set(::System::String ^);
    }

        property unsigned long long NameTagAsHash
    {
        unsigned long long get();
    }

    property ::System::String ^ FormattedNameTag {
        ::System::String ^ get();
    }

        property ::System::String ^
        ScoreTag {
            ::System::String ^ get();
            void set(::System::String ^);
        }

        property bool IsInWater
    {
        bool get();
    }

    property bool HasEnteredWater
    {
        bool get();
    }

    property bool IsInLava
    {
        bool get();
    }

    property bool IsOverWater
    {
        bool get();
    }

    property float CameraOffset
    {
        float get();
    }

    property float ShadowHeightOffs
    {
        float get();
    }

    property float ShadowRadius
    {
        float get();
    }

    property bool IsImmobile
    {
        bool get();
    }

    property bool IsSilent
    {
        bool get();
    }

    property bool IsPickable
    {
        bool get();
    }

    property bool Sleeping
    {
        bool get();
        void set(bool);
    }

    property bool Sneaking
    {
        bool get();
        void set(bool);
    }

    property bool IsBlocking
    {
        bool get();
    }

    property bool IsAlive
    {
        bool get();
    }

    property bool IsOnFire
    {
        bool get();
    }

    property bool IsOnHotBlock
    {
        bool get();
    }

    property bool IsSurfaceMob
    {
        bool get();
    }

    property bool IsAffectedByWaterBottle
    {
        bool get();
    }

    property MC::Actor ^ Target {
        MC::Actor ^ get();
        void set(MC::Actor ^);
    }

        property MC::Actor ^
        FindAttackTarget {
            MC::Actor ^ get();
        }

        property int EquipmentCount
    {
        int get();
    }

    property bool Sitting
    {
        bool get();
        void set(bool);
    }

    property int InventorySize
    {
        int get();
    }

    property int EquipSlots
    {
        int get();
    }

    property int ChestSlots
    {
        int get();
    }

    property bool Standing
    {
        bool get();
        void set(bool);
    }

    property bool CanPowerJump
    {
        bool get();
        void set(bool);
    }

    property bool IsJumping
    {
        bool get();
    }

    property bool Enchanted
    {
        bool get();
        void set(bool);
    }

    property float PickRadius
    {
        float get();
    }

    property ::System::Collections::Generic::List<MC::ItemStack ^> ^ AllArmor {
        ::System::Collections::Generic::List<MC::ItemStack ^> ^ get();
    }

        property MC::ActorUniqueID ^
        SourceUniqueID {
            MC::ActorUniqueID ^ get();
        }

        property bool IsWearingLeatherArmor
    {
        bool get();
    }

    property int PortalCooldown
    {
        int get();
    }

    property int PortalWaitTime
    {
        int get();
    }

    property MC::ActorUniqueID ^ ControllingPlayer {
        MC::ActorUniqueID ^ get();
    }

        property bool InCaravan
    {
        bool get();
    }

    property bool IsClientSide
    {
        bool get();
    }

    property int DeathTime
    {
        int get();
    }

    property bool IsInvertedHealAndHarm
    {
        bool get();
    }

    property float MapDecorationRotation
    {
        float get();
    }

    property float YHeadRot
    {
        float get();
    }

    property bool IsWorldBuilder
    {
        bool get();
    }

    property bool IsCreative
    {
        bool get();
    }

    property bool IsAdventure
    {
        bool get();
    }

    property bool DamageNearbyMobs
    {
        bool get();
        void set(bool);
    }

    property bool UpdateWaterState
    {
        bool get();
    }

    property MC::Vec3 ^ RandomHeartPos {
        MC::Vec3 ^ get();
    }

        property MC::Vec3 ^
        CalcCenterPos {
            MC::Vec3 ^ get();
        }

        property bool CanFly
    {
        bool get();
        void set(bool);
    }

    property int ActiveEffectCount
    {
        int get();
    }

    property ::System::Collections::Generic::List<MC::MobEffectInstance ^> ^ AllEffects {
        ::System::Collections::Generic::List<MC::MobEffectInstance ^> ^ get();
    }

        property MC::BlockPos ^
        BlockTarget {
            MC::BlockPos ^ get();
            void set(MC::BlockPos ^);
        }

        property bool CanPickupItems
    {
        bool get();
    }

    property bool ChainedDamageEffects
    {
        bool get();
        void set(bool);
    }

    property bool CollidableMobNear
    {
        bool get();
        void set(bool);
    }

    property int ControllingSeat
    {
        int get();
        void set(int);
    }

    property float CurrentSwimAmount
    {
        float get();
    }

    property MC::Actor ^ FirstPassenger {
        MC::Actor ^ get();
    }

        property int Health
    {
        int get();
    }

    property int HurtDir
    {
        int get();
        void set(int);
    }

    property int HurtTime
    {
        int get();
        void set(int);
    }

    property int JumpDuration
    {
        int get();
        void set(int);
    }

    property int LastHurtByMobTime
    {
        int get();
    }

    property int LastHurtByMobTimestamp
    {
        int get();
    }

    property MC::ActorDamageCause LastHurtCause
    {
        MC::ActorDamageCause get();
    }

    property float LastHurtDamage
    {
        float get();
    }

    property int LastHurtMobTimestamp
    {
        int get();
    }

    property unsigned long long LastHurtTimestamp
    {
        unsigned long long get();
    }

    property MC::ActorUniqueID ^ LeashHolder {
        MC::ActorUniqueID ^ get();
        void set(MC::ActorUniqueID ^);
    }

        property int LimitedLifetimeTicks
    {
        int get();
        void set(int);
    }

    // property ::System::Collections::Generic::List<MC::ActorLink ^> ^ Links {
    //     ::System::Collections::Generic::List<MC::ActorLink ^> ^ get();
    // }

    property int MarkVariant
    {
        int get();
        void set(int);
    }

    property int MaxHealth
    {
        int get();
    }

    property MC::ActorUniqueID ^ OwnerId {
        MC::ActorUniqueID ^ get();
    }

        property int PersistingTradeRiches
    {
        int get();
    }

    property float Radius
    {
        float get();
    }

    property MC::Vec2 ^ Rotation {
        MC::Vec2 ^ get();
    }

        property MC::ActorRuntimeID ^
        RuntimeID {
            MC::ActorRuntimeID ^ get();
            void set(MC::ActorRuntimeID ^);
        }

        property int ShakeTime
    {
        int get();
        void set(int);
    }

    property int SkinID
    {
        int get();
        void set(int);
    }

    property float SpeedInMetersPerSecond
    {
        float get();
    }

    property int Strength
    {
        int get();
        void set(int);
    }

    property int StrengthMax
    {
        int get();
        void set(int);
    }

    property int StructuralIntegrity
    {
        int get();
        void set(int);
    }

    property MC::ActorUniqueID ^ TargetId {
        MC::ActorUniqueID ^ get();
    }

        property bool TradeInterest
    {
        bool get();
        void set(bool);
    }

    property MC::ActorUniqueID ^ UniqueID {
        MC::ActorUniqueID ^ get();
        void set(MC::ActorUniqueID ^);
    }

        property int Variant
    {
        int get();
        void set(int);
    }

    property MC::Actor ^ Vehicle {
        MC::Actor ^ get();
    }

        property MC::Actor ^
        VehicleRoot {
            MC::Actor ^ get();
        }

        property MC::ActorRuntimeID ^
        VehicleRuntimeID {
            MC::ActorRuntimeID ^ get();
        }

        property float VerticalSpeedInMetersPerSecond
    {
        float get();
    }

    property bool HasAnyEffects
    {
        bool get();
    }

    property bool HasAnyVisibleEffects
    {
        bool get();
    }

    property bool HasDimension
    {
        bool get();
    }

    property bool HasFishingHook
    {
        bool get();
    }

    property bool HasLevel
    {
        bool get();
    }

    property bool HasPassenger
    {
        bool get();
    }

    property bool HasPersistingTrade
    {
        bool get();
    }

    property bool HasPlayerPassenger
    {
        bool get();
    }

    property bool HasPriorityAmmunition
    {
        bool get();
    }

    property bool HasRuntimeID
    {
        bool get();
    }

    property bool HasSaddle
    {
        bool get();
    }

    property bool HasTags
    {
        bool get();
    }

    property bool HasTeleported
    {
        bool get();
    }

    property bool HasTickingArea
    {
        bool get();
    }

    property bool HasTotemEquipped
    {
        bool get();
    }

    property bool HasUniqueID
    {
        bool get();
    }

    property bool InDownwardFlowingLiquid
    {
        bool get();
    }

    property bool IsAngry
    {
        bool get();
    }

    property bool Autonomous
    {
        bool get();
        void set(bool);
    }

    property bool IsBaby
    {
        bool get();
    }

    property bool BreakingObstruction
    {
        bool get();
        void set(bool);
    }

    property bool IsBribed
    {
        bool get();
    }

    property bool Charged
    {
        bool get();
        void set(bool);
    }

    property bool IsChested
    {
        bool get();
    }

    property bool Climbing
    {
        bool get();
        void set(bool);
    }

    property bool IsControlledByLocalInstance
    {
        bool get();
    }

    property bool DoorBreaker
    {
        bool get();
        void set(bool);
    }

    property bool DoorOpener
    {
        bool get();
        void set(bool);
    }

    property bool Global
    {
        bool get();
        void set(bool);
    }

    property bool IsIgnited
    {
        bool get();
    }

    property bool IsImmersedInWater
    {
        bool get();
    }

    property bool IsInClouds
    {
        bool get();
    }

    property bool IsInContactWithWater
    {
        bool get();
    }

    property bool IsInLove
    {
        bool get();
    }

    property bool IsInPrecipitation
    {
        bool get();
    }

    property bool IsInRain
    {
        bool get();
    }

    property bool IsInScaffolding
    {
        bool get();
    }

    property bool IsInSnow
    {
        bool get();
    }

    property bool IsInThunderstorm
    {
        bool get();
    }

    property bool IsInWaterOrRain
    {
        bool get();
    }

    property bool IsInWorld
    {
        bool get();
    }

    property bool IsInsidePortal
    {
        bool get();
    }

    property bool LayingDown
    {
        bool get();
        void set(bool);
    }

    property bool IsLeashed
    {
        bool get();
    }

    property bool MovedToLimbo
    {
        bool get();
        void set(bool);
    }

    property bool Moving
    {
        bool get();
        void set(bool);
    }

    property bool IsOrphan
    {
        bool get();
    }

    property bool IsOutOfControl
    {
        bool get();
    }

    property bool IsOverScaffolding
    {
        bool get();
    }

    property bool IsPacified
    {
        bool get();
    }

    property bool IsPersistent
    {
        bool get();
    }

    property bool IsPlayingDead
    {
        bool get();
    }

    property bool IsPowered
    {
        bool get();
    }

    property bool IsRegionValid
    {
        bool get();
    }

    property bool IsRemoved
    {
        bool get();
    }

    property bool Resting
    {
        bool get();
        void set(bool);
    }

    property bool IsSafeToSleepNear
    {
        bool get();
    }

    property bool IsSheared
    {
        bool get();
    }

    property bool IsStackable
    {
        bool get();
    }

    property bool Swimmer
    {
        bool get();
        void set(bool);
    }

    property bool IsSwimming
    {
        bool get();
    }

    property bool IsTame
    {
        bool get();
    }

    property bool IsTickingEntity
    {
        bool get();
    }

    property bool IsTouchingDamageBlock
    {
        bool get();
    }

    property bool IsTrading
    {
        bool get();
    }

    property bool IsTrusting
    {
        bool get();
    }

    property bool IsUseNewTradeScreen
    {
        bool get();
    }

    property bool WASDControlled
    {
        bool get();
        void set(bool);
    }

    property bool Walker
    {
        bool get();
        void set(bool);
    }

    property MC::ActorUniqueID ^ LovePartnerId {
        MC::ActorUniqueID ^ get();
    }

        virtual void SetLastHurtMob(MC::Actor ^ _0);

    virtual void OutOfWorld();

    virtual void ServerInitItemStackIds();

    virtual void DoInitialMove();

    virtual void Reset();

    virtual void Remove();

    virtual MC::Vec3 ^ GetPosExtrapolated(float _0);

    virtual void SetRot(MC::Vec2 ^ _0);

    virtual void Move(MC::Vec3 ^ _0);

    virtual MC::Vec3 ^ GetInterpolatedRidingPosition(float _0);

    virtual float GetInterpolatedBodyRot(float _0);

    virtual float GetInterpolatedHeadRot(float _0);

    virtual float GetInterpolatedBodyYaw(float _0);

    virtual float GetInterpolatedWalkAnimSpeed(float _0);

    virtual MC::Vec3 ^ GetInterpolatedRidingOffset(float _0);

    virtual void UpdateEntityInside(MC::AABB ^ _0);

    virtual void UpdateEntityInside();

    virtual void UnkVfn41();

    virtual void TeleportTo(MC::Vec3 ^ _0, bool _1, int _2, int _3);

    virtual bool TryTeleportTo(MC::Vec3 ^ _0, bool _1, bool _2, int _3, int _4);

    virtual void ChorusFruitTeleport(MC::Vec3 ^ _0);

    virtual void LerpMotion(MC::Vec3 ^ _0);

    virtual void NormalTick();

    virtual void BaseTick();

    virtual void VehicleTick();

    virtual void PositionPassenger(MC::Actor ^ _0, float _1);

    virtual bool StartRiding(MC::Actor ^ _0);

    virtual void AddPassenger(MC::Actor ^ _0);

    virtual void FlagPassengerToRemove(MC::Actor ^ _0);

    virtual bool Intersects(MC::Vec3 ^ _0, MC::Vec3 ^ _1);

    virtual bool CanShowNameTag();

    virtual void UnkVfn61();

    virtual void SetNameTagVisible(bool _0);

    virtual void UnkVfn68();

    virtual void SetBlockMovementSlowdownMultiplier(MC::Vec3 ^ _0);

    virtual void ResetBlockMovementSlowdownMultiplier();

    virtual MC::Vec3 ^ GetHeadLookVector(float _0);

    virtual void UnkVfn82();

    virtual bool CanSee(MC::Actor ^ _0);

    virtual bool CanSee(MC::Vec3 ^ _0);

    virtual bool IsSkyLit(float _0);

    virtual float GetBrightness(float _0);

    virtual void UnkVfn87();

    virtual void OnAboveBubbleColumn(bool _0);

    virtual void OnInsideBubbleColumn(bool _0);

    virtual void UnkVfn94();

    virtual void UnkVfn97();

    virtual void UnkVfn104();

    virtual void UnkVfn106();

    virtual void UnkVfn107();

    virtual void UnkVfn108();

    virtual bool CanAttack(MC::Actor ^ _0, bool _1);

    virtual bool IsValidTarget(MC::Actor ^ _0);

    virtual bool Attack(MC::Actor ^ _0, MC::ActorDamageCause _1);

    virtual void PerformRangedAttack(MC::Actor ^ _0, float _1);

    virtual void AdjustDamageAmount([::System::Runtime::InteropServices::In, ::System::Runtime::InteropServices::Out ] int % _0);

    virtual void SetOwner(MC::ActorUniqueID ^ _0);

    virtual void OnTame();

    virtual void OnFailedTame();

    virtual void VehicleLanded(MC::Vec3 ^ _0, MC::Vec3 ^ _1);

    virtual bool ShouldRender();

    virtual void PlayAmbientSound();

    virtual void AnimateHurt();

    virtual bool DoFireHurt(int _0);

    virtual void OnLightningHit();

    virtual void Feed(int _0);

    virtual void Despawn();

    virtual void Killed(MC::Actor ^ _0);

    virtual void AwardKillScore(MC::Actor ^ _0, int _1);

    virtual bool ConsumeTotem();

    virtual void ThawFreezeEffect();

    virtual bool CanFreeze();

    virtual void HandleInsidePortal(MC::BlockPos ^ _0);

    virtual bool CanChangeDimensions();

    virtual void UnkVfn182();

    virtual void CheckFallDamage(float _0, bool _1);

    virtual void HandleFallDistanceOnServer(float _0, float _1, bool _2);

    virtual void OnSynchedFlagUpdate(int _0, long long _1, long long _2);

    virtual void OnSynchedDataUpdate(int _0);

    virtual bool CanAddPassenger(MC::Actor ^ _0);

    virtual bool CanBePulledIntoVehicle();

    virtual void UnkVfn196();

    virtual void TickLeash();

    virtual void SendMotionPacketIfNeeded();

    virtual bool CanSynchronizeNewEntity();

    virtual void StopRiding(bool _0, bool _1, bool _2);

    virtual void StartSwimming();

    virtual void StopSwimming();

    virtual void BuildDebugInfo(::System::String ^ _0);

    virtual void Heal(int _0);

    virtual bool CanBeAffected(int _0);

    virtual bool CanBeAffected(MC::MobEffectInstance ^ _0);

    virtual bool CanBeAffectedByArrow(MC::MobEffectInstance ^ _0);

    virtual void OnEffectAdded(MC::MobEffectInstance ^ _0);

    virtual void OnEffectUpdated(MC::MobEffectInstance ^ _0);

    virtual void OnEffectRemoved(MC::MobEffectInstance ^ _0);

    virtual void Swing();

    virtual void UnkVfn221();

    virtual void UnkVfn222();

    virtual void GetDebugText(::System::Collections::Generic::List<::System::String ^> ^ _0);

    virtual float GetPassengerYRotation(MC::Actor ^ _0);

    virtual void SetAuxValue(int _0);

    virtual void SetSize(float _0, float _1);

    virtual void OnOrphan();

    virtual void Wobble();

    virtual bool WasHurt();

    virtual void StartSpinAttack();

    virtual void StopSpinAttack();

    virtual void UnkVfn242();

    virtual void ReloadLootTable();

    virtual void UnkVfn245();

    virtual void Kill();

    virtual bool ShouldDropDeathLoot();

    virtual bool ShouldTick();

    virtual float GetNextStep(float _0);

    virtual void InterpolatorTick();

    virtual bool ShouldTryMakeStepSound();

    virtual void UnkVfn257();

    virtual void MarkHurt();

    virtual void UnkVfn265();

    virtual void CheckInsideBlocks(float _0);

    virtual void PushOutOfBlocks(MC::Vec3 ^ _0);

    virtual void DoWaterSplashEffect();

    virtual void SpawnTrailBubbles();

    virtual void UpdateInsideBlock();

    virtual void RemovePassenger(MC::ActorUniqueID ^ _0, bool _1, bool _2, bool _3);

    virtual void OnSizeUpdated();

    void SendDirtyActorData();

    void AddDefinitionGroup(::System::String ^ _0);

    void AddEffect(MC::MobEffectInstance ^ _0);

    bool AddTag(::System::String ^ _0);

    void BuildDebugGroupInfo(::System::String ^ _0);

    MC::Vec3 ^ BuildForward();

    void Burn(int _0, bool _1);

    void CacheComponentData();

    float CalculateAttackDamage(MC::Actor ^ _0);

    bool CanAscendCurrentBlockByJumping();

    bool CanBeginOrContinueClimbingLadder();

    bool CanCurrentlySwim();

    bool CanDescendBlockBelowByCrouching();

    bool CanMate(MC::Actor ^ _0);

    void CelebrateHunt(int _0, bool _1);

    void ClearFishingHookID();

    void DeregisterTagsFromLevelCache();

    float DistanceSqrToBlockPosCenter(MC::BlockPos ^ _0);

    float DistanceTo(MC::Actor ^ _0);

    float DistanceTo(MC::Vec3 ^ _0);

    float DistanceToSqr(MC::Actor ^ _0);

    float DistanceToSqr(MC::Vec3 ^ _0);

    void DropLeash(bool _0, bool _1);

    MC::BlockPos ^ GetBlockPosCurrentlyStandingOn(MC::Actor ^ _0);

    MC::MobEffectInstance ^ GetEffect(MC::MobEffect ^ _0);

    bool GetFirstAvailableSeatPos(MC::Actor ^ _0, MC::Vec3 ^ _1);

    MC::Vec3 ^ GetInterpolatedPosition(float _0);

    MC::Vec2 ^ GetInterpolatedRotation(float _0);

    int GetPassengerIndex(MC::Actor ^ _0);

    float GetSwimAmount(float _0);

    MC::Vec3 ^ GetViewVector(float _0);

    bool HasBeenHurtByMobInLastTicks(int _0);

    bool HasDefinitionGroup(::System::String ^ _0);

    bool HasEffect(MC::MobEffect ^ _0);

    void HealEffects(int _0);

    void InitActorProperties();

    bool IsInsideBorderBlock(float _0);

    bool IsPassenger(MC::ActorUniqueID ^ _0);

    bool IsPassenger(MC::Actor ^ _0);

    bool IsRiding(MC::Actor ^ _0);

    bool IsRiding();

    void LerpTo(MC::Vec3 ^ _0, MC::Vec2 ^ _1, int _2);

    void LerpTo(MC::Vec3 ^ _0, MC::Vec2 ^ _1, float _2, int _3);

    void LerpToRotation(MC::Vec2 ^ _0, int _1);

    void MigrateUniqueID(MC::ActorUniqueID ^ _0);

    void MoveBBs(MC::Vec3 ^ _0);

    void MoveRelative(float _0, float _1, float _2, float _3);

    void MoveTo(MC::Vec3 ^ _0, MC::Vec2 ^ _1);

    void OnAffectedByWaterBottle();

    bool OnClimbableBlock();

    bool OnHoverableBlock();

    void OnOnewayCollision(MC::AABB ^ _0);

    static bool operator==(MC::Actor ^ __op, MC::Actor ^ _0);

    virtual bool Equals(::System::Object ^ obj) override;

    void PositionAllPassengers();

    bool PullInEntity(MC::Actor ^ _0);

    void RefreshComponents();

    void Reload();

    void ReloadProperties();

    void RemoveAllEffects();

    void RemoveAllPassengers(bool _0, bool _1);

    void RemoveEffect(int _0);

    void RemoveEffectParticles();

    void RemovePersistingTrade();

    bool RemoveTag(::System::String ^ _0);

    void ResetClientAnimations();

    void ResetRegion();

    void SendActorDefinitionEventTriggered(::System::String ^ _0);

    void SendMotionToServer();

    void SerializationSetHealth(int _0);

    void SetAABB(MC::AABB ^ _0);

    void SetAABBDim(MC::Vec2 ^ _0);

    void SetCanClimb(bool _0);

    void SetCollidableMob(bool _0);

    void SetDancing(bool _0);

    void SetFishingHookID(MC::ActorUniqueID ^ _0);

    void SetInLove(MC::Actor ^ _0);

    void SetInterpolation(bool _0);

    void SetLastHitBB(MC::Vec3 ^ _0, MC::Vec3 ^ _1);

    void SetPersistent();

    void SetPosDirectLegacy(MC::Vec3 ^ _0);

    void SetPosPrev(MC::Vec3 ^ _0);

    void SetPreviousPosRot(MC::Vec3 ^ _0, MC::Vec2 ^ _1);

    void SetSaddle(bool _0);

    void SetScared(bool _0);

    void SetStunned(bool _0);

    void SetTempted(bool _0);

    void SetVelocity(MC::Vec3 ^ _0);

    bool ShouldUpdateEffects();

    void SpawnBalloonPopParticles();

    void SpawnDeathParticles();

    void SpawnDustParticles(int _0);

    void SpawnTamingParticles(bool _0);

    void TeleportPassengersTo(MC::Vec3 ^ _0, int _1, int _2);

    void TickBlockDamage();

    //::System::Collections::Generic::List<MC::ItemDescriptor ^> ^ TryGetEquippableSlotAllowedItems(int _0);

    bool TryMoveChunks();

    void UpdateAnimationComponentOnServer();

    void UpdateBBFromDefinition();

    void UpdateDescription();

    void UpdateInvisibilityStatus();

    void UpdateTickingData();

    bool WasLastHitByPlayer();

    bool WasLoadedFromNBTThisFrame();

    static MC::Vec2 ^ GetInterpolatedRotation(MC::Vec2 ^ _0, MC::Vec2 ^ _1, float _2);

    static MC::Vec3 ^ GetViewVector(MC::Vec2 ^ _0, MC::Vec2 ^ _1, float _2);

    static property float DEFAULT_AMBIENT_SOUND_INTERVAL
    {
        float get();
    }

    static property float DEFAULT_AMBIENT_SOUND_INTERVAL_RANGE
    {
        float get();
    }

    static property MC::Vec3 ^ LAVA_AABB_SHRINK_AMOUNT {
        MC::Vec3 ^ get();
    }

        static property float LAVA_FLOW_STRENGTH_MULTIPLIER
    {
        float get();
    }

    static property int MAX_BYTE_CHARGE_AMOUNT
    {
        int get();
    }

    static property ::System::String ^ RIDING_TAG {
        ::System::String ^ get();
    }

        static property int TOTAL_AIR_SUPPLY
    {
        int get();
    }

    static property MC::Vec3 ^ WATER_AABB_SHRINK_AMOUNT {
        MC::Vec3 ^ get();
    }

        static property float WATER_FLOW_STRENGTH_MULTIPLIER
    {
        float get();
    }

#endif // INCLUDE_MCAPI
};
} // namespace MC
