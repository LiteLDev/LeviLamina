#include "../../Header/MC/ArmStand.hpp"
#include "../../Header/MC/Vec3.hpp"
#include "../../Header/MC/BlockPos.hpp"

namespace MC
{
}

#ifdef INCLUDE_MCAPI

bool MC::ArmorStand::isRuntimePredictedMovementEnabled()
{
    auto __ret = ((class ::ArmorStand*)NativePtr)->isRuntimePredictedMovementEnabled();
    return __ret;
}

void MC::ArmorStand::UnkVfn41()
{
    ((class ::ArmorStand*)NativePtr)->__unk_vfn_41();
}

void MC::ArmorStand::NormalTick()
{
    ((class ::ArmorStand*)NativePtr)->normalTick();
}

void MC::ArmorStand::UnkVfn61()
{
    ((class ::ArmorStand*)NativePtr)->__unk_vfn_61();
}

void MC::ArmorStand::UnkVfn68()
{
    ((class ::ArmorStand*)NativePtr)->__unk_vfn_68();
}

float MC::ArmorStand::GetCameraOffset()
{
    auto __ret = ((class ::ArmorStand*)NativePtr)->getCameraOffset();
    return __ret;
}

float MC::ArmorStand::GetShadowRadius()
{
    auto __ret = ((class ::ArmorStand*)NativePtr)->getShadowRadius();
    return __ret;
}

void MC::ArmorStand::UnkVfn82()
{
    ((class ::ArmorStand*)NativePtr)->__unk_vfn_82();
}

void MC::ArmorStand::UnkVfn87()
{
    ((class ::ArmorStand*)NativePtr)->__unk_vfn_87();
}

bool MC::ArmorStand::isPickable()
{
    auto __ret = ((class ::ArmorStand*)NativePtr)->isPickable();
    return __ret;
}

void MC::ArmorStand::UnkVfn94()
{
    ((class ::ArmorStand*)NativePtr)->__unk_vfn_94();
}

void MC::ArmorStand::UnkVfn97()
{
    ((class ::ArmorStand*)NativePtr)->__unk_vfn_97();
}

void MC::ArmorStand::UnkVfn104()
{
    ((class ::ArmorStand*)NativePtr)->__unk_vfn_104();
}

void MC::ArmorStand::UnkVfn106()
{
    ((class ::ArmorStand*)NativePtr)->__unk_vfn_106();
}

void MC::ArmorStand::UnkVfn107()
{
    ((class ::ArmorStand*)NativePtr)->__unk_vfn_107();
}

void MC::ArmorStand::UnkVfn108()
{
    ((class ::ArmorStand*)NativePtr)->__unk_vfn_108();
}

MC::Actor ^ MC::ArmorStand::findAttackTarget()
{
    auto __ret = ((class ::ArmorStand*)NativePtr)->findAttackTarget();
    if (__ret == nullptr) return nullptr;
    return (__ret == nullptr) ? nullptr : gcnew ::MC::Actor((class ::Actor*)__ret);
}

bool MC::ArmorStand::IsValidTarget(MC::Actor ^ _0)
{
    auto __arg0 = (class ::Actor*)_0->NativePtr;
    auto __ret = ((class ::ArmorStand*)NativePtr)->isValidTarget(__arg0);
    return __ret;
}

void MC::ArmorStand::AdjustDamageAmount([::System::Runtime::InteropServices::In, ::System::Runtime::InteropServices::Out ] int % _0)
{
    int __arg0 = _0;
    ((class ::ArmorStand*)NativePtr)->adjustDamageAmount(__arg0);
    _0 = __arg0;
}

void MC::ArmorStand::OnTame()
{
    ((class ::ArmorStand*)NativePtr)->onTame();
}

void MC::ArmorStand::OnFailedTame()
{
    ((class ::ArmorStand*)NativePtr)->onFailedTame();
}

void MC::ArmorStand::VehicleLanded(MC::Vec3 ^ _0, MC::Vec3 ^ _1)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::Vec3*)_0->NativePtr;
    if (ReferenceEquals(_1, nullptr))
        throw gcnew ::System::ArgumentNullException("_1", "Cannot be null because it is a C++ reference (&).");
    auto& __arg1 = *(class ::Vec3*)_1->NativePtr;
    ((class ::ArmorStand*)NativePtr)->vehicleLanded(__arg0, __arg1);
}

void MC::ArmorStand::AwardKillScore(MC::Actor ^ _0, int _1)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::Actor*)_0->NativePtr;
    ((class ::ArmorStand*)NativePtr)->awardKillScore(__arg0, _1);
}

MC::ActorUniqueID ^ MC::ArmorStand::GetSourceUniqueID()
{
    auto __ret = ((class ::ArmorStand*)NativePtr)->getSourceUniqueID();
    auto ____ret = new struct ::ActorUniqueID(__ret);
    return (____ret == nullptr) ? nullptr : gcnew ::MC::ActorUniqueID((struct ::ActorUniqueID*)____ret, true);
}

int MC::ArmorStand::GetPortalWaitTime()
{
    auto __ret = ((class ::ArmorStand*)NativePtr)->getPortalWaitTime();
    return __ret;
}

bool MC::ArmorStand::CanChangeDimensions()
{
    auto __ret = ((class ::ArmorStand*)NativePtr)->canChangeDimensions();
    return __ret;
}

void MC::ArmorStand::UnkVfn182()
{
    ((class ::ArmorStand*)NativePtr)->__unk_vfn_182();
}

MC::ActorUniqueID ^ MC::ArmorStand::GetControllingPlayer()
{
    auto __ret = ((class ::ArmorStand*)NativePtr)->getControllingPlayer();
    auto ____ret = new struct ::ActorUniqueID(__ret);
    return (____ret == nullptr) ? nullptr : gcnew ::MC::ActorUniqueID((struct ::ActorUniqueID*)____ret, true);
}

bool MC::ArmorStand::CanBePulledIntoVehicle()
{
    auto __ret = ((class ::ArmorStand*)NativePtr)->canBePulledIntoVehicle();
    return __ret;
}

void MC::ArmorStand::UnkVfn196()
{
    ((class ::ArmorStand*)NativePtr)->__unk_vfn_196();
}

bool MC::ArmorStand::CanSynchronizeNewEntity()
{
    auto __ret = ((class ::ArmorStand*)NativePtr)->canSynchronizeNewEntity();
    return __ret;
}

void MC::ArmorStand::UnkVfn221()
{
    ((class ::ArmorStand*)NativePtr)->__unk_vfn_221();
}

void MC::ArmorStand::UnkVfn222()
{
    ((class ::ArmorStand*)NativePtr)->__unk_vfn_222();
}

bool MC::ArmorStand::isWorldBuilder()
{
    auto __ret = ((class ::ArmorStand*)NativePtr)->isWorldBuilder();
    return __ret;
}

bool MC::ArmorStand::isCreative()
{
    auto __ret = ((class ::ArmorStand*)NativePtr)->isCreative();
    return __ret;
}

bool MC::ArmorStand::isAdventure()
{
    auto __ret = ((class ::ArmorStand*)NativePtr)->isAdventure();
    return __ret;
}

void MC::ArmorStand::SetAuxValue(int _0)
{
    ((class ::ArmorStand*)NativePtr)->setAuxValue(_0);
}

void MC::ArmorStand::StopSpinAttack()
{
    ((class ::ArmorStand*)NativePtr)->stopSpinAttack();
}

void MC::ArmorStand::UnkVfn242()
{
    ((class ::ArmorStand*)NativePtr)->__unk_vfn_242();
}

void MC::ArmorStand::UnkVfn245()
{
    ((class ::ArmorStand*)NativePtr)->__unk_vfn_245();
}

void MC::ArmorStand::UnkVfn257()
{
    ((class ::ArmorStand*)NativePtr)->__unk_vfn_257();
}

void MC::ArmorStand::UnkVfn265()
{
    ((class ::ArmorStand*)NativePtr)->__unk_vfn_265();
}

void MC::ArmorStand::UnkVfn274()
{
    ((class ::ArmorStand*)NativePtr)->__unk_vfn_274();
}

void MC::ArmorStand::SpawnAnim()
{
    ((class ::ArmorStand*)NativePtr)->spawnAnim();
}

void MC::ArmorStand::PushActors()
{
    ((class ::ArmorStand*)NativePtr)->pushActors();
}

int MC::ArmorStand::GetItemUseDuration()
{
    auto __ret = ((class ::ArmorStand*)NativePtr)->getItemUseDuration();
    return __ret;
}

float MC::ArmorStand::GetItemUseStartupProgress()
{
    auto __ret = ((class ::ArmorStand*)NativePtr)->getItemUseStartupProgress();
    return __ret;
}

float MC::ArmorStand::GetItemUseIntervalProgress()
{
    auto __ret = ((class ::ArmorStand*)NativePtr)->getItemUseIntervalProgress();
    return __ret;
}

void MC::ArmorStand::UnkVfn303()
{
    ((class ::ArmorStand*)NativePtr)->__unk_vfn_303();
}

bool MC::ArmorStand::IsAlliedTo(MC::Mob ^ _0)
{
    auto __arg0 = (class ::Mob*)_0->NativePtr;
    auto __ret = ((class ::ArmorStand*)NativePtr)->isAlliedTo(__arg0);
    return __ret;
}

void MC::ArmorStand::UnkVfn307()
{
    ((class ::ArmorStand*)NativePtr)->__unk_vfn_307();
}

void MC::ArmorStand::OnBorn(MC::Actor ^ _0, MC::Actor ^ _1)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::Actor*)_0->NativePtr;
    if (ReferenceEquals(_1, nullptr))
        throw gcnew ::System::ArgumentNullException("_1", "Cannot be null because it is a C++ reference (&).");
    auto& __arg1 = *(class ::Actor*)_1->NativePtr;
    ((class ::ArmorStand*)NativePtr)->onBorn(__arg0, __arg1);
}

float MC::ArmorStand::GetWalkTargetValue(MC::BlockPos ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::BlockPos*)_0->NativePtr;
    auto __ret = ((class ::ArmorStand*)NativePtr)->_getWalkTargetValue(__arg0);
    return __ret;
}

void MC::ArmorStand::UnkVfn338()
{
    ((class ::ArmorStand*)NativePtr)->__unk_vfn_338();
}

void MC::ArmorStand::ServerAiMobStep()
{
    ((class ::ArmorStand*)NativePtr)->_serverAiMobStep();
}

void MC::ArmorStand::UnkVfn354()
{
    ((class ::ArmorStand*)NativePtr)->__unk_vfn_354();
}

int MC::ArmorStand::NumSlotsFilled::get()
{
    auto __ret = ((class ::ArmorStand*)NativePtr)->getNumSlotsFilled();
    return __ret;
}

int MC::ArmorStand::PoseIndex::get()
{
    auto __ret = ((class ::ArmorStand*)NativePtr)->getPoseIndex();
    return __ret;
}

#endif // INCLUDE_MCAPI
