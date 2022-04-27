#include "../../Header/MC/MobEffect.hpp"

namespace MC
{
}

#ifdef INCLUDE_MCAPI

MC::MobEffect ^ MC::MobEffect::GetById(int _0)
{
    auto __ret = ::MobEffect::getById(_0);
    if (__ret == nullptr) return nullptr;
    return (__ret == nullptr) ? nullptr : gcnew ::MC::MobEffect((class ::MobEffect*)__ret);
}

MC::MobEffect ^ MC::MobEffect::GetByName(::System::String ^ _0)
{
    auto __arg0 = clix::marshalString<clix::E_UTF8>(_0);
    auto __ret = ::MobEffect::getByName(__arg0);
    if (__ret == nullptr) return nullptr;
    return (__ret == nullptr) ? nullptr : gcnew ::MC::MobEffect((class ::MobEffect*)__ret);
}

::System::String ^ MC::MobEffect::GetNameById(int _0)
{
    auto __ret = ::MobEffect::getNameById(_0);
    return clix::marshalString<clix::E_UTF8>(__ret);
}

void MC::MobEffect::ShutdownEffects()
{
    ::MobEffect::shutdownEffects();
}

bool MC::MobEffect::IsInstantaneous::get()
{
    auto __ret = ((class ::MobEffect*)NativePtr)->isInstantaneous();
    return __ret;
}

::System::String ^ MC::MobEffect::DescriptionId::get()
{
    auto& __ret = ((class ::MobEffect*)NativePtr)->getDescriptionId();
    return (::System::String ^)(clix::marshalString<clix::E_UTF8>(__ret));
}

float MC::MobEffect::DurationModifier::get()
{
    auto __ret = ((class ::MobEffect*)NativePtr)->getDurationModifier();
    return __ret;
}

unsigned int MC::MobEffect::Id::get()
{
    auto __ret = ((class ::MobEffect*)NativePtr)->getId();
    return __ret;
}

::System::String ^ MC::MobEffect::ResourceName::get()
{
    auto& __ret = ((class ::MobEffect*)NativePtr)->getResourceName();
    return (::System::String ^)(clix::marshalString<clix::E_UTF8>(__ret));
}

bool MC::MobEffect::IsHarmful::get()
{
    auto __ret = ((class ::MobEffect*)NativePtr)->isHarmful();
    return __ret;
}

bool MC::MobEffect::IsVisible::get()
{
    auto __ret = ((class ::MobEffect*)NativePtr)->isVisible();
    return __ret;
}

MC::MobEffect ^ MC::MobEffect::ABSORPTION::get()
{
    return (::MobEffect::ABSORPTION == nullptr) ? nullptr : gcnew ::MC::MobEffect((class ::MobEffect*)::MobEffect::ABSORPTION);
}

void MC::MobEffect::ABSORPTION::set(MC::MobEffect ^ value)
{
    ::MobEffect::ABSORPTION = (class ::MobEffect*)value->NativePtr;
}

MC::MobEffect ^ MC::MobEffect::BAD_OMEN::get()
{
    return (::MobEffect::BAD_OMEN == nullptr) ? nullptr : gcnew ::MC::MobEffect((class ::MobEffect*)::MobEffect::BAD_OMEN);
}

void MC::MobEffect::BAD_OMEN::set(MC::MobEffect ^ value)
{
    ::MobEffect::BAD_OMEN = (class ::MobEffect*)value->NativePtr;
}

MC::MobEffect ^ MC::MobEffect::BLINDNESS::get()
{
    return (::MobEffect::BLINDNESS == nullptr) ? nullptr : gcnew ::MC::MobEffect((class ::MobEffect*)::MobEffect::BLINDNESS);
}

void MC::MobEffect::BLINDNESS::set(MC::MobEffect ^ value)
{
    ::MobEffect::BLINDNESS = (class ::MobEffect*)value->NativePtr;
}

MC::MobEffect ^ MC::MobEffect::CONDUIT_POWER::get()
{
    return (::MobEffect::CONDUIT_POWER == nullptr) ? nullptr : gcnew ::MC::MobEffect((class ::MobEffect*)::MobEffect::CONDUIT_POWER);
}

void MC::MobEffect::CONDUIT_POWER::set(MC::MobEffect ^ value)
{
    ::MobEffect::CONDUIT_POWER = (class ::MobEffect*)value->NativePtr;
}

MC::MobEffect ^ MC::MobEffect::CONFUSION::get()
{
    return (::MobEffect::CONFUSION == nullptr) ? nullptr : gcnew ::MC::MobEffect((class ::MobEffect*)::MobEffect::CONFUSION);
}

void MC::MobEffect::CONFUSION::set(MC::MobEffect ^ value)
{
    ::MobEffect::CONFUSION = (class ::MobEffect*)value->NativePtr;
}

MC::MobEffect ^ MC::MobEffect::DAMAGE_BOOST::get()
{
    return (::MobEffect::DAMAGE_BOOST == nullptr) ? nullptr : gcnew ::MC::MobEffect((class ::MobEffect*)::MobEffect::DAMAGE_BOOST);
}

void MC::MobEffect::DAMAGE_BOOST::set(MC::MobEffect ^ value)
{
    ::MobEffect::DAMAGE_BOOST = (class ::MobEffect*)value->NativePtr;
}

MC::MobEffect ^ MC::MobEffect::DAMAGE_RESISTANCE::get()
{
    return (::MobEffect::DAMAGE_RESISTANCE == nullptr) ? nullptr : gcnew ::MC::MobEffect((class ::MobEffect*)::MobEffect::DAMAGE_RESISTANCE);
}

void MC::MobEffect::DAMAGE_RESISTANCE::set(MC::MobEffect ^ value)
{
    ::MobEffect::DAMAGE_RESISTANCE = (class ::MobEffect*)value->NativePtr;
}

MC::MobEffect ^ MC::MobEffect::DARKNESS::get()
{
    return (::MobEffect::DARKNESS == nullptr) ? nullptr : gcnew ::MC::MobEffect((class ::MobEffect*)::MobEffect::DARKNESS);
}

void MC::MobEffect::DARKNESS::set(MC::MobEffect ^ value)
{
    ::MobEffect::DARKNESS = (class ::MobEffect*)value->NativePtr;
}

MC::Mce::Color ^ MC::MobEffect::DEFAULT_COLOR::get()
{
    return (&::MobEffect::DEFAULT_COLOR == nullptr) ? nullptr : gcnew ::MC::Mce::Color((class ::mce::Color*)&::MobEffect::DEFAULT_COLOR);
}

MC::MobEffect ^ MC::MobEffect::DIG_SLOWDOWN::get()
{
    return (::MobEffect::DIG_SLOWDOWN == nullptr) ? nullptr : gcnew ::MC::MobEffect((class ::MobEffect*)::MobEffect::DIG_SLOWDOWN);
}

void MC::MobEffect::DIG_SLOWDOWN::set(MC::MobEffect ^ value)
{
    ::MobEffect::DIG_SLOWDOWN = (class ::MobEffect*)value->NativePtr;
}

MC::MobEffect ^ MC::MobEffect::DIG_SPEED::get()
{
    return (::MobEffect::DIG_SPEED == nullptr) ? nullptr : gcnew ::MC::MobEffect((class ::MobEffect*)::MobEffect::DIG_SPEED);
}

void MC::MobEffect::DIG_SPEED::set(MC::MobEffect ^ value)
{
    ::MobEffect::DIG_SPEED = (class ::MobEffect*)value->NativePtr;
}

MC::MobEffect ^ MC::MobEffect::EMPTY_EFFECT::get()
{
    return (::MobEffect::EMPTY_EFFECT == nullptr) ? nullptr : gcnew ::MC::MobEffect((class ::MobEffect*)::MobEffect::EMPTY_EFFECT);
}

void MC::MobEffect::EMPTY_EFFECT::set(MC::MobEffect ^ value)
{
    ::MobEffect::EMPTY_EFFECT = (class ::MobEffect*)value->NativePtr;
}

MC::MobEffect ^ MC::MobEffect::FATAL_POISON::get()
{
    return (::MobEffect::FATAL_POISON == nullptr) ? nullptr : gcnew ::MC::MobEffect((class ::MobEffect*)::MobEffect::FATAL_POISON);
}

void MC::MobEffect::FATAL_POISON::set(MC::MobEffect ^ value)
{
    ::MobEffect::FATAL_POISON = (class ::MobEffect*)value->NativePtr;
}

MC::MobEffect ^ MC::MobEffect::FIRE_RESISTANCE::get()
{
    return (::MobEffect::FIRE_RESISTANCE == nullptr) ? nullptr : gcnew ::MC::MobEffect((class ::MobEffect*)::MobEffect::FIRE_RESISTANCE);
}

void MC::MobEffect::FIRE_RESISTANCE::set(MC::MobEffect ^ value)
{
    ::MobEffect::FIRE_RESISTANCE = (class ::MobEffect*)value->NativePtr;
}

MC::MobEffect ^ MC::MobEffect::HARM::get()
{
    return (::MobEffect::HARM == nullptr) ? nullptr : gcnew ::MC::MobEffect((class ::MobEffect*)::MobEffect::HARM);
}

void MC::MobEffect::HARM::set(MC::MobEffect ^ value)
{
    ::MobEffect::HARM = (class ::MobEffect*)value->NativePtr;
}

MC::MobEffect ^ MC::MobEffect::HEAL::get()
{
    return (::MobEffect::HEAL == nullptr) ? nullptr : gcnew ::MC::MobEffect((class ::MobEffect*)::MobEffect::HEAL);
}

void MC::MobEffect::HEAL::set(MC::MobEffect ^ value)
{
    ::MobEffect::HEAL = (class ::MobEffect*)value->NativePtr;
}

MC::MobEffect ^ MC::MobEffect::HEALTH_BOOST::get()
{
    return (::MobEffect::HEALTH_BOOST == nullptr) ? nullptr : gcnew ::MC::MobEffect((class ::MobEffect*)::MobEffect::HEALTH_BOOST);
}

void MC::MobEffect::HEALTH_BOOST::set(MC::MobEffect ^ value)
{
    ::MobEffect::HEALTH_BOOST = (class ::MobEffect*)value->NativePtr;
}

MC::MobEffect ^ MC::MobEffect::HERO_OF_THE_VILLAGE::get()
{
    return (::MobEffect::HERO_OF_THE_VILLAGE == nullptr) ? nullptr : gcnew ::MC::MobEffect((class ::MobEffect*)::MobEffect::HERO_OF_THE_VILLAGE);
}

void MC::MobEffect::HERO_OF_THE_VILLAGE::set(MC::MobEffect ^ value)
{
    ::MobEffect::HERO_OF_THE_VILLAGE = (class ::MobEffect*)value->NativePtr;
}

MC::MobEffect ^ MC::MobEffect::HUNGER::get()
{
    return (::MobEffect::HUNGER == nullptr) ? nullptr : gcnew ::MC::MobEffect((class ::MobEffect*)::MobEffect::HUNGER);
}

void MC::MobEffect::HUNGER::set(MC::MobEffect ^ value)
{
    ::MobEffect::HUNGER = (class ::MobEffect*)value->NativePtr;
}

MC::MobEffect ^ MC::MobEffect::INVISIBILITY::get()
{
    return (::MobEffect::INVISIBILITY == nullptr) ? nullptr : gcnew ::MC::MobEffect((class ::MobEffect*)::MobEffect::INVISIBILITY);
}

void MC::MobEffect::INVISIBILITY::set(MC::MobEffect ^ value)
{
    ::MobEffect::INVISIBILITY = (class ::MobEffect*)value->NativePtr;
}

MC::MobEffect ^ MC::MobEffect::JUMP::get()
{
    return (::MobEffect::JUMP == nullptr) ? nullptr : gcnew ::MC::MobEffect((class ::MobEffect*)::MobEffect::JUMP);
}

void MC::MobEffect::JUMP::set(MC::MobEffect ^ value)
{
    ::MobEffect::JUMP = (class ::MobEffect*)value->NativePtr;
}

MC::MobEffect ^ MC::MobEffect::LEVITATION::get()
{
    return (::MobEffect::LEVITATION == nullptr) ? nullptr : gcnew ::MC::MobEffect((class ::MobEffect*)::MobEffect::LEVITATION);
}

void MC::MobEffect::LEVITATION::set(MC::MobEffect ^ value)
{
    ::MobEffect::LEVITATION = (class ::MobEffect*)value->NativePtr;
}

MC::MobEffect ^ MC::MobEffect::MOVEMENT_SLOWDOWN::get()
{
    return (::MobEffect::MOVEMENT_SLOWDOWN == nullptr) ? nullptr : gcnew ::MC::MobEffect((class ::MobEffect*)::MobEffect::MOVEMENT_SLOWDOWN);
}

void MC::MobEffect::MOVEMENT_SLOWDOWN::set(MC::MobEffect ^ value)
{
    ::MobEffect::MOVEMENT_SLOWDOWN = (class ::MobEffect*)value->NativePtr;
}

MC::MobEffect ^ MC::MobEffect::MOVEMENT_SPEED::get()
{
    return (::MobEffect::MOVEMENT_SPEED == nullptr) ? nullptr : gcnew ::MC::MobEffect((class ::MobEffect*)::MobEffect::MOVEMENT_SPEED);
}

void MC::MobEffect::MOVEMENT_SPEED::set(MC::MobEffect ^ value)
{
    ::MobEffect::MOVEMENT_SPEED = (class ::MobEffect*)value->NativePtr;
}

MC::MobEffect ^ MC::MobEffect::NIGHT_VISION::get()
{
    return (::MobEffect::NIGHT_VISION == nullptr) ? nullptr : gcnew ::MC::MobEffect((class ::MobEffect*)::MobEffect::NIGHT_VISION);
}

void MC::MobEffect::NIGHT_VISION::set(MC::MobEffect ^ value)
{
    ::MobEffect::NIGHT_VISION = (class ::MobEffect*)value->NativePtr;
}

MC::MobEffect ^ MC::MobEffect::POISON::get()
{
    return (::MobEffect::POISON == nullptr) ? nullptr : gcnew ::MC::MobEffect((class ::MobEffect*)::MobEffect::POISON);
}

void MC::MobEffect::POISON::set(MC::MobEffect ^ value)
{
    ::MobEffect::POISON = (class ::MobEffect*)value->NativePtr;
}

MC::MobEffect ^ MC::MobEffect::REGENERATION::get()
{
    return (::MobEffect::REGENERATION == nullptr) ? nullptr : gcnew ::MC::MobEffect((class ::MobEffect*)::MobEffect::REGENERATION);
}

void MC::MobEffect::REGENERATION::set(MC::MobEffect ^ value)
{
    ::MobEffect::REGENERATION = (class ::MobEffect*)value->NativePtr;
}

MC::MobEffect ^ MC::MobEffect::SATURATION::get()
{
    return (::MobEffect::SATURATION == nullptr) ? nullptr : gcnew ::MC::MobEffect((class ::MobEffect*)::MobEffect::SATURATION);
}

void MC::MobEffect::SATURATION::set(MC::MobEffect ^ value)
{
    ::MobEffect::SATURATION = (class ::MobEffect*)value->NativePtr;
}

MC::MobEffect ^ MC::MobEffect::SLOW_FALLING::get()
{
    return (::MobEffect::SLOW_FALLING == nullptr) ? nullptr : gcnew ::MC::MobEffect((class ::MobEffect*)::MobEffect::SLOW_FALLING);
}

void MC::MobEffect::SLOW_FALLING::set(MC::MobEffect ^ value)
{
    ::MobEffect::SLOW_FALLING = (class ::MobEffect*)value->NativePtr;
}

MC::MobEffect ^ MC::MobEffect::WATER_BREATHING::get()
{
    return (::MobEffect::WATER_BREATHING == nullptr) ? nullptr : gcnew ::MC::MobEffect((class ::MobEffect*)::MobEffect::WATER_BREATHING);
}

void MC::MobEffect::WATER_BREATHING::set(MC::MobEffect ^ value)
{
    ::MobEffect::WATER_BREATHING = (class ::MobEffect*)value->NativePtr;
}

MC::MobEffect ^ MC::MobEffect::WEAKNESS::get()
{
    return (::MobEffect::WEAKNESS == nullptr) ? nullptr : gcnew ::MC::MobEffect((class ::MobEffect*)::MobEffect::WEAKNESS);
}

void MC::MobEffect::WEAKNESS::set(MC::MobEffect ^ value)
{
    ::MobEffect::WEAKNESS = (class ::MobEffect*)value->NativePtr;
}

MC::MobEffect ^ MC::MobEffect::WITHER::get()
{
    return (::MobEffect::WITHER == nullptr) ? nullptr : gcnew ::MC::MobEffect((class ::MobEffect*)::MobEffect::WITHER);
}

void MC::MobEffect::WITHER::set(MC::MobEffect ^ value)
{
    ::MobEffect::WITHER = (class ::MobEffect*)value->NativePtr;
}
#endif // INCLUDE_MCAPI
