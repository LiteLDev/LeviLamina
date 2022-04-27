#include "../../Header/MC/WitherBoss.hpp"
#include "../../Header/MC/Vec3.hpp"
#include "../../Header/MC/Vec2.hpp"
#include "../../Header/MC/MobEffectInstance.hpp"

namespace MC
{
}

#ifdef INCLUDE_MCAPI
void MC::WitherBoss::Remove()
{
    ((class ::WitherBoss*)NativePtr)->remove();
}

bool MC::WitherBoss::isRuntimePredictedMovementEnabled()
{
    auto __ret = ((class ::WitherBoss*)NativePtr)->isRuntimePredictedMovementEnabled();
    return __ret;
}

MC::Vec3 ^ MC::WitherBoss::GetFiringPos()
{
    auto __ret = ((class ::WitherBoss*)NativePtr)->getFiringPos();
    auto ____ret = new class ::Vec3(__ret);
    return (____ret == nullptr) ? nullptr : gcnew ::MC::Vec3((class ::Vec3*)____ret, true);
}

void MC::WitherBoss::UnkVfn41()
{
    ((class ::WitherBoss*)NativePtr)->__unk_vfn_41();
}

bool MC::WitherBoss::StartRiding(MC::Actor ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::Actor*)_0->NativePtr;
    auto __ret = ((class ::WitherBoss*)NativePtr)->startRiding(__arg0);
    return __ret;
}

void MC::WitherBoss::UnkVfn61()
{
    ((class ::WitherBoss*)NativePtr)->__unk_vfn_61();
}

void MC::WitherBoss::UnkVfn68()
{
    ((class ::WitherBoss*)NativePtr)->__unk_vfn_68();
}

void MC::WitherBoss::SetBlockMovementSlowdownMultiplier(MC::Vec3 ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::Vec3*)_0->NativePtr;
    ((class ::WitherBoss*)NativePtr)->setBlockMovementSlowdownMultiplier(__arg0);
}

float MC::WitherBoss::GetCameraOffset()
{
    auto __ret = ((class ::WitherBoss*)NativePtr)->getCameraOffset();
    return __ret;
}

void MC::WitherBoss::UnkVfn82()
{
    ((class ::WitherBoss*)NativePtr)->__unk_vfn_82();
}

void MC::WitherBoss::UnkVfn87()
{
    ((class ::WitherBoss*)NativePtr)->__unk_vfn_87();
}

void MC::WitherBoss::UnkVfn94()
{
    ((class ::WitherBoss*)NativePtr)->__unk_vfn_94();
}

void MC::WitherBoss::UnkVfn97()
{
    ((class ::WitherBoss*)NativePtr)->__unk_vfn_97();
}

void MC::WitherBoss::UnkVfn104()
{
    ((class ::WitherBoss*)NativePtr)->__unk_vfn_104();
}

void MC::WitherBoss::UnkVfn106()
{
    ((class ::WitherBoss*)NativePtr)->__unk_vfn_106();
}

void MC::WitherBoss::UnkVfn107()
{
    ((class ::WitherBoss*)NativePtr)->__unk_vfn_107();
}

void MC::WitherBoss::UnkVfn108()
{
    ((class ::WitherBoss*)NativePtr)->__unk_vfn_108();
}

bool MC::WitherBoss::IsValidTarget(MC::Actor ^ _0)
{
    auto __arg0 = (class ::Actor*)_0->NativePtr;
    auto __ret = ((class ::WitherBoss*)NativePtr)->isValidTarget(__arg0);
    return __ret;
}

void MC::WitherBoss::AdjustDamageAmount([::System::Runtime::InteropServices::In, ::System::Runtime::InteropServices::Out ] int % _0)
{
    int __arg0 = _0;
    ((class ::WitherBoss*)NativePtr)->adjustDamageAmount(__arg0);
    _0 = __arg0;
}

void MC::WitherBoss::OnTame()
{
    ((class ::WitherBoss*)NativePtr)->onTame();
}

void MC::WitherBoss::OnFailedTame()
{
    ((class ::WitherBoss*)NativePtr)->onFailedTame();
}

void MC::WitherBoss::VehicleLanded(MC::Vec3 ^ _0, MC::Vec3 ^ _1)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::Vec3*)_0->NativePtr;
    if (ReferenceEquals(_1, nullptr))
        throw gcnew ::System::ArgumentNullException("_1", "Cannot be null because it is a C++ reference (&).");
    auto& __arg1 = *(class ::Vec3*)_1->NativePtr;
    ((class ::WitherBoss*)NativePtr)->vehicleLanded(__arg0, __arg1);
}

void MC::WitherBoss::AwardKillScore(MC::Actor ^ _0, int _1)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::Actor*)_0->NativePtr;
    ((class ::WitherBoss*)NativePtr)->awardKillScore(__arg0, _1);
}

MC::ActorUniqueID ^ MC::WitherBoss::GetSourceUniqueID()
{
    auto __ret = ((class ::WitherBoss*)NativePtr)->getSourceUniqueID();
    auto ____ret = new struct ::ActorUniqueID(__ret);
    return (____ret == nullptr) ? nullptr : gcnew ::MC::ActorUniqueID((struct ::ActorUniqueID*)____ret, true);
}

bool MC::WitherBoss::CanFreeze()
{
    auto __ret = ((class ::WitherBoss*)NativePtr)->canFreeze();
    return __ret;
}

int MC::WitherBoss::GetPortalWaitTime()
{
    auto __ret = ((class ::WitherBoss*)NativePtr)->getPortalWaitTime();
    return __ret;
}

bool MC::WitherBoss::CanChangeDimensions()
{
    auto __ret = ((class ::WitherBoss*)NativePtr)->canChangeDimensions();
    return __ret;
}

void MC::WitherBoss::UnkVfn182()
{
    ((class ::WitherBoss*)NativePtr)->__unk_vfn_182();
}

MC::ActorUniqueID ^ MC::WitherBoss::GetControllingPlayer()
{
    auto __ret = ((class ::WitherBoss*)NativePtr)->getControllingPlayer();
    auto ____ret = new struct ::ActorUniqueID(__ret);
    return (____ret == nullptr) ? nullptr : gcnew ::MC::ActorUniqueID((struct ::ActorUniqueID*)____ret, true);
}

bool MC::WitherBoss::CanBePulledIntoVehicle()
{
    auto __ret = ((class ::WitherBoss*)NativePtr)->canBePulledIntoVehicle();
    return __ret;
}

void MC::WitherBoss::UnkVfn196()
{
    ((class ::WitherBoss*)NativePtr)->__unk_vfn_196();
}

bool MC::WitherBoss::CanSynchronizeNewEntity()
{
    auto __ret = ((class ::WitherBoss*)NativePtr)->canSynchronizeNewEntity();
    return __ret;
}

bool MC::WitherBoss::CanBeAffected(MC::MobEffectInstance ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::MobEffectInstance*)_0->NativePtr;
    auto __ret = ((class ::WitherBoss*)NativePtr)->canBeAffected(__arg0);
    return __ret;
}

bool MC::WitherBoss::CanBeAffectedByArrow(MC::MobEffectInstance ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::MobEffectInstance*)_0->NativePtr;
    auto __ret = ((class ::WitherBoss*)NativePtr)->canBeAffectedByArrow(__arg0);
    return __ret;
}

void MC::WitherBoss::UnkVfn221()
{
    ((class ::WitherBoss*)NativePtr)->__unk_vfn_221();
}

void MC::WitherBoss::UnkVfn222()
{
    ((class ::WitherBoss*)NativePtr)->__unk_vfn_222();
}

bool MC::WitherBoss::isWorldBuilder()
{
    auto __ret = ((class ::WitherBoss*)NativePtr)->isWorldBuilder();
    return __ret;
}

bool MC::WitherBoss::isCreative()
{
    auto __ret = ((class ::WitherBoss*)NativePtr)->isCreative();
    return __ret;
}

bool MC::WitherBoss::isAdventure()
{
    auto __ret = ((class ::WitherBoss*)NativePtr)->isAdventure();
    return __ret;
}

void MC::WitherBoss::SetAuxValue(int _0)
{
    ((class ::WitherBoss*)NativePtr)->setAuxValue(_0);
}

void MC::WitherBoss::StopSpinAttack()
{
    ((class ::WitherBoss*)NativePtr)->stopSpinAttack();
}

void MC::WitherBoss::UnkVfn242()
{
    ((class ::WitherBoss*)NativePtr)->__unk_vfn_242();
}

void MC::WitherBoss::UnkVfn245()
{
    ((class ::WitherBoss*)NativePtr)->__unk_vfn_245();
}

void MC::WitherBoss::UnkVfn257()
{
    ((class ::WitherBoss*)NativePtr)->__unk_vfn_257();
}

void MC::WitherBoss::UnkVfn265()
{
    ((class ::WitherBoss*)NativePtr)->__unk_vfn_265();
}

void MC::WitherBoss::UnkVfn274()
{
    ((class ::WitherBoss*)NativePtr)->__unk_vfn_274();
}

void MC::WitherBoss::SpawnAnim()
{
    ((class ::WitherBoss*)NativePtr)->spawnAnim();
}

void MC::WitherBoss::AiStep()
{
    ((class ::WitherBoss*)NativePtr)->aiStep();
}

int MC::WitherBoss::GetItemUseDuration()
{
    auto __ret = ((class ::WitherBoss*)NativePtr)->getItemUseDuration();
    return __ret;
}

float MC::WitherBoss::GetItemUseStartupProgress()
{
    auto __ret = ((class ::WitherBoss*)NativePtr)->getItemUseStartupProgress();
    return __ret;
}

float MC::WitherBoss::GetItemUseIntervalProgress()
{
    auto __ret = ((class ::WitherBoss*)NativePtr)->getItemUseIntervalProgress();
    return __ret;
}

void MC::WitherBoss::UnkVfn303()
{
    ((class ::WitherBoss*)NativePtr)->__unk_vfn_303();
}

bool MC::WitherBoss::IsAlliedTo(MC::Mob ^ _0)
{
    auto __arg0 = (class ::Mob*)_0->NativePtr;
    auto __ret = ((class ::WitherBoss*)NativePtr)->isAlliedTo(__arg0);
    return __ret;
}

void MC::WitherBoss::UnkVfn307()
{
    ((class ::WitherBoss*)NativePtr)->__unk_vfn_307();
}

int MC::WitherBoss::GetArmorValue()
{
    auto __ret = ((class ::WitherBoss*)NativePtr)->getArmorValue();
    return __ret;
}

void MC::WitherBoss::OnBorn(MC::Actor ^ _0, MC::Actor ^ _1)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::Actor*)_0->NativePtr;
    if (ReferenceEquals(_1, nullptr))
        throw gcnew ::System::ArgumentNullException("_1", "Cannot be null because it is a C++ reference (&).");
    auto& __arg1 = *(class ::Actor*)_1->NativePtr;
    ((class ::WitherBoss*)NativePtr)->onBorn(__arg0, __arg1);
}

void MC::WitherBoss::UnkVfn338()
{
    ((class ::WitherBoss*)NativePtr)->__unk_vfn_338();
}

void MC::WitherBoss::NewServerAiStep()
{
    ((class ::WitherBoss*)NativePtr)->newServerAiStep();
}

void MC::WitherBoss::ServerAiMobStep()
{
    ((class ::WitherBoss*)NativePtr)->_serverAiMobStep();
}

void MC::WitherBoss::UnkVfn354()
{
    ((class ::WitherBoss*)NativePtr)->__unk_vfn_354();
}

void MC::WitherBoss::AwardSpawnWitherAchievement()
{
    ((class ::WitherBoss*)NativePtr)->awardSpawnWitherAchievement();
}

MC::Vec3 ^ MC::WitherBoss::GetHeadPos(int _0)
{
    auto __ret = ((class ::WitherBoss*)NativePtr)->getHeadPos(_0);
    auto ____ret = new class ::Vec3(__ret);
    return (____ret == nullptr) ? nullptr : gcnew ::MC::Vec3((class ::Vec3*)____ret, true);
}

MC::Vec2 ^ MC::WitherBoss::GetHeadRot(int _0)
{
    auto __ret = ((class ::WitherBoss*)NativePtr)->getHeadRot(_0);
    auto ____ret = new class ::Vec2(__ret);
    return (____ret == nullptr) ? nullptr : gcnew ::MC::Vec2((class ::Vec2*)____ret, true);
}

float MC::WitherBoss::GetSwellAmount(float _0)
{
    auto __ret = ((class ::WitherBoss*)NativePtr)->getSwellAmount(_0);
    return __ret;
}

void MC::WitherBoss::RemoveSkeleton()
{
    ((class ::WitherBoss*)NativePtr)->removeSkeleton();
}

void MC::WitherBoss::SetAerialAttack(bool _0)
{
    ((class ::WitherBoss*)NativePtr)->setAerialAttack(_0);
}

void MC::WitherBoss::SetAlternativeTarget(int _0, MC::ActorUniqueID ^ _1)
{
    if (ReferenceEquals(_1, nullptr))
        throw gcnew ::System::ArgumentNullException("_1", "Cannot be null because it is passed by value.");
    auto __arg1 = *(struct ::ActorUniqueID*)_1->NativePtr;
    ((class ::WitherBoss*)NativePtr)->setAlternativeTarget(_0, __arg1);
}

void MC::WitherBoss::SetIsPathing(bool _0)
{
    ((class ::WitherBoss*)NativePtr)->setIsPathing(_0);
}

void MC::WitherBoss::SetShotDelay(int _0)
{
    ((class ::WitherBoss*)NativePtr)->setShotDelay(_0);
}

int MC::WitherBoss::InvulnerableTicks::get()
{
    auto __ret = ((class ::WitherBoss*)NativePtr)->getInvulnerableTicks();
    return __ret;
}

void MC::WitherBoss::InvulnerableTicks::set(int _0)
{
    ((class ::WitherBoss*)NativePtr)->setInvulnerableTicks(_0);
}

float MC::WitherBoss::OverlayAlpha::get()
{
    auto __ret = ((class ::WitherBoss*)NativePtr)->getOverlayAlpha();
    return __ret;
}

bool MC::WitherBoss::HasAerialAttack::get()
{
    auto __ret = ((class ::WitherBoss*)NativePtr)->hasAerialAttack();
    return __ret;
}

bool MC::WitherBoss::WantsToMove::get()
{
    auto __ret = ((class ::WitherBoss*)NativePtr)->wantsToMove();
    return __ret;
}

void MC::WitherBoss::WantsToMove::set(bool _0)
{
    ((class ::WitherBoss*)NativePtr)->setWantsToMove(_0);
}

MC::Mce::UUID ^ MC::WitherBoss::MAX_HEALTH_CAP_UUID::get()
{
    return (&::WitherBoss::MAX_HEALTH_CAP_UUID == nullptr) ? nullptr : gcnew ::MC::Mce::UUID((class ::mce::UUID*)&::WitherBoss::MAX_HEALTH_CAP_UUID);
}
#endif // INCLUDE_MCAPI
