#include "../../Header/MC/Vec3.hpp"
#include "../../Header/MC/Vec2.hpp"
#include "../../Header/MC/BlockPos.hpp"


namespace MC
{
inline float Vec3::X::get()
{
    return NativePtr->x;
}
inline void Vec3::X::set(float mx)
{
    NativePtr->x = mx;
}
inline float Vec3::Y::get()
{
    return NativePtr->y;
}
inline void Vec3::Y::set(float my)
{
    NativePtr->y = my;
}
inline float Vec3::Z::get()
{
    return NativePtr->z;
}
inline void Vec3::Z::set(float mz)
{
    NativePtr->z = mz;
}

inline Vec3 ^ Vec3::Create()
{
    return gcnew Vec3(::Vec3());
}

inline Vec3 ^ Vec3::Create(float _x, float _y, float _z)
{
    return gcnew Vec3(::Vec3(_x, _y, _z));
}

inline Vec3 ^ Vec3::Create(BlockPos ^ pos)
{
    return gcnew Vec3(::Vec3(pos));
}

inline Vec3 ^ Vec3::Create(double _x, double _y, double _z)
{
    return gcnew Vec3(::Vec3(_x, _y, _z));
}

inline Vec3 ^ Vec3::Create(int _x, int _y, int _z)
{
    return gcnew Vec3(::Vec3(_x, _y, _z));
}

inline String ^ Vec3::ToString()
{
    return marshalString<Encoding::E_UTF8>(NativePtr->toString());
}

inline BlockPos ^ Vec3::ToBlockPos()
{
    return gcnew BlockPos(NativePtr->toBlockPos());
}

inline float Vec3::Length()
{
    return NativePtr->length();
}

inline float Vec3::DistanceTo(Vec3 ^ vec3)
{
    return NativePtr->distanceTo(vec3);
}

inline Vec3 ^ Vec3::Add(float dx, float dy, float dz)
{
    return gcnew Vec3(NativePtr->add(dx, dy, dz));
}

inline Vec3 ^ Vec3::Normalize()
{
    return gcnew Vec3(NativePtr->normalize());
}

inline Vec3 ^ Vec3::operator*(Vec3 ^ a, float num)
{
    return gcnew Vec3(*a->NativePtr * num);
}
inline Vec3 ^ Vec3::operator+(Vec3 ^ a, Vec3 ^ b)
{
    return gcnew Vec3(*a->NativePtr + b);
}
inline Vec3 ^ Vec3::operator-(Vec3 ^ a, Vec3 ^ b)
{
    return gcnew Vec3(*a->NativePtr - b);
}
inline bool Vec3::operator==(Vec3 ^ a, Vec3 ^ b)
{
    return *a->NativePtr == b;
}


} // namespace MC


#ifdef INCLUDE_MCAPI

MC::Vec3 ^ MC::Vec3::Ceil()
{
    auto __ret = ((class ::Vec3*)NativePtr)->ceil();
    auto ____ret = new class ::Vec3(__ret);
    return (____ret == nullptr) ? nullptr : gcnew ::MC::Vec3((class ::Vec3*)____ret, true);
}

float MC::Vec3::DistanceToLineSquared(MC::Vec3 ^ _0, MC::Vec3 ^ _1)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::Vec3*)_0->NativePtr;
    if (ReferenceEquals(_1, nullptr))
        throw gcnew ::System::ArgumentNullException("_1", "Cannot be null because it is a C++ reference (&).");
    auto& __arg1 = *(class ::Vec3*)_1->NativePtr;
    auto __ret = ((class ::Vec3*)NativePtr)->distanceToLineSquared(__arg0, __arg1);
    return __ret;
}

float MC::Vec3::DistanceToSqr(MC::Vec3 ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::Vec3*)_0->NativePtr;
    auto __ret = ((class ::Vec3*)NativePtr)->distanceToSqr(__arg0);
    return __ret;
}

MC::Vec3 ^ MC::Vec3::Floor(float _0)
{
    auto __ret = ((class ::Vec3*)NativePtr)->floor(_0);
    auto ____ret = new class ::Vec3(__ret);
    return (____ret == nullptr) ? nullptr : gcnew ::MC::Vec3((class ::Vec3*)____ret, true);
}

MC::Vec3 ^ MC::Vec3::Clamp(MC::Vec3 ^ _0, MC::Vec3 ^ _1, MC::Vec3 ^ _2)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::Vec3*)_0->NativePtr;
    if (ReferenceEquals(_1, nullptr))
        throw gcnew ::System::ArgumentNullException("_1", "Cannot be null because it is a C++ reference (&).");
    auto& __arg1 = *(class ::Vec3*)_1->NativePtr;
    if (ReferenceEquals(_2, nullptr))
        throw gcnew ::System::ArgumentNullException("_2", "Cannot be null because it is a C++ reference (&).");
    auto& __arg2 = *(class ::Vec3*)_2->NativePtr;
    auto __ret = ::Vec3::clamp(__arg0, __arg1, __arg2);
    auto ____ret = new class ::Vec3(__ret);
    return (____ret == nullptr) ? nullptr : gcnew ::MC::Vec3((class ::Vec3*)____ret, true);
}

MC::Vec3 ^ MC::Vec3::DirectionFromRotation(MC::Vec2 ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::Vec2*)_0->NativePtr;
    auto __ret = ::Vec3::directionFromRotation(__arg0);
    auto ____ret = new class ::Vec3(__ret);
    return (____ret == nullptr) ? nullptr : gcnew ::MC::Vec3((class ::Vec3*)____ret, true);
}

MC::Vec2 ^ MC::Vec3::RotationFromDirection(MC::Vec3 ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::Vec3*)_0->NativePtr;
    auto __ret = ::Vec3::rotationFromDirection(__arg0);
    auto ____ret = new class ::Vec2(__ret);
    return (____ret == nullptr) ? nullptr : gcnew ::MC::Vec2((class ::Vec2*)____ret, true);
}

MC::Vec3 ^ MC::Vec3::Abs::get()
{
    auto __ret = ((class ::Vec3*)NativePtr)->abs();
    auto ____ret = new class ::Vec3(__ret);
    return (____ret == nullptr) ? nullptr : gcnew ::MC::Vec3((class ::Vec3*)____ret, true);
}

bool MC::Vec3::IsNan::get()
{
    auto __ret = ((class ::Vec3*)NativePtr)->isNan();
    return __ret;
}

float MC::Vec3::MaxComponent::get()
{
    auto __ret = ((class ::Vec3*)NativePtr)->maxComponent();
    return __ret;
}

MC::Vec3 ^ MC::Vec3::Normalized::get()
{
    auto __ret = ((class ::Vec3*)NativePtr)->normalized();
    auto ____ret = new class ::Vec3(__ret);
    return (____ret == nullptr) ? nullptr : gcnew ::MC::Vec3((class ::Vec3*)____ret, true);
}

MC::Vec3 ^ MC::Vec3::Xz::get()
{
    auto __ret = ((class ::Vec3*)NativePtr)->xz();
    auto ____ret = new class ::Vec3(__ret);
    return (____ret == nullptr) ? nullptr : gcnew ::MC::Vec3((class ::Vec3*)____ret, true);
}

MC::Vec3 ^ MC::Vec3::HALF::get()
{
    return (&::Vec3::HALF == nullptr) ? nullptr : gcnew ::MC::Vec3((class ::Vec3*)&::Vec3::HALF);
}

MC::Vec3 ^ MC::Vec3::MAX::get()
{
    return (&::Vec3::MAX == nullptr) ? nullptr : gcnew ::MC::Vec3((class ::Vec3*)&::Vec3::MAX);
}

MC::Vec3 ^ MC::Vec3::MIN::get()
{
    return (&::Vec3::MIN == nullptr) ? nullptr : gcnew ::MC::Vec3((class ::Vec3*)&::Vec3::MIN);
}

MC::Vec3 ^ MC::Vec3::NEG_UNIT_X::get()
{
    return (&::Vec3::NEG_UNIT_X == nullptr) ? nullptr : gcnew ::MC::Vec3((class ::Vec3*)&::Vec3::NEG_UNIT_X);
}

MC::Vec3 ^ MC::Vec3::NEG_UNIT_Y::get()
{
    return (&::Vec3::NEG_UNIT_Y == nullptr) ? nullptr : gcnew ::MC::Vec3((class ::Vec3*)&::Vec3::NEG_UNIT_Y);
}

MC::Vec3 ^ MC::Vec3::NEG_UNIT_Z::get()
{
    return (&::Vec3::NEG_UNIT_Z == nullptr) ? nullptr : gcnew ::MC::Vec3((class ::Vec3*)&::Vec3::NEG_UNIT_Z);
}

MC::Vec3 ^ MC::Vec3::ONE::get()
{
    return (&::Vec3::ONE == nullptr) ? nullptr : gcnew ::MC::Vec3((class ::Vec3*)&::Vec3::ONE);
}

MC::Vec3 ^ MC::Vec3::TWO::get()
{
    return (&::Vec3::TWO == nullptr) ? nullptr : gcnew ::MC::Vec3((class ::Vec3*)&::Vec3::TWO);
}

MC::Vec3 ^ MC::Vec3::UNIT_X::get()
{
    return (&::Vec3::UNIT_X == nullptr) ? nullptr : gcnew ::MC::Vec3((class ::Vec3*)&::Vec3::UNIT_X);
}

MC::Vec3 ^ MC::Vec3::UNIT_Y::get()
{
    return (&::Vec3::UNIT_Y == nullptr) ? nullptr : gcnew ::MC::Vec3((class ::Vec3*)&::Vec3::UNIT_Y);
}

MC::Vec3 ^ MC::Vec3::UNIT_Z::get()
{
    return (&::Vec3::UNIT_Z == nullptr) ? nullptr : gcnew ::MC::Vec3((class ::Vec3*)&::Vec3::UNIT_Z);
}

MC::Vec3 ^ MC::Vec3::ZERO::get()
{
    return (&::Vec3::ZERO == nullptr) ? nullptr : gcnew ::MC::Vec3((class ::Vec3*)&::Vec3::ZERO);
}

MC::Vec3::Vec3(MC::Vec3 ^ _0)
{
    OwnsNativeInstance = true;
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::Vec3*)_0->NativePtr;
    NativePtr = new class ::Vec3(__arg0);
}

#endif // INCLUDE_MCAPI
