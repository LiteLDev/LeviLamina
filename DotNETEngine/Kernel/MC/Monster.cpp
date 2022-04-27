#include "../../Header/MC/Monster.hpp"
namespace MC
{
}

#ifdef INCLUDE_MCAPI

#include "../../Header/MC/Vec3.hpp"
#include "../../Header/MC/BlockPos.hpp"

bool MC::Monster::isRuntimePredictedMovementEnabled()
{
    auto __ret = ((class ::Monster*)NativePtr)->isRuntimePredictedMovementEnabled();
    return __ret;
}

void MC::Monster::UnkVfn41()
{
    ((class ::Monster*)NativePtr)->__unk_vfn_41();
}

void MC::Monster::NormalTick()
{
    ((class ::Monster*)NativePtr)->normalTick();
}

void MC::Monster::UnkVfn61()
{
    ((class ::Monster*)NativePtr)->__unk_vfn_61();
}

void MC::Monster::UnkVfn68()
{
    ((class ::Monster*)NativePtr)->__unk_vfn_68();
}

float MC::Monster::GetCameraOffset()
{
    auto __ret = ((class ::Monster*)NativePtr)->getCameraOffset();
    return __ret;
}

void MC::Monster::UnkVfn82()
{
    ((class ::Monster*)NativePtr)->__unk_vfn_82();
}

void MC::Monster::UnkVfn87()
{
    ((class ::Monster*)NativePtr)->__unk_vfn_87();
}

void MC::Monster::UnkVfn94()
{
    ((class ::Monster*)NativePtr)->__unk_vfn_94();
}

void MC::Monster::UnkVfn97()
{
    ((class ::Monster*)NativePtr)->__unk_vfn_97();
}

void MC::Monster::UnkVfn104()
{
    ((class ::Monster*)NativePtr)->__unk_vfn_104();
}

void MC::Monster::UnkVfn106()
{
    ((class ::Monster*)NativePtr)->__unk_vfn_106();
}

void MC::Monster::UnkVfn107()
{
    ((class ::Monster*)NativePtr)->__unk_vfn_107();
}

void MC::Monster::UnkVfn108()
{
    ((class ::Monster*)NativePtr)->__unk_vfn_108();
}

MC::Actor ^ MC::Monster::findAttackTarget()
{
    auto __ret = ((class ::Monster*)NativePtr)->findAttackTarget();
    if (__ret == nullptr) return nullptr;
    return (__ret == nullptr) ? nullptr : gcnew ::MC::Actor((class ::Actor*)__ret);
}

bool MC::Monster::IsValidTarget(MC::Actor ^ _0)
{
    auto __arg0 = (class ::Actor*)_0->NativePtr;
    auto __ret = ((class ::Monster*)NativePtr)->isValidTarget(__arg0);
    return __ret;
}

void MC::Monster::AdjustDamageAmount([::System::Runtime::InteropServices::In, ::System::Runtime::InteropServices::Out ] int % _0)
{
    int __arg0 = _0;
    ((class ::Monster*)NativePtr)->adjustDamageAmount(__arg0);
    _0 = __arg0;
}

void MC::Monster::OnTame()
{
    ((class ::Monster*)NativePtr)->onTame();
}

void MC::Monster::OnFailedTame()
{
    ((class ::Monster*)NativePtr)->onFailedTame();
}

void MC::Monster::VehicleLanded(MC::Vec3 ^ _0, MC::Vec3 ^ _1)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::Vec3*)_0->NativePtr;
    if (ReferenceEquals(_1, nullptr))
        throw gcnew ::System::ArgumentNullException("_1", "Cannot be null because it is a C++ reference (&).");
    auto& __arg1 = *(class ::Vec3*)_1->NativePtr;
    ((class ::Monster*)NativePtr)->vehicleLanded(__arg0, __arg1);
}

void MC::Monster::AwardKillScore(MC::Actor ^ _0, int _1)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::Actor*)_0->NativePtr;
    ((class ::Monster*)NativePtr)->awardKillScore(__arg0, _1);
}

MC::ActorUniqueID ^ MC::Monster::GetSourceUniqueID()
{
    auto __ret = ((class ::Monster*)NativePtr)->getSourceUniqueID();
    auto ____ret = new struct ::ActorUniqueID(__ret);
    return (____ret == nullptr) ? nullptr : gcnew ::MC::ActorUniqueID((struct ::ActorUniqueID*)____ret, true);
}

int MC::Monster::GetPortalWaitTime()
{
    auto __ret = ((class ::Monster*)NativePtr)->getPortalWaitTime();
    return __ret;
}

bool MC::Monster::CanChangeDimensions()
{
    auto __ret = ((class ::Monster*)NativePtr)->canChangeDimensions();
    return __ret;
}

void MC::Monster::UnkVfn182()
{
    ((class ::Monster*)NativePtr)->__unk_vfn_182();
}

MC::ActorUniqueID ^ MC::Monster::GetControllingPlayer()
{
    auto __ret = ((class ::Monster*)NativePtr)->getControllingPlayer();
    auto ____ret = new struct ::ActorUniqueID(__ret);
    return (____ret == nullptr) ? nullptr : gcnew ::MC::ActorUniqueID((struct ::ActorUniqueID*)____ret, true);
}

bool MC::Monster::CanBePulledIntoVehicle()
{
    auto __ret = ((class ::Monster*)NativePtr)->canBePulledIntoVehicle();
    return __ret;
}

void MC::Monster::UnkVfn196()
{
    ((class ::Monster*)NativePtr)->__unk_vfn_196();
}

bool MC::Monster::CanSynchronizeNewEntity()
{
    auto __ret = ((class ::Monster*)NativePtr)->canSynchronizeNewEntity();
    return __ret;
}

void MC::Monster::UnkVfn221()
{
    ((class ::Monster*)NativePtr)->__unk_vfn_221();
}

void MC::Monster::UnkVfn222()
{
    ((class ::Monster*)NativePtr)->__unk_vfn_222();
}

bool MC::Monster::isWorldBuilder()
{
    auto __ret = ((class ::Monster*)NativePtr)->isWorldBuilder();
    return __ret;
}

bool MC::Monster::isCreative()
{
    auto __ret = ((class ::Monster*)NativePtr)->isCreative();
    return __ret;
}

bool MC::Monster::isAdventure()
{
    auto __ret = ((class ::Monster*)NativePtr)->isAdventure();
    return __ret;
}

void MC::Monster::SetAuxValue(int _0)
{
    ((class ::Monster*)NativePtr)->setAuxValue(_0);
}

void MC::Monster::StopSpinAttack()
{
    ((class ::Monster*)NativePtr)->stopSpinAttack();
}

void MC::Monster::UnkVfn242()
{
    ((class ::Monster*)NativePtr)->__unk_vfn_242();
}

void MC::Monster::UnkVfn245()
{
    ((class ::Monster*)NativePtr)->__unk_vfn_245();
}

void MC::Monster::UnkVfn257()
{
    ((class ::Monster*)NativePtr)->__unk_vfn_257();
}

void MC::Monster::UnkVfn265()
{
    ((class ::Monster*)NativePtr)->__unk_vfn_265();
}

void MC::Monster::UnkVfn274()
{
    ((class ::Monster*)NativePtr)->__unk_vfn_274();
}

void MC::Monster::SpawnAnim()
{
    ((class ::Monster*)NativePtr)->spawnAnim();
}

void MC::Monster::AiStep()
{
    ((class ::Monster*)NativePtr)->aiStep();
}

bool MC::Monster::CheckSpawnRules(bool _0)
{
    auto __ret = ((class ::Monster*)NativePtr)->checkSpawnRules(_0);
    return __ret;
}

int MC::Monster::GetItemUseDuration()
{
    auto __ret = ((class ::Monster*)NativePtr)->getItemUseDuration();
    return __ret;
}

float MC::Monster::GetItemUseStartupProgress()
{
    auto __ret = ((class ::Monster*)NativePtr)->getItemUseStartupProgress();
    return __ret;
}

float MC::Monster::GetItemUseIntervalProgress()
{
    auto __ret = ((class ::Monster*)NativePtr)->getItemUseIntervalProgress();
    return __ret;
}

void MC::Monster::UnkVfn303()
{
    ((class ::Monster*)NativePtr)->__unk_vfn_303();
}

bool MC::Monster::IsAlliedTo(MC::Mob ^ _0)
{
    auto __arg0 = (class ::Mob*)_0->NativePtr;
    auto __ret = ((class ::Monster*)NativePtr)->isAlliedTo(__arg0);
    return __ret;
}

void MC::Monster::UnkVfn307()
{
    ((class ::Monster*)NativePtr)->__unk_vfn_307();
}

void MC::Monster::OnBorn(MC::Actor ^ _0, MC::Actor ^ _1)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::Actor*)_0->NativePtr;
    if (ReferenceEquals(_1, nullptr))
        throw gcnew ::System::ArgumentNullException("_1", "Cannot be null because it is a C++ reference (&).");
    auto& __arg1 = *(class ::Actor*)_1->NativePtr;
    ((class ::Monster*)NativePtr)->onBorn(__arg0, __arg1);
}

float MC::Monster::GetWalkTargetValue(MC::BlockPos ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::BlockPos*)_0->NativePtr;
    auto __ret = ((class ::Monster*)NativePtr)->_getWalkTargetValue(__arg0);
    return __ret;
}

void MC::Monster::UnkVfn338()
{
    ((class ::Monster*)NativePtr)->__unk_vfn_338();
}

void MC::Monster::ServerAiMobStep()
{
    ((class ::Monster*)NativePtr)->_serverAiMobStep();
}

void MC::Monster::UnkVfn354()
{
    ((class ::Monster*)NativePtr)->__unk_vfn_354();
}

bool MC::Monster::IsDarkEnoughToSpawn::get()
{
    auto __ret = ((class ::Monster*)NativePtr)->isDarkEnoughToSpawn();
    return __ret;
}
#endif // INCLUDE_MCAPI
