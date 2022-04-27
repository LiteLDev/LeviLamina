#include "../../Header/MC/MobEffectInstance.hpp"
namespace MC
{
array<char> ^ MobEffectInstance::Filler::get()
{
    auto arr = gcnew array<char>(48);
    interior_ptr<char> I_ptr = &arr[0];
    char* L_ptr = NativePtr->filler;
    for (int i = 0; i < 48; i++)
        *(I_ptr++) = *(L_ptr++);
    return arr;
}
void MobEffectInstance::Filler::set(array<char> ^ filler)
{
    auto len = filler->Length < 48 ? filler->Length : 48;
    for (int i = 0; i < len; ++i)
        NativePtr->filler[i] = filler[i];
}
} // namespace MC

#ifdef INCLUDE_MCAPI


MC::MobEffectInstance::MobEffectInstance(MC::MobEffectInstance ^ _0)
{
    OwnsNativeInstance = true;
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::MobEffectInstance*)_0->NativePtr;
    NativePtr = new class ::MobEffectInstance(__arg0);
}

MC::MobEffectInstance::MobEffectInstance(unsigned int _0)
{
    OwnsNativeInstance = true;
    NativePtr = new class ::MobEffectInstance(_0);
}

MC::MobEffectInstance::MobEffectInstance(unsigned int _0, int _1)
{
    OwnsNativeInstance = true;
    NativePtr = new class ::MobEffectInstance(_0, _1);
}

MC::MobEffectInstance::MobEffectInstance(unsigned int _0, int _1, int _2)
{
    OwnsNativeInstance = true;
    NativePtr = new class ::MobEffectInstance(_0, _1, _2);
}

MC::MobEffectInstance::MobEffectInstance(unsigned int _0, int _1, int _2, int _3, int _4, int _5, bool _6, bool _7, bool _8)
{
    OwnsNativeInstance = true;
    NativePtr = new class ::MobEffectInstance(_0, _1, _2, _3, _4, _5, _6, _7, _8);
}

MC::MobEffectInstance::MobEffectInstance(unsigned int _0, int _1, int _2, bool _3, bool _4, bool _5)
{
    OwnsNativeInstance = true;
    NativePtr = new class ::MobEffectInstance(_0, _1, _2, _3, _4, _5);
}

bool MC::MobEffectInstance::operator!=(MC::MobEffectInstance ^ __op, MC::MobEffectInstance ^ _0)
{
    bool __opNull = ReferenceEquals(__op, nullptr);
    bool _0Null = ReferenceEquals(_0, nullptr);
    if (__opNull || _0Null)
        return !(__opNull && _0Null);
    auto& __arg0 = *(class ::MobEffectInstance*)__op->NativePtr;
    auto& __arg1 = *(class ::MobEffectInstance*)_0->NativePtr;
    auto __ret = __arg0 != __arg1;
    return __ret;
}

bool MC::MobEffectInstance::operator==(MC::MobEffectInstance ^ __op, MC::MobEffectInstance ^ _0)
{
    bool __opNull = ReferenceEquals(__op, nullptr);
    bool _0Null = ReferenceEquals(_0, nullptr);
    if (__opNull || _0Null)
        return __opNull && _0Null;
    auto& __arg0 = *(class ::MobEffectInstance*)__op->NativePtr;
    auto& __arg1 = *(class ::MobEffectInstance*)_0->NativePtr;
    auto __ret = __arg0 == __arg1;
    return __ret;
}

bool MC::MobEffectInstance::Equals(::System::Object ^ obj)
{
    return this == safe_cast<MC::MobEffectInstance ^>(obj);
}

void MC::MobEffectInstance::TryInitializeMobEffectData()
{
    ((class ::MobEffectInstance*)NativePtr)->tryInitializeMobEffectData();
}

void MC::MobEffectInstance::Update(MC::MobEffectInstance ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::MobEffectInstance*)_0->NativePtr;
    ((class ::MobEffectInstance*)NativePtr)->update(__arg0);
}

bool MC::MobEffectInstance::AreAllEffectsAmbient(::System::Collections::Generic::List<MC::MobEffectInstance ^> ^ _0)
{
    auto _tmp_0 = std::vector<::MobEffectInstance>();
    for each (MC::MobEffectInstance ^ _element in _0)
    {
        if (ReferenceEquals(_element, nullptr))
            throw gcnew ::System::ArgumentNullException("_element", "Cannot be null because it is passed by value.");
        auto _marshalElement = *(class ::MobEffectInstance*)_element->NativePtr;
        _tmp_0.push_back(_marshalElement);
    }
    auto __arg0 = _tmp_0;
    auto __ret = ::MobEffectInstance::areAllEffectsAmbient(__arg0);
    return __ret;
}

MC::Mce::Color ^ MC::MobEffectInstance::GetColorValue(::System::Collections::Generic::List<MC::MobEffectInstance ^> ^ _0)
{
    auto _tmp_0 = std::vector<::MobEffectInstance>();
    for each (MC::MobEffectInstance ^ _element in _0)
    {
        if (ReferenceEquals(_element, nullptr))
            throw gcnew ::System::ArgumentNullException("_element", "Cannot be null because it is passed by value.");
        auto _marshalElement = *(class ::MobEffectInstance*)_element->NativePtr;
        _tmp_0.push_back(_marshalElement);
    }
    auto __arg0 = _tmp_0;
    auto __ret = ::MobEffectInstance::getColorValue(__arg0);
    auto ____ret = new class ::mce::Color(__ret);
    return (____ret == nullptr) ? nullptr : gcnew ::MC::Mce::Color((class ::mce::Color*)____ret, true);
}

MC::MobEffectInstance::operator MC::MobEffectInstance ^(unsigned int _0) {
    auto __ret = (::MobEffectInstance)_0;
    auto ____ret = new class ::MobEffectInstance(__ret);
    return (____ret == nullptr) ? nullptr : gcnew ::MC::MobEffectInstance((class ::MobEffectInstance*)____ret, true);
}

bool MC::MobEffectInstance::DisplaysOnScreenTextureAnimation::get()
{
    auto __ret = ((class ::MobEffectInstance*)NativePtr)->displaysOnScreenTextureAnimation();
    return __ret;
}

int MC::MobEffectInstance::Amplifier::get()
{
    auto __ret = ((class ::MobEffectInstance*)NativePtr)->getAmplifier();
    return __ret;
}

::System::String ^ MC::MobEffectInstance::DisplayName::get()
{
    auto __ret = ((class ::MobEffectInstance*)NativePtr)->getDisplayName();
    return clix::marshalString<clix::E_UTF8>(__ret);
}

int MC::MobEffectInstance::Duration::get()
{
    auto __ret = ((class ::MobEffectInstance*)NativePtr)->getDuration();
    return __ret;
}

void MC::MobEffectInstance::Duration::set(int _0)
{
    ((class ::MobEffectInstance*)NativePtr)->setDuration(_0);
}

unsigned int MC::MobEffectInstance::Id::get()
{
    auto __ret = ((class ::MobEffectInstance*)NativePtr)->getId();
    return __ret;
}

int MC::MobEffectInstance::LingerDuration::get()
{
    auto __ret = ((class ::MobEffectInstance*)NativePtr)->getLingerDuration();
    return __ret;
}

int MC::MobEffectInstance::SplashDuration::get()
{
    auto __ret = ((class ::MobEffectInstance*)NativePtr)->getSplashDuration();
    return __ret;
}

MC::MobEffectInstance ^ MC::MobEffectInstance::SplashEffect::get()
{
    auto __ret = ((class ::MobEffectInstance*)NativePtr)->getSplashEffect();
    auto ____ret = new class ::MobEffectInstance(__ret);
    return (____ret == nullptr) ? nullptr : gcnew ::MC::MobEffectInstance((class ::MobEffectInstance*)____ret, true);
}

bool MC::MobEffectInstance::IsAmbient::get()
{
    auto __ret = ((class ::MobEffectInstance*)NativePtr)->isAmbient();
    return __ret;
}

bool MC::MobEffectInstance::IsEffectVisible::get()
{
    auto __ret = ((class ::MobEffectInstance*)NativePtr)->isEffectVisible();
    return __ret;
}

int MC::MobEffectInstance::MAX_AMPLIFIER_COUNT::get()
{
    return ::MobEffectInstance::MAX_AMPLIFIER_COUNT;
}

MC::MobEffectInstance ^ MC::MobEffectInstance::NO_EFFECT::get()
{
    return (&::MobEffectInstance::NO_EFFECT == nullptr) ? nullptr : gcnew ::MC::MobEffectInstance((class ::MobEffectInstance*)&::MobEffectInstance::NO_EFFECT);
}

#endif // INCLUDE_MCAPI
