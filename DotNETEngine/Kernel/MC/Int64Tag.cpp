#include "../../Header/MC/Int64Tag.hpp"
namespace MC
{
inline int64_t ^ Int64Tag::Value()
{
    return NativePtr->value();
}

inline Int64Tag ^ Int64Tag::operator=(int64_t val)
{
    *NativePtr = val;
    return this;
}

inline Int64Tag ^ Int64Tag::Create()
{
    return gcnew Int64Tag(::Int64Tag::create().release(), true);
}

inline Int64Tag ^ Int64Tag::Create(int64_t val)
{
    return gcnew Int64Tag(::Int64Tag::create(val).release(), true);
}

inline bool Int64Tag::Set(int64_t val)
{
    return NativePtr->set(val);
}

inline int64_t Int64Tag::Get()
{
    return NativePtr->get();
}
} // namespace MC


#ifdef INCLUDE_MCAPI

void MC::Int64Tag::DeleteChildren()
{
    ((class ::Int64Tag*)NativePtr)->deleteChildren();
}

::System::String ^ MC::Int64Tag::ToString()
{
    auto __ret = ((class ::Int64Tag*)NativePtr)->toString();
    return clix::marshalString<clix::E_UTF8>(__ret);
}

MC::Tag::Type MC::Int64Tag::GetId()
{
    auto __ret = ((class ::Int64Tag*)NativePtr)->getId();
    return (MC::Tag::Type)__ret;
}

bool MC::Int64Tag::Equals(MC::Tag ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::Tag*)_0->NativePtr;
    auto __ret = ((class ::Int64Tag*)NativePtr)->equals(__arg0);
    return __ret;
}

unsigned long long MC::Int64Tag::hash()
{
    auto __ret = ((class ::Int64Tag*)NativePtr)->hash();
    return __ret;
}

MC::Int64Tag::operator MC::Int64Tag ^(long long _0) {
    auto __ret = new ::Int64Tag(_0);
    return (__ret == nullptr) ? nullptr : gcnew ::MC::Int64Tag((class ::Int64Tag*)__ret, true);
}

#endif // INCLUDE_MCAPI
