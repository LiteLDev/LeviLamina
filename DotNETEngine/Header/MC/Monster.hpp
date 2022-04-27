#pragma once
#include <MC/Monster.hpp>
#include "Types.hpp"
#include "Mob.hpp"
namespace MC
{
public
ref class Monster : public Mob
{
public:
    __ctor_base(Monster, ::Monster, Mob);

#ifdef INCLUDE_MCAPI
    property bool IsDarkEnoughToSpawn
    {
        bool get();
    }

    virtual bool isRuntimePredictedMovementEnabled();

    virtual void UnkVfn41() override;

    virtual void NormalTick() override;

    virtual void UnkVfn61() override;

    virtual void UnkVfn68() override;

    virtual float GetCameraOffset();

    virtual void UnkVfn82() override;

    virtual void UnkVfn87() override;

    virtual void UnkVfn94() override;

    virtual void UnkVfn97() override;

    virtual void UnkVfn104() override;

    virtual void UnkVfn106() override;

    virtual void UnkVfn107() override;

    virtual void UnkVfn108() override;

    virtual MC::Actor ^ findAttackTarget();

    virtual bool IsValidTarget(MC::Actor ^ _0) override;

    virtual void AdjustDamageAmount([::System::Runtime::InteropServices::In, ::System::Runtime::InteropServices::Out ] int % _0) override;

    virtual void OnTame() override;

    virtual void OnFailedTame() override;

    virtual void VehicleLanded(MC::Vec3 ^ _0, MC::Vec3 ^ _1) override;

    virtual void AwardKillScore(MC::Actor ^ _0, int _1) override;

    virtual MC::ActorUniqueID ^ GetSourceUniqueID();

    virtual int GetPortalWaitTime();

    virtual bool CanChangeDimensions() override;

    virtual void UnkVfn182() override;

    virtual MC::ActorUniqueID ^ GetControllingPlayer();

    virtual bool CanBePulledIntoVehicle() override;

    virtual void UnkVfn196() override;

    virtual bool CanSynchronizeNewEntity() override;

    virtual void UnkVfn221() override;

    virtual void UnkVfn222() override;

    virtual bool isWorldBuilder();

    virtual bool isCreative();

    virtual bool isAdventure();

    virtual void SetAuxValue(int _0) override;

    virtual void StopSpinAttack() override;

    virtual void UnkVfn242() override;

    virtual void UnkVfn245() override;

    virtual void UnkVfn257() override;

    virtual void UnkVfn265() override;

    virtual void UnkVfn274() override;

    virtual void SpawnAnim() override;

    virtual void AiStep() override;

    virtual bool CheckSpawnRules(bool _0) override;

    virtual int GetItemUseDuration();

    virtual float GetItemUseStartupProgress();

    virtual float GetItemUseIntervalProgress();

    virtual void UnkVfn303() override;

    virtual bool IsAlliedTo(MC::Mob ^ _0) override;

    virtual void UnkVfn307() override;

    virtual void OnBorn(MC::Actor ^ _0, MC::Actor ^ _1) override;

    virtual float GetWalkTargetValue(MC::BlockPos ^ _0) override;

    virtual void UnkVfn338() override;

    virtual void ServerAiMobStep() override;

    virtual void UnkVfn354() override;
#endif // INCLUDE_MCAPI
};
} // namespace MC