#include "../../Header/MC/NetworkIdentifier.hpp"
namespace MC
{
inline System::String ^ NetworkIdentifier::IP::get()
{
    return marshalString<Encoding::E_UTF8>(NativePtr->getIP());
}
} // namespace MC

#ifdef INCLUDE_MCAPI
//MC::NetworkIdentifier::NetworkIdentifier(MC::RakNet::RakNetGUID^ _0)
//{
//    __ownsNativeInstance = true;
//    if (ReferenceEquals(_0, nullptr))
//        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
//    auto &__arg0 = *(struct ::RakNet::RakNetGUID*)_0->NativePtr;
//    NativePtr = new class ::NetworkIdentifier(__arg0);
//}

bool MC::NetworkIdentifier::operator==(MC::NetworkIdentifier^ __op, MC::NetworkIdentifier^ _0)
{
    bool __opNull = ReferenceEquals(__op, nullptr);
    bool _0Null = ReferenceEquals(_0, nullptr);
    if (__opNull || _0Null)
        return __opNull && _0Null;
    auto &__arg0 = *(class ::NetworkIdentifier*)__op->NativePtr;
    auto &__arg1 = *(class ::NetworkIdentifier*)_0->NativePtr;
    auto __ret = __arg0 == __arg1;
    return __ret;
}

bool MC::NetworkIdentifier::Equals(::System::Object^ obj)
{
    return this == safe_cast<MC::NetworkIdentifier^>(obj);
}

::System::String^ MC::NetworkIdentifier::ToString()
{
    auto __ret = ((class ::NetworkIdentifier*)NativePtr)->toString();
    return clix::marshalString<clix::E_UTF8>(__ret);
}

//MC::NetworkIdentifier::operator MC::NetworkIdentifier^(MC::RakNet::RakNetGUID^ _0)
//{
//    if (ReferenceEquals(_0, nullptr))
//        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
//    auto &__arg0 = *(struct ::RakNet::RakNetGUID*)_0->NativePtr;
//    auto __ret = (::NetworkIdentifier) __arg0;
//    auto ____ret = new class ::NetworkIdentifier(__ret);
//    return (____ret == nullptr) ? nullptr : gcnew ::MC::NetworkIdentifier((class ::NetworkIdentifier*)____ret, true);
//}

::System::String^ MC::NetworkIdentifier::Address::get()
{
    auto __ret = ((class ::NetworkIdentifier*)NativePtr)->getAddress();
    return clix::marshalString<clix::E_UTF8>(__ret);
}

unsigned long long MC::NetworkIdentifier::Hash::get()
{
    auto __ret = ((class ::NetworkIdentifier*)NativePtr)->getHash();
    return __ret;
}

bool MC::NetworkIdentifier::IsUnassigned::get()
{
    auto __ret = ((class ::NetworkIdentifier*)NativePtr)->isUnassigned();
    return __ret;
}
#endif // INCLUDE_MCAPI
