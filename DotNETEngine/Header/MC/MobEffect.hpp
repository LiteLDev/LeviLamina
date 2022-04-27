#pragma once
#include <MC/MobEffect.hpp>
#include "Types.hpp"


namespace MC
{
public
ref class MobEffect : ClassTemplate<MobEffect, ::MobEffect>
{
public:
    __ctor(MobEffect, ::MobEffect);
    enum class EffectType : short
    {
        Empty = 0,
        Speed = 1,
        Slowness = 2,
        Haste = 3,
        MiningFatigue = 4,
        Strength = 5,
        InstantHealth = 6,
        InstantDamage = 7,
        JumpBoost = 8,
        Nausea = 9,
        Regeneration = 10,
        Resistance = 11,
        FireResistance = 12,
        WaterBreathing = 13,
        Invisibility = 14,
        Blindness = 15,
        NightVision = 16,
        Hunger = 17,
        Weakness = 18,
        Poison = 19,
        Wither = 20,
        HealthBoost = 21,
        Absorption = 22,
        Saturation = 23,
        Levitation = 24,
        FatalPoison = 25,
        ConduitPower = 26,
        SlowFalling = 27,
        BadOmen = 28,
        VillageHero = 29,
    };

    ref class FactorCalculationData : ClassTemplate<FactorCalculationData, ::MobEffect::FactorCalculationData>
    {
    public:
        __ctor(FactorCalculationData, ::MobEffect::FactorCalculationData);
    };

#ifdef INCLUDE_MCAPI

    property bool IsInstantaneous
    {
        bool get();
    }

    property ::System::String ^ DescriptionId {
        ::System::String ^ get();
    };

    property float DurationModifier
    {
        float get();
    };

    property unsigned int Id
    {
        unsigned int get();
    }

    property ::System::String ^ ResourceName {
        ::System::String ^ get();
    };

    property bool IsHarmful
    {
        bool get();
    };

    property bool IsVisible
    {
        bool get();
    }

    static MC::MobEffect ^ GetById(int _0);

    static MC::MobEffect ^ GetByName(::System::String ^ _0);

    static ::System::String ^ GetNameById(int _0);

    static void ShutdownEffects();

    static property MC::MobEffect ^ ABSORPTION {
        MC::MobEffect ^ get();
        void set(MC::MobEffect ^);
    };

    static property MC::MobEffect ^
        BAD_OMEN {
            MC::MobEffect ^ get();
            void set(MC::MobEffect ^);
        };

    static property MC::MobEffect ^
        BLINDNESS {
            MC::MobEffect ^ get();
            void set(MC::MobEffect ^);
        };

    static property MC::MobEffect ^
        CONDUIT_POWER {
            MC::MobEffect ^ get();
            void set(MC::MobEffect ^);
        };

    static property MC::MobEffect ^
        CONFUSION {
            MC::MobEffect ^ get();
            void set(MC::MobEffect ^);
        };

    static property MC::MobEffect ^
        DAMAGE_BOOST {
            MC::MobEffect ^ get();
            void set(MC::MobEffect ^);
        };

    static property MC::MobEffect ^
        DAMAGE_RESISTANCE {
            MC::MobEffect ^ get();
            void set(MC::MobEffect ^);
        };

    static property MC::MobEffect ^
        DARKNESS {
            MC::MobEffect ^ get();
            void set(MC::MobEffect ^);
        };

    static property MC::Mce::Color ^
        DEFAULT_COLOR {
            MC::Mce::Color ^ get();
        };

    static property MC::MobEffect ^
        DIG_SLOWDOWN {
            MC::MobEffect ^ get();
            void set(MC::MobEffect ^);
        };

    static property MC::MobEffect ^
        DIG_SPEED {
            MC::MobEffect ^ get();
            void set(MC::MobEffect ^);
        };

    static property MC::MobEffect ^
        EMPTY_EFFECT {
            MC::MobEffect ^ get();
            void set(MC::MobEffect ^);
        };

    static property MC::MobEffect ^
        FATAL_POISON {
            MC::MobEffect ^ get();
            void set(MC::MobEffect ^);
        };

    static property MC::MobEffect ^
        FIRE_RESISTANCE {
            MC::MobEffect ^ get();
            void set(MC::MobEffect ^);
        };

    static property MC::MobEffect ^
        HARM {
            MC::MobEffect ^ get();
            void set(MC::MobEffect ^);
        };

    static property MC::MobEffect ^
        HEAL {
            MC::MobEffect ^ get();
            void set(MC::MobEffect ^);
        };

    static property MC::MobEffect ^
        HEALTH_BOOST {
            MC::MobEffect ^ get();
            void set(MC::MobEffect ^);
        };

    static property MC::MobEffect ^
        HERO_OF_THE_VILLAGE {
            MC::MobEffect ^ get();
            void set(MC::MobEffect ^);
        };

    static property MC::MobEffect ^
        HUNGER {
            MC::MobEffect ^ get();
            void set(MC::MobEffect ^);
        };

    static property MC::MobEffect ^
        INVISIBILITY {
            MC::MobEffect ^ get();
            void set(MC::MobEffect ^);
        };

    static property MC::MobEffect ^
        JUMP {
            MC::MobEffect ^ get();
            void set(MC::MobEffect ^);
        };

    static property MC::MobEffect ^
        LEVITATION {
            MC::MobEffect ^ get();
            void set(MC::MobEffect ^);
        };

    static property MC::MobEffect ^
        MOVEMENT_SLOWDOWN {
            MC::MobEffect ^ get();
            void set(MC::MobEffect ^);
        };

    static property MC::MobEffect ^
        MOVEMENT_SPEED {
            MC::MobEffect ^ get();
            void set(MC::MobEffect ^);
        };

    static property MC::MobEffect ^
        NIGHT_VISION {
            MC::MobEffect ^ get();
            void set(MC::MobEffect ^);
        };

    static property MC::MobEffect ^
        POISON {
            MC::MobEffect ^ get();
            void set(MC::MobEffect ^);
        };

    static property MC::MobEffect ^
        REGENERATION {
            MC::MobEffect ^ get();
            void set(MC::MobEffect ^);
        };

    static property MC::MobEffect ^
        SATURATION {
            MC::MobEffect ^ get();
            void set(MC::MobEffect ^);
        };

    static property MC::MobEffect ^
        SLOW_FALLING {
            MC::MobEffect ^ get();
            void set(MC::MobEffect ^);
        };

    static property MC::MobEffect ^
        WATER_BREATHING {
            MC::MobEffect ^ get();
            void set(MC::MobEffect ^);
        };

    static property MC::MobEffect ^
        WEAKNESS {
            MC::MobEffect ^ get();
            void set(MC::MobEffect ^);
        };

    static property MC::MobEffect ^
        WITHER {
            MC::MobEffect ^ get();
            void set(MC::MobEffect ^);
        };

#endif // INCLUDE_MCAPI
};
} // namespace MC
