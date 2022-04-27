#include "../../Header/MC/IntArrayTag.hpp"
namespace MC
{
inline TagMemoryChunk ^ IntArrayTag::Value()
{
    return gcnew TagMemoryChunk(NativePtr->value());
}
inline IntArrayTag ^ IntArrayTag::operator=(TagMemoryChunk ^ val)
{
    *NativePtr = val;
    return this;
}
inline IntArrayTag ^ IntArrayTag::Create()
{
    return gcnew IntArrayTag(::IntArrayTag::create().release(), true);
}
inline IntArrayTag ^ IntArrayTag::Create(TagMemoryChunk ^ val)
{
    return gcnew IntArrayTag(::IntArrayTag::create(val).release(), true);
}
inline IntArrayTag ^ IntArrayTag::Create(array<int> ^ data /*, size_t size*/)
{
    pin_ptr<int> p_ptr = &data[0];
    return gcnew IntArrayTag(::IntArrayTag::create(p_ptr, data->Length).release(), true);
}
inline bool IntArrayTag::Set(TagMemoryChunk ^ val)
{
    return NativePtr->set(val);
}
inline TagMemoryChunk ^ IntArrayTag::Get()
{
    return gcnew TagMemoryChunk(NativePtr->get());
}
} // namespace MC


#ifdef INCLUDE_MCAPI

void MC::IntArrayTag::DeleteChildren()
{
    ((class ::IntArrayTag*)NativePtr)->deleteChildren();
}

::System::String ^ MC::IntArrayTag::ToString()
{
    auto __ret = ((class ::IntArrayTag*)NativePtr)->toString();
    return clix::marshalString<clix::E_UTF8>(__ret);
}

MC::Tag::Type MC::IntArrayTag::GetId()
{
    auto __ret = ((class ::IntArrayTag*)NativePtr)->getId();
    return (MC::Tag::Type)__ret;
}

bool MC::IntArrayTag::Equals(MC::Tag ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::Tag*)_0->NativePtr;
    auto __ret = ((class ::IntArrayTag*)NativePtr)->equals(__arg0);
    return __ret;
}

unsigned long long MC::IntArrayTag::hash()
{
    auto __ret = ((class ::IntArrayTag*)NativePtr)->hash();
    return __ret;
}

#endif // INCLUDE_MCAPI
