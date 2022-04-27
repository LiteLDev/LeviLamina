#include "../../Header/MC/Types.hpp"

#include "../../Header/MC/BlockPos.hpp"
#include "../../Header/MC/AABB.hpp"
#include "../../Header/MC/Vec3.hpp"

namespace MC
{
String ^ Mce::UUID::ToString()
{
    return gcnew String(marshalString<Encoding::E_UTF8>(NativePtr->asString()));
}

Mce::UUID ^ Mce::UUID::FromString(String ^ str)
{
    return gcnew UUID(::mce::UUID::fromString(marshalString<Encoding::E_UTF8>(str->ToString())));
}

bool Mce::UUID::IsEmpty::get()
{
    return NativePtr->isEmpty();
}

Mce::UUID ^ Mce::UUID::SeedFromString(String ^ str)
{
    return gcnew UUID(&mce::UUID::seedFromString(marshalString<Encoding::E_UTF8>(str)));
}

Mce::UUID::operator bool()
{
    return IsEmpty;
}

inline BlockPos ^ BoundingBox::Bpos1::get()
{
    return gcnew BlockPos(NativePtr->bpos1);
}
inline void BoundingBox::Bpos1::set(BlockPos ^ bpos)
{
    NativePtr->bpos1 = bpos;
}
inline BlockPos ^ BoundingBox::Bpos2::get()
{
    return gcnew BlockPos(NativePtr->bpos2);
}
inline void BoundingBox::Bpos2::set(BlockPos ^ bpos)
{
    NativePtr->bpos2 = bpos;
}
inline BlockPos ^ BoundingBox::GetCenter()
{
    return gcnew BlockPos(NativePtr->getCenter());
}
inline AABB ^ BoundingBox::ToAABB()
{
    ::Vec3 vec1 = {(float)Bpos1->X, (float)Bpos1->Y, (float)Bpos1->Z};
    ::Vec3 vec2 = {(float)Bpos1->X, (float)Bpos1->Y, (float)Bpos1->Z};
    return gcnew AABB({vec1, vec2 + ::Vec3{1, 1, 1}});
}

ActorUniqueID ^ ActorUniqueID::Create()
{
    return gcnew ActorUniqueID(::ActorUniqueID());
}
ActorUniqueID ^ ActorUniqueID::Create(long long i)
{
    return gcnew ActorUniqueID(::ActorUniqueID(i));
}
inline long long ActorUniqueID::get()
{
    return NativePtr->get();
}
inline ActorUniqueID::operator long long()
{
    return ((long long)*NativePtr);
}

ActorRuntimeID::ActorRuntimeID()
    : ClassTemplate(::ActorRuntimeID())
{
}
inline long long ActorRuntimeID::get()
{
    return NativePtr->get();
}
inline ActorRuntimeID::operator long long()
{
    return ((long long)*NativePtr);
}
} // namespace MC


MC::Mce::Color ^ MC::Mce::Color::FromHexString(::System::String ^ _0)
{
    auto __arg0 = clix::marshalString<clix::E_UTF8>(_0);
    auto __ret = ::mce::Color::fromHexString(__arg0);
    auto ____ret = new class ::mce::Color(__ret);
    return (____ret == nullptr) ? nullptr : gcnew ::MC::Mce::Color((class ::mce::Color*)____ret, true);
}

bool MC::Mce::Color::operator==(MC::Mce::Color ^ __op, MC::Mce::Color ^ _0)
{
    bool __opNull = ReferenceEquals(__op, nullptr);
    bool _0Null = ReferenceEquals(_0, nullptr);
    if (__opNull || _0Null)
        return __opNull && _0Null;
    auto& __arg0 = *(class ::mce::Color*)__op->NativePtr;
    auto& __arg1 = *(class ::mce::Color*)_0->NativePtr;
    auto __ret = __arg0 == __arg1;
    return __ret;
}

bool MC::Mce::Color::Equals(::System::Object ^ obj)
{
    return this == safe_cast<MC::Mce::Color ^>(obj);
}

int MC::Mce::Color::ToABGR()
{
    auto __ret = ((class ::mce::Color*)NativePtr)->toABGR();
    return __ret;
}

int MC::Mce::Color::ToARGB()
{
    auto __ret = ((class ::mce::Color*)NativePtr)->toARGB();
    return __ret;
}

::System::String ^ MC::Mce::Color::ToHexString()
{
    auto __ret = ((class ::mce::Color*)NativePtr)->toHexString();
    return clix::marshalString<clix::E_UTF8>(__ret);
}

MC::Mce::Color::Color(MC::Mce::Color ^ _0)
{
    OwnsNativeInstance = true;
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::mce::Color*)_0->NativePtr;
    NativePtr = new class ::mce::Color(__arg0);
}

::System::IntPtr MC::Mce::Color::__Instance::get()
{
    return ::System::IntPtr(NativePtr);
}

void MC::Mce::Color::__Instance::set(::System::IntPtr object)
{
    NativePtr = (class ::mce::Color*)object.ToPointer();
}
MC::Mce::Color ^ MC::Mce::Color::NIL::get()
{
    return (&::mce::Color::NIL == nullptr) ? nullptr : gcnew ::MC::Mce::Color((class ::mce::Color*)&::mce::Color::NIL);
}
