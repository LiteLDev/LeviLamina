#include "../../Header/MC/Vec2.hpp"
namespace MC
{
inline float Vec2::X::get()
{
    return NativePtr->x;
}
inline void Vec2::X::set(float mx)
{
    NativePtr->x = mx;
}
inline float Vec2::Y::get()
{
    return NativePtr->y;
}
inline void Vec2::Y::set(float my)
{
    NativePtr->y = my;
}
Vec2 ^ Vec2::Create(float a, float b)
{
    return gcnew Vec2(::Vec2(a, b));
}
inline String ^ Vec2::ToString()
{
    return marshalString<Encoding::E_UTF8>(NativePtr->toString());
}
inline Vec2 ^ Vec2::operator*(Vec2 ^ obj,float num)
{
    return gcnew Vec2(*obj->NativePtr * num);
}
inline Vec2 ^ Vec2::operator+(Vec2 ^ a,Vec2 ^ b)
{
    return gcnew Vec2(*a->NativePtr + b);
}
inline Vec2 ^ Vec2::operator-(Vec2 ^ a,Vec2 ^ b)
{
    return gcnew Vec2(*a->NativePtr - b);
}
} // namespace MC


#ifdef INCLUDE_MCAPI

MC::Vec2::Vec2(MC::Vec2 ^ _0)
{
    OwnsNativeInstance = true;
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::Vec2*)_0->NativePtr;
    NativePtr = new class ::Vec2(__arg0);
}

MC::Vec2 ^ MC::Vec2::LOWEST::get()
{
    return (&::Vec2::LOWEST == nullptr) ? nullptr : gcnew ::MC::Vec2((class ::Vec2*)&::Vec2::LOWEST);
}

MC::Vec2 ^ MC::Vec2::MAX::get()
{
    return (&::Vec2::MAX == nullptr) ? nullptr : gcnew ::MC::Vec2((class ::Vec2*)&::Vec2::MAX);
}

MC::Vec2 ^ MC::Vec2::MIN::get()
{
    return (&::Vec2::MIN == nullptr) ? nullptr : gcnew ::MC::Vec2((class ::Vec2*)&::Vec2::MIN);
}

MC::Vec2 ^ MC::Vec2::NEG_UNIT_X::get()
{
    return (&::Vec2::NEG_UNIT_X == nullptr) ? nullptr : gcnew ::MC::Vec2((class ::Vec2*)&::Vec2::NEG_UNIT_X);
}

MC::Vec2 ^ MC::Vec2::NEG_UNIT_Y::get()
{
    return (&::Vec2::NEG_UNIT_Y == nullptr) ? nullptr : gcnew ::MC::Vec2((class ::Vec2*)&::Vec2::NEG_UNIT_Y);
}

MC::Vec2 ^ MC::Vec2::ONE::get()
{
    return (&::Vec2::ONE == nullptr) ? nullptr : gcnew ::MC::Vec2((class ::Vec2*)&::Vec2::ONE);
}

MC::Vec2 ^ MC::Vec2::UNIT_X::get()
{
    return (&::Vec2::UNIT_X == nullptr) ? nullptr : gcnew ::MC::Vec2((class ::Vec2*)&::Vec2::UNIT_X);
}

MC::Vec2 ^ MC::Vec2::UNIT_Y::get()
{
    return (&::Vec2::UNIT_Y == nullptr) ? nullptr : gcnew ::MC::Vec2((class ::Vec2*)&::Vec2::UNIT_Y);
}

MC::Vec2 ^ MC::Vec2::ZERO::get()
{
    return (&::Vec2::ZERO == nullptr) ? nullptr : gcnew ::MC::Vec2((class ::Vec2*)&::Vec2::ZERO);
}

#endif // INCLUDE_MCAPI
