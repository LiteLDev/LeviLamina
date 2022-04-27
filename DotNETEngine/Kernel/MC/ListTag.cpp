#include "../../Header/MC/ListTag.hpp"
namespace MC
{
inline ListTag ^ ListTag::Create()
{
    return gcnew ListTag(::ListTag::create().release(), true);
}

List<Tag ^> ^ ListTag::Value()
{
    std::vector<::Tag*>& stdvector = NativePtr->value();
    auto len = int(stdvector.size());
    auto list = gcnew List<Tag ^>(len);
    for (int i = 0; i < len; i++)
        list[i] = gcnew Tag(stdvector[i]);
    return list;
}

inline Tag const ^ ListTag::operator[](int index)
{
    return gcnew Tag(((::Tag*)((*NativePtr)[index])));
}

inline Tag::Type const ListTag::GetElementType()
{
    return Tag::Type(NativePtr->getElementType());
}

inline size_t ListTag::getSize()
{
    return NativePtr->getSize();
}

List<Tag ^> ^ ListTag::Get()
{
    std::vector<::Tag*>& stdvector = NativePtr->get();
    auto len = int(stdvector.size());
    auto list = gcnew List<Tag ^>(len);
    for (int i = 0; i < len; i++)
        list[i] = gcnew Tag(stdvector[i]);
    return list;
}

inline unsigned char ListTag::GetByte(int i)
{
    return NativePtr->getByte(i);
}

inline short ListTag::GetShort(int i)
{
    return NativePtr->getShort(i);
}

inline int64_t ListTag::GetInt64(int i)
{
    return NativePtr->getInt64(i);
}

inline TagMemoryChunk ^ ListTag::GetByteArray(int i)
{
    return gcnew TagMemoryChunk(&NativePtr->getByteArray(i));
}

inline void ListTag::AddEnd()
{
    NativePtr->addEnd();
}
inline void ListTag::AddByte(unsigned char v)
{
    NativePtr->addByte(v);
}
inline void ListTag::AddShort(short v)
{
    NativePtr->addShort(v);
}
inline void ListTag::AddInt(int v)
{
    NativePtr->addInt(v);
}
inline void ListTag::AddInt64(__int64 v)
{
    NativePtr->addInt64(v);
}
inline void ListTag::AddFloat(float v)
{
    NativePtr->addFloat(v);
}
inline void ListTag::AddDouble(double v)
{
    NativePtr->addDouble(v);
}
inline void ListTag::AddString(String ^ v)
{
    NativePtr->addString(marshalString<Encoding::E_UTF8>(v));
}
inline void ListTag::AddByteArray(TagMemoryChunk ^ byteArr)
{
    NativePtr->addByteArray(byteArr);
}
inline void ListTag::AddByteArray(array<char> ^ data /*, size_t size*/)
{
    pin_ptr<char> p_ptr = &data[0];
    NativePtr->addByteArray((char*)p_ptr, data->Length);
}
inline void ListTag::AddIntArray(TagMemoryChunk ^ intArr)
{
    NativePtr->addByteArray(intArr);
}
inline void ListTag::AddIntArray(array<int> ^ data /*, size_t size*/)
{
    pin_ptr<int> p_ptr = &data[0];
    NativePtr->addIntArray((int*)p_ptr, data->Length);
}
} // namespace MC


#ifdef INCLUDE_MCAPI

void MC::ListTag::DeleteChildren()
{
    ((class ::ListTag*)NativePtr)->deleteChildren();
}

::System::String ^ MC::ListTag::ToString()
{
    auto __ret = ((class ::ListTag*)NativePtr)->toString();
    return clix::marshalString<clix::E_UTF8>(__ret);
}

MC::Tag::Type MC::ListTag::GetId()
{
    auto __ret = ((class ::ListTag*)NativePtr)->getId();
    return (MC::Tag::Type)__ret;
}

bool MC::ListTag::Equals(MC::Tag ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::Tag*)_0->NativePtr;
    auto __ret = ((class ::ListTag*)NativePtr)->equals(__arg0);
    return __ret;
}

unsigned long long MC::ListTag::hash()
{
    auto __ret = ((class ::ListTag*)NativePtr)->hash();
    return __ret;
}

void MC::ListTag::Erase(unsigned long long _0)
{
    ((class ::ListTag*)NativePtr)->erase(_0);
}

MC::Tag ^ MC::ListTag::Get(int _0)
{
    auto __ret = ((class ::ListTag*)NativePtr)->get(_0);
    if (__ret == nullptr) return nullptr;
    return (__ret == nullptr) ? nullptr : gcnew ::MC::Tag((class ::Tag*)__ret);
}

double MC::ListTag::GetDouble(int _0)
{
    auto __ret = ((class ::ListTag*)NativePtr)->getDouble(_0);
    return __ret;
}

float MC::ListTag::GetFloat(int _0)
{
    auto __ret = ((class ::ListTag*)NativePtr)->getFloat(_0);
    return __ret;
}

int MC::ListTag::GetInt(int _0)
{
    auto __ret = ((class ::ListTag*)NativePtr)->getInt(_0);
    return __ret;
}

::System::String ^ MC::ListTag::GetString(int _0)
{
    auto& __ret = ((class ::ListTag*)NativePtr)->getString(_0);
    return (::System::String ^)(clix::marshalString<clix::E_UTF8>(__ret));
}

void MC::ListTag::PopBack()
{
    ((class ::ListTag*)NativePtr)->popBack();
}

int MC::ListTag::Size::get()
{
    auto __ret = ((class ::ListTag*)NativePtr)->size();
    return __ret;
}

#endif // INCLUDE_MCAPI
