#pragma once
#include <MC/WitherBoss.hpp>
#include "Types.hpp"
#include "Monster.hpp"

namespace MC
{
public
ref class WitherBoss : public Monster
{
public:
    __ctor_base(WitherBoss, ::WitherBoss, Monster);

#ifdef INCLUDE_MCAPI
    property int InvulnerableTicks
    {
        int get();
        void set(int);
    }

    property float OverlayAlpha
    {
        float get();
    }

    property bool HasAerialAttack
    {
        bool get();
    }

    property bool WantsToMove
    {
        bool get();
        void set(bool);
    }

    virtual void Remove() override;

    virtual bool isRuntimePredictedMovementEnabled() override;

    virtual MC::Vec3 ^ GetFiringPos();

    virtual void UnkVfn41() override;

    virtual bool StartRiding(MC::Actor ^ _0) override;

    virtual void UnkVfn61() override;

    virtual void UnkVfn68() override;

    virtual void SetBlockMovementSlowdownMultiplier(MC::Vec3 ^ _0) override;

    virtual float GetCameraOffset() override;

    virtual void UnkVfn82() override;

    virtual void UnkVfn87() override;

    virtual void UnkVfn94() override;

    virtual void UnkVfn97() override;

    virtual void UnkVfn104() override;

    virtual void UnkVfn106() override;

    virtual void UnkVfn107() override;

    virtual void UnkVfn108() override;

    virtual bool IsValidTarget(MC::Actor ^ _0) override;

    virtual void AdjustDamageAmount([::System::Runtime::InteropServices::In, ::System::Runtime::InteropServices::Out ] int % _0) override;

    virtual void OnTame() override;

    virtual void OnFailedTame() override;

    virtual void VehicleLanded(MC::Vec3 ^ _0, MC::Vec3 ^ _1) override;

    virtual void AwardKillScore(MC::Actor ^ _0, int _1) override;

    virtual MC::ActorUniqueID ^ GetSourceUniqueID() override;

    virtual bool CanFreeze() override;

    virtual int GetPortalWaitTime() override;

    virtual bool CanChangeDimensions() override;

    virtual void UnkVfn182() override;

    virtual MC::ActorUniqueID ^ GetControllingPlayer() override;

    virtual bool CanBePulledIntoVehicle() override;

    virtual void UnkVfn196() override;

    virtual bool CanSynchronizeNewEntity() override;

    virtual bool CanBeAffected(MC::MobEffectInstance ^ _0) new;

    virtual bool CanBeAffectedByArrow(MC::MobEffectInstance ^ _0) new;

    virtual void UnkVfn221() override;

    virtual void UnkVfn222() override;

    virtual bool isWorldBuilder() override;

    virtual bool isCreative() override;

    virtual bool isAdventure() override;

    virtual void SetAuxValue(int _0) override;

    virtual void StopSpinAttack() override;

    virtual void UnkVfn242() override;

    virtual void UnkVfn245() override;

    virtual void UnkVfn257() override;

    virtual void UnkVfn265() override;

    virtual void UnkVfn274() override;

    virtual void SpawnAnim() override;

    virtual void AiStep() override;

    virtual int GetItemUseDuration() override;

    virtual float GetItemUseStartupProgress() override;

    virtual float GetItemUseIntervalProgress() override;

    virtual void UnkVfn303() override;

    virtual bool IsAlliedTo(MC::Mob ^ _0) override;

    virtual void UnkVfn307() override;

    virtual int GetArmorValue();

    virtual void OnBorn(MC::Actor ^ _0, MC::Actor ^ _1) override;

    virtual void UnkVfn338() override;

    virtual void NewServerAiStep() override;

    virtual void ServerAiMobStep() override;

    virtual void UnkVfn354() override;

    void AwardSpawnWitherAchievement();

    MC::Vec3 ^ GetHeadPos(int _0);

    MC::Vec2 ^ GetHeadRot(int _0);

    float GetSwellAmount(float _0);

    void RemoveSkeleton();

    void SetAerialAttack(bool _0);

    void SetAlternativeTarget(int _0, MC::ActorUniqueID ^ _1);

    void SetIsPathing(bool _0);

    void SetShotDelay(int _0);

    static property MC::Mce::UUID ^ MAX_HEALTH_CAP_UUID {
        MC::Mce::UUID ^ get();
    }
#endif // INCLUDE_MCAPI
};
} // namespace MC
