#pragma once
#include <MC/MobEffectInstance.hpp>
#include "Types.hpp"

namespace MC
{
public
ref class MobEffectInstance : ClassTemplate<MobEffectInstance, ::MobEffectInstance>
{
public:
    __ctor(MobEffectInstance, ::MobEffectInstance);

    property array<char> ^ Filler {
        array<char> ^ get();
        void set(array<char> ^ filler);
    };

#ifdef INCLUDE_MCAPI

    MobEffectInstance(MC::MobEffectInstance ^ _0);

    MobEffectInstance(unsigned int _0);

    MobEffectInstance(unsigned int _0, int _1);

    MobEffectInstance(unsigned int _0, int _1, int _2);

    MobEffectInstance(unsigned int _0, int _1, int _2, int _3, int _4, int _5, bool _6, bool _7, bool _8);

    MobEffectInstance(unsigned int _0, int _1, int _2, bool _3, bool _4, bool _5);

    property bool DisplaysOnScreenTextureAnimation
    {
        bool get();
    }

    property int Amplifier
    {
        int get();
    }

    property ::System::String ^ DisplayName {
        ::System::String ^ get();
    }

        property int Duration
    {
        int get();
        void set(int);
    }

    property unsigned int Id
    {
        unsigned int get();
    }

    property int LingerDuration
    {
        int get();
    }

    property int SplashDuration
    {
        int get();
    }

    property MC::MobEffectInstance ^ SplashEffect {
        MC::MobEffectInstance ^ get();
    }

        property bool IsAmbient
    {
        bool get();
    }

    property bool IsEffectVisible
    {
        bool get();
    }

    static bool operator!=(MC::MobEffectInstance ^ __op, MC::MobEffectInstance ^ _0);

    static bool operator==(MC::MobEffectInstance ^ __op, MC::MobEffectInstance ^ _0);

    virtual bool Equals(::System::Object ^ obj) override;

    void TryInitializeMobEffectData();

    void Update(MC::MobEffectInstance ^ _0);

    static operator MC::MobEffectInstance ^(unsigned int _0);

    static bool AreAllEffectsAmbient(::System::Collections::Generic::List<MC::MobEffectInstance ^> ^ _0);

    static MC::Mce::Color ^ GetColorValue(::System::Collections::Generic::List<MC::MobEffectInstance ^> ^ _0);

    static property int MAX_AMPLIFIER_COUNT
    {
        int get();
    }

    static property MC::MobEffectInstance ^ NO_EFFECT {
        MC::MobEffectInstance ^ get();
    }

#endif // INCLUDE_MCAPI
};
} // namespace MC