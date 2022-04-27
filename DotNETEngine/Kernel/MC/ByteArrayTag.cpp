#include "../../Header/MC/ByteArrayTag.hpp"
#include "../../Header/MC/TagMemoryChunk.hpp"
namespace MC
{

inline TagMemoryChunk ^ ByteArrayTag::Value()
{
    return gcnew TagMemoryChunk(NativePtr->value());
}

inline ByteArrayTag ^ ByteArrayTag::operator=(TagMemoryChunk ^ val)
{
    *NativePtr = val;
    return this;
}

inline ByteArrayTag ^ ByteArrayTag::Create()
{
    return gcnew ByteArrayTag(::ByteArrayTag::create().release(), true);
}

inline ByteArrayTag ^ ByteArrayTag::Create(TagMemoryChunk ^ val)
{
    return gcnew ByteArrayTag(::ByteArrayTag::create(val).release(), true);
}

inline ByteArrayTag ^ ByteArrayTag::Create(array<char> ^ data /*, size_t size*/)
{
    pin_ptr<char> p_ptr = &data[0];
    return gcnew ByteArrayTag(::ByteArrayTag::create((char*)p_ptr, data->Length).release(), true);
}

inline bool ByteArrayTag::Set(TagMemoryChunk ^ val)
{
    return NativePtr->set(val);
}

inline TagMemoryChunk ^ ByteArrayTag::Get()
{
    return gcnew TagMemoryChunk(NativePtr->get());
}
} // namespace MC

#ifdef INCLUDE_MCAPI

void MC::ByteArrayTag::DeleteChildren()
{
    ((class ::ByteArrayTag*)NativePtr)->deleteChildren();
}

::System::String ^ MC::ByteArrayTag::ToString()
{
    auto __ret = ((class ::ByteArrayTag*)NativePtr)->toString();
    return clix::marshalString<clix::E_UTF8>(__ret);
}

MC::Tag::Type MC::ByteArrayTag::GetId()
{
    auto __ret = ((class ::ByteArrayTag*)NativePtr)->getId();
    return (MC::Tag::Type)__ret;
}

bool MC::ByteArrayTag::Equals(MC::Tag ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::Tag*)_0->NativePtr;
    auto __ret = ((class ::ByteArrayTag*)NativePtr)->equals(__arg0);
    return __ret;
}

unsigned long long MC::ByteArrayTag::hash()
{
    auto __ret = ((class ::ByteArrayTag*)NativePtr)->hash();
    return __ret;
}

MC::ByteArrayTag::operator MC::ByteArrayTag ^(MC::TagMemoryChunk ^ _0) {
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is passed by value.");
    auto& __arg0 = *(struct ::TagMemoryChunk*)_0->NativePtr;
    auto __ret = new ::ByteArrayTag(__arg0);
    return (__ret == nullptr) ? nullptr : gcnew ::MC::ByteArrayTag((class ::ByteArrayTag*)__ret, true);
}

#endif // INCLUDE_MCAPI