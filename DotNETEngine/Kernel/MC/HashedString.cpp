#include "../../Header/MC/HashedString.hpp"

namespace MC
{
}

#ifdef INCLUDE_MCAPI

MC::HashedString::HashedString(MC::HashedString ^ _0)
{
    OwnsNativeInstance = true;
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::HashedString*)_0->NativePtr;
    NativePtr = new class ::HashedString(__arg0);
}

MC::HashedString::HashedString(::System::String ^ _0)
{
    OwnsNativeInstance = true;
    auto ___arg0 = clix::marshalString<clix::E_UTF8>(_0);
    auto __arg0 = ___arg0.c_str();
    NativePtr = new class ::HashedString(__arg0);
}

MC::HashedString::HashedString(unsigned long long _0, ::System::String ^ _1)
{
    OwnsNativeInstance = true;
    auto ___arg1 = clix::marshalString<clix::E_UTF8>(_1);
    auto __arg1 = ___arg1.c_str();
    NativePtr = new class ::HashedString(_0, __arg1);
}

void MC::HashedString::Clear()
{
    ((class ::HashedString*)NativePtr)->clear();
}

bool MC::HashedString::operator!=(MC::HashedString ^ __op, MC::HashedString ^ _0)
{
    bool __opNull = ReferenceEquals(__op, nullptr);
    bool _0Null = ReferenceEquals(_0, nullptr);
    if (__opNull || _0Null)
        return !(__opNull && _0Null);
    auto& __arg0 = *(class ::HashedString*)__op->NativePtr;
    auto& __arg1 = *(class ::HashedString*)_0->NativePtr;
    auto __ret = __arg0 != __arg1;
    return __ret;
}

bool MC::HashedString::operator<(MC::HashedString ^ __op, MC::HashedString ^ _0)
{
    if (ReferenceEquals(__op, nullptr))
        throw gcnew ::System::ArgumentNullException("__op", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::HashedString*)__op->NativePtr;
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg1 = *(class ::HashedString*)_0->NativePtr;
    auto __ret = __arg0 < __arg1;
    return __ret;
}

bool MC::HashedString::operator==(MC::HashedString ^ __op, MC::HashedString ^ _0)
{
    bool __opNull = ReferenceEquals(__op, nullptr);
    bool _0Null = ReferenceEquals(_0, nullptr);
    if (__opNull || _0Null)
        return __opNull && _0Null;
    auto& __arg0 = *(class ::HashedString*)__op->NativePtr;
    auto& __arg1 = *(class ::HashedString*)_0->NativePtr;
    auto __ret = __arg0 == __arg1;
    return __ret;
}

bool MC::HashedString::Equals(::System::Object ^ obj)
{
    return this == safe_cast<MC::HashedString ^>(obj);
}

//void MC::HashedString::BindType()
//{
//    ::HashedString::bindType();
//}

unsigned long long MC::HashedString::ComputeHash(::System::String ^ _0)
{
    auto ___arg0 = clix::marshalString<clix::E_UTF8>(_0);
    auto __arg0 = ___arg0.c_str();
    auto __ret = ::HashedString::computeHash(__arg0);
    return __ret;
}

::System::String ^ MC::HashedString::CStr::get()
{
    auto __ret = ((class ::HashedString*)NativePtr)->c_str();
    if (__ret == nullptr) return nullptr;
    return (__ret == 0 ? nullptr : clix::marshalString<clix::E_UTF8>(__ret));
}

bool MC::HashedString::Empty::get()
{
    auto __ret = ((class ::HashedString*)NativePtr)->empty();
    return __ret;
}

unsigned long long MC::HashedString::Hash::get()
{
    auto __ret = ((class ::HashedString*)NativePtr)->getHash();
    return __ret;
}

::System::String ^ MC::HashedString::String::get()
{
    auto& __ret = ((class ::HashedString*)NativePtr)->getString();
    return (::System::String ^)(clix::marshalString<clix::E_UTF8>(__ret));
}

bool MC::HashedString::IsEmpty::get()
{
    auto __ret = ((class ::HashedString*)NativePtr)->isEmpty();
    return __ret;
}

MC::HashedString ^ MC::HashedString::EmptyString::get()
{
    auto& __ret = ::HashedString::getEmptyString();
    return (MC::HashedString ^)((&__ret == nullptr) ? nullptr : gcnew ::MC::HashedString((class ::HashedString*)&__ret));
}

MC::HashedString ^ MC::HashedString::DefaultErrorValue::get()
{
    return (&::HashedString::defaultErrorValue == nullptr) ? nullptr : gcnew ::MC::HashedString((class ::HashedString*)&::HashedString::defaultErrorValue);
}

void MC::HashedString::DefaultErrorValue::set(MC::HashedString ^ value)
{
    if (ReferenceEquals(value, nullptr))
        throw gcnew ::System::ArgumentNullException("value", "Cannot be null because it is passed by value.");
    ::HashedString::defaultErrorValue = *(class ::HashedString*)value->NativePtr;
}

#endif // INCLUDE_MCAPI
