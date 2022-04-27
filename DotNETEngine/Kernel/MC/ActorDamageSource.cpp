#include "../../Header/MC/ActorDamageSource.hpp"
#include "../../Header/MC/Actor.hpp"

namespace MC
{
inline Actor ^ ActorDamageSource::Entity::get()
{
    return gcnew Actor(NativePtr->getEntity());
}
bool ActorDamageSource::IsEntitySource::get()
{
    return NativePtr->isEntitySource();
}
} // namespace MC

#ifdef INCLUDE_MCAPI

void MC::ActorDamageSource::UnkVfn8()
{
    ((class ::ActorDamageSource*)NativePtr)->__unk_vfn_8();
}

void MC::ActorDamageSource::UnkVfn9()
{
    ((class ::ActorDamageSource*)NativePtr)->__unk_vfn_9();
}

MC::ActorDamageCause MC::ActorDamageSource::LookupCause(::System::String ^ _0)
{
    auto __arg0 = clix::marshalString<clix::E_UTF8>(_0);
    auto __ret = ::ActorDamageSource::lookupCause(__arg0);
    return (MC::ActorDamageCause)__ret;
}

::System::String ^ MC::ActorDamageSource::LookupCauseName(MC::ActorDamageCause _0)
{
    auto __arg0 = (::ActorDamageCause)_0;
    auto& __ret = ::ActorDamageSource::lookupCauseName(__arg0);
    return (::System::String ^)(clix::marshalString<clix::E_UTF8>(__ret));
}

bool MC::ActorDamageSource::IsChildEntitySource::get()
{
    auto __ret = ((class ::ActorDamageSource*)NativePtr)->isChildEntitySource();
    return __ret;
}

bool MC::ActorDamageSource::IsBlockSource::get()
{
    auto __ret = ((class ::ActorDamageSource*)NativePtr)->isBlockSource();
    return __ret;
}

bool MC::ActorDamageSource::IsFire::get()
{
    auto __ret = ((class ::ActorDamageSource*)NativePtr)->isFire();
    return __ret;
}

bool MC::ActorDamageSource::IsCreative::get()
{
    auto __ret = ((class ::ActorDamageSource*)NativePtr)->getIsCreative();
    return __ret;
}

bool MC::ActorDamageSource::IsWorldBuilder::get()
{
    auto __ret = ((class ::ActorDamageSource*)NativePtr)->getIsWorldBuilder();
    return __ret;
}

bool MC::ActorDamageSource::DamagingEntityIsCreative::get()
{
    auto __ret = ((class ::ActorDamageSource*)NativePtr)->getDamagingEntityIsCreative();
    return __ret;
}

bool MC::ActorDamageSource::DamagingEntityIsWorldBuilder::get()
{
    auto __ret = ((class ::ActorDamageSource*)NativePtr)->getDamagingEntityIsWorldBuilder();
    return __ret;
}

MC::ActorUniqueID ^ MC::ActorDamageSource::DamagingEntityUniqueID::get()
{
    auto __ret = ((class ::ActorDamageSource*)NativePtr)->getDamagingEntityUniqueID();
    auto ____ret = new struct ::ActorUniqueID(__ret);
    return (____ret == nullptr) ? nullptr : gcnew ::MC::ActorUniqueID((struct ::ActorUniqueID*)____ret, true);
}

MC::ActorDamageCause MC::ActorDamageSource::Cause::get()
{
    auto __ret = ((class ::ActorDamageSource*)NativePtr)->getCause();
    return (MC::ActorDamageCause)__ret;
}

void MC::ActorDamageSource::Cause::set(MC::ActorDamageCause _0)
{
    auto __arg0 = (::ActorDamageCause)_0;
    ((class ::ActorDamageSource*)NativePtr)->setCause(__arg0);
}

#endif // INCLUDE_MCAPI
