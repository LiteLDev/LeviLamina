#include "../../Header/MC/CompoundTag.hpp"

#include "../../Header/MC/ItemStack.hpp"
#include "../../Header/MC/Actor.hpp"
#include "../../Header/MC/Block.hpp"
#include "../../Header/MC/BlockActor.hpp"
#include "../../Header/MC/Player.hpp"
#include "../../Header/MC/CompoundTagVariant.hpp"
#include "../../Header/MC/ByteArrayTag.hpp"
#include "../../Header/MC/ByteTag.hpp"
#include "../../Header/MC/CompoundTag.hpp"
#include "../../Header/MC/DoubleTag.hpp"
#include "../../Header/MC/ShortTag.hpp"
#include "../../Header/MC/EndTag.hpp"
#include "../../Header/MC/FloatTag.hpp"
#include "../../Header/MC/Int64Tag.hpp"
#include "../../Header/MC/IntArrayTag.hpp"
#include "../../Header/MC/IntTag.hpp"
#include "../../Header/MC/ListTag.hpp"
#include "../../Header/MC/ShortTag.hpp"
#include "../../Header/MC/StringTag.hpp"
#include "../../Header/MC/Tag.hpp"

namespace MC
{

inline CompoundTag ^ CompoundTag::Create()
{
    return gcnew CompoundTag(::CompoundTag::create().release(), true);
}

inline Dictionary<System::String ^, CompoundTagVariant ^> ^ CompoundTag::Value()
{
    Dictionary<System::String ^, CompoundTagVariant ^> ^ ret;
    auto& stdmap = NativePtr->value();
    ret = gcnew Dictionary<System::String ^, CompoundTagVariant ^>(int(stdmap.size()));
    for (auto iter = stdmap.begin(); iter != stdmap.end(); ++iter)
        ret->Add(
            marshalString<Encoding::E_UTF8>((*iter).first),
            gcnew CompoundTagVariant(&iter->second));
    return ret;
}

// put value
inline void CompoundTag::PutEnd(System::String ^ key)
{
    NativePtr->putEnd(marshalString<Encoding::E_UTF8>(key));
}

inline double ^ CompoundTag::PutDouble(System::String ^ key, double val)
{
    return NativePtr->putDouble(marshalString<Encoding::E_UTF8>(key), val);
}

inline void CompoundTag::PutByteArray(System::String ^ key, array<char> ^ data /*, size_t size*/)
{
    pin_ptr<char> p_ptr = &data[0];
    NativePtr->putByteArray(marshalString<Encoding::E_UTF8>(key), (char*)p_ptr, data->Length);
}

inline void CompoundTag::PutIntArray(System::String ^ key, array<int> ^ data /*, size_t size*/)
{
    pin_ptr<int> p_ptr = &data[0];
    NativePtr->putIntArray(marshalString<Encoding::E_UTF8>(key), (int*)p_ptr, data->Length);
}

inline TagMemoryChunk ^ CompoundTag::PutIntArray(System::String ^ key, TagMemoryChunk ^ val)
{
    return gcnew TagMemoryChunk(
        NativePtr->putIntArray(marshalString<Encoding::E_UTF8>(key), val));
}

// get value
inline double CompoundTag::GetDouble(System::String ^ key)
{
    return NativePtr->getDouble(marshalString<Encoding::E_UTF8>(key));
}

inline TagMemoryChunk const ^ CompoundTag::GetIntArray(System::String ^ key)
{
    return gcnew TagMemoryChunk(::TagMemoryChunk(NativePtr->getIntArray(marshalString<Encoding::E_UTF8>(key))));
}

// get tag
inline ByteTag const ^ CompoundTag::GetByteTag(System::String ^ key)
{
    return gcnew ByteTag((::ByteTag*)NativePtr->getByteTag(marshalString<Encoding::E_UTF8>(key)));
}
inline ShortTag const ^ CompoundTag::GetShortTag(System::String ^ key)
{
    return gcnew ShortTag((::ShortTag*)NativePtr->getShortTag(marshalString<Encoding::E_UTF8>(key)));
}
inline FloatTag const ^ CompoundTag::GetFloatTag(System::String ^ key)
{
    return gcnew FloatTag((::FloatTag*)NativePtr->getFloatTag(marshalString<Encoding::E_UTF8>(key)));
}
inline DoubleTag const ^ CompoundTag::GetDoubleTag(System::String ^ key)
{
    return gcnew DoubleTag((::DoubleTag*)NativePtr->getDoubleTag(marshalString<Encoding::E_UTF8>(key)));
}
inline ByteArrayTag const ^ CompoundTag::GetByteArrayTag(System::String ^ key)
{
    return gcnew ByteArrayTag((::ByteArrayTag*)NativePtr->getByteArrayTag(marshalString<Encoding::E_UTF8>(key)));
}
inline StringTag const ^ CompoundTag::GetStringTag(System::String ^ key)
{
    return gcnew StringTag((::StringTag*)NativePtr->getStringTag(marshalString<Encoding::E_UTF8>(key)));
}
inline IntArrayTag const ^ CompoundTag::GetIntArrayTag(System::String ^ key)
{
    return gcnew IntArrayTag((::IntArrayTag*)NativePtr->getIntArrayTag(marshalString<Encoding::E_UTF8>(key)));
}
inline ListTag const ^ CompoundTag::GetListTag(System::String ^ key)
{
    return gcnew ListTag((::ListTag*)NativePtr->getListTag(marshalString<Encoding::E_UTF8>(key)));
}
inline CompoundTag ^ CompoundTag::GetCompoundTag(System::String ^ key)
{
    return gcnew CompoundTag((::CompoundTag*)NativePtr->getCompoundTag(marshalString<Encoding::E_UTF8>(key)));
}
inline Tag ^ CompoundTag::operator[](System::String ^ key)
{
    return gcnew Tag((*NativePtr)[marshalString<Encoding::E_UTF8>(key)]);
}

// io
inline void CompoundTag::SetItemStack(ItemStack ^ item)
{
    NativePtr->setItemStack(item->NativePtr);
}

inline void CompoundTag::SetBlock(Block ^ block)
{
    NativePtr->setBlock(block);
}

inline bool CompoundTag::SetActor(Actor ^ actor)
{
    return NativePtr->setActor(actor);
}

inline bool CompoundTag::SetBlockActor(BlockActor ^ ble)
{
    return NativePtr->setBlockActor(ble);
}

inline bool CompoundTag::SetPlayer(Player ^ player)
{
    return NativePtr->setPlayer(player->NativePtr);
}

inline CompoundTag ^ CompoundTag::FromItemStack(ItemStack ^ item)
{
    return gcnew CompoundTag(::CompoundTag::fromItemStack(item->NativePtr).release(), true);
}

inline CompoundTag ^ CompoundTag::FromBlock(Block ^ block)
{
    return gcnew CompoundTag(::CompoundTag::fromBlock(block).release(), true);
}

inline CompoundTag ^ CompoundTag::FromActor(Actor ^ actor)
{
    return gcnew CompoundTag(::CompoundTag::fromActor(actor).release(), true);
}

inline CompoundTag ^ CompoundTag::FromBlockActor(BlockActor ^ blockActor)
{
    return gcnew CompoundTag(::CompoundTag::fromBlockActor(blockActor).release(), true);
}

inline CompoundTag ^ CompoundTag::FromPlayer(Player ^ player)
{
    return gcnew CompoundTag(::CompoundTag::fromPlayer(player->NativePtr).release(), true);
}

inline System::String ^ CompoundTag::ToSNBT()
{
    return marshalString<Encoding::E_UTF8>(NativePtr->toSNBT());
}
inline System::String ^ CompoundTag::ToBinaryNBT(bool isLittleEndian)
{
    return marshalString<Encoding::E_UTF8>(NativePtr->toBinaryNBT(isLittleEndian));
}
inline System::String ^ CompoundTag::ToBinaryNBT()
{
    return marshalString<Encoding::E_UTF8>(NativePtr->toBinaryNBT());
}
inline CompoundTag ^ CompoundTag::FromSNBT(System::String ^ snbt)
{
    return gcnew CompoundTag(::CompoundTag::fromSNBT(marshalString<Encoding::E_UTF8>(snbt)).release(), true);
}
inline CompoundTag ^ CompoundTag::FromBinaryNBT(void* data, size_t len, bool isLittleEndian)
{
    return gcnew CompoundTag(::CompoundTag::fromBinaryNBT(data, len, isLittleEndian).release(), true);
}
inline CompoundTag ^ CompoundTag::FromBinaryNBT(void* data, size_t len)
{
    return gcnew CompoundTag(::CompoundTag::fromBinaryNBT(data, len).release(), true);
}
inline CompoundTag ^ CompoundTag::FromBinaryNBT(void* data, size_t len, size_t& endOffset, bool isLittleEndian)
{
    return gcnew CompoundTag(::CompoundTag::fromBinaryNBT(data, len, endOffset, isLittleEndian).release(), true);
}
inline CompoundTag ^ CompoundTag::FromBinaryNBT(void* data, size_t len, size_t& endOffset)
{
    return gcnew CompoundTag(::CompoundTag::fromBinaryNBT(data, len, endOffset).release(), true);
}

} // namespace MC


#ifdef INCLUDE_MCAPI

#include <memory>

void MC::CompoundTag::DeleteChildren()
{
    ((class ::CompoundTag*)NativePtr)->deleteChildren();
}

::System::String ^ MC::CompoundTag::ToString()
{
    auto __ret = ((class ::CompoundTag*)NativePtr)->toString();
    return clix::marshalString<clix::E_UTF8>(__ret);
}

MC::Tag::Type MC::CompoundTag::GetId()
{
    auto __ret = ((class ::CompoundTag*)NativePtr)->getId();
    return (MC::Tag::Type)__ret;
}

bool MC::CompoundTag::Equals(MC::Tag ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::Tag*)_0->NativePtr;
    auto __ret = ((class ::CompoundTag*)NativePtr)->equals(__arg0);
    return __ret;
}

unsigned long long MC::CompoundTag::hash()
{
    auto __ret = ((class ::CompoundTag*)NativePtr)->hash();
    return __ret;
}

void MC::CompoundTag::Append(MC::CompoundTag ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::CompoundTag*)_0->NativePtr;
    ((class ::CompoundTag*)NativePtr)->append(__arg0);
}

void MC::CompoundTag::Clear()
{
    ((class ::CompoundTag*)NativePtr)->clear();
}

bool MC::CompoundTag::Contains(::System::String ^ _0)
{
    auto __arg0 = clix::marshalString<clix::E_UTF8>(_0);
    auto __ret = ((class ::CompoundTag*)NativePtr)->contains(__arg0);
    return __ret;
}

bool MC::CompoundTag::Contains(::System::String ^ _0, MC::Tag::Type _1)
{
    auto __arg0 = clix::marshalString<clix::E_UTF8>(_0);
    auto __arg1 = (enum ::Tag::Type)_1;
    auto __ret = ((class ::CompoundTag*)NativePtr)->contains(__arg0, __arg1);
    return __ret;
}

void MC::CompoundTag::DeepCopy(MC::CompoundTag ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::CompoundTag*)_0->NativePtr;
    ((class ::CompoundTag*)NativePtr)->deepCopy(__arg0);
}

MC::Tag ^ MC::CompoundTag::Get(::System::String ^ _0)
{
    auto __arg0 = clix::marshalString<clix::E_UTF8>(_0);
    auto __ret = ((class ::CompoundTag*)NativePtr)->get(__arg0);
    if (__ret == nullptr) return nullptr;
    return (__ret == nullptr) ? nullptr : gcnew ::MC::Tag((class ::Tag*)__ret);
}

bool MC::CompoundTag::GetBoolean(::System::String ^ _0)
{
    auto __arg0 = clix::marshalString<clix::E_UTF8>(_0);
    auto __ret = ((class ::CompoundTag*)NativePtr)->getBoolean(__arg0);
    return __ret;
}

unsigned char MC::CompoundTag::GetByte(::System::String ^ _0)
{
    auto __arg0 = clix::marshalString<clix::E_UTF8>(_0);
    auto __ret = ((class ::CompoundTag*)NativePtr)->getByte(__arg0);
    return __ret;
}

MC::CompoundTag ^ MC::CompoundTag::GetCompound(::System::String ^ _0)
{
    auto __arg0 = clix::marshalString<clix::E_UTF8>(_0);
    auto __ret = ((class ::CompoundTag*)NativePtr)->getCompound(__arg0);
    if (__ret == nullptr) return nullptr;
    return (__ret == nullptr) ? nullptr : gcnew ::MC::CompoundTag((class ::CompoundTag*)__ret);
}

float MC::CompoundTag::GetFloat(::System::String ^ _0)
{
    auto __arg0 = clix::marshalString<clix::E_UTF8>(_0);
    auto __ret = ((class ::CompoundTag*)NativePtr)->getFloat(__arg0);
    return __ret;
}

int MC::CompoundTag::GetInt(::System::String ^ _0)
{
    auto __arg0 = clix::marshalString<clix::E_UTF8>(_0);
    auto __ret = ((class ::CompoundTag*)NativePtr)->getInt(__arg0);
    return __ret;
}

long long MC::CompoundTag::GetInt64(::System::String ^ _0)
{
    auto __arg0 = clix::marshalString<clix::E_UTF8>(_0);
    auto __ret = ((class ::CompoundTag*)NativePtr)->getInt64(__arg0);
    return __ret;
}

short MC::CompoundTag::GetShort(::System::String ^ _0)
{
    auto __arg0 = clix::marshalString<clix::E_UTF8>(_0);
    auto __ret = ((class ::CompoundTag*)NativePtr)->getShort(__arg0);
    return __ret;
}

::System::String ^ MC::CompoundTag::GetString(::System::String ^ _0)
{
    auto __arg0 = clix::marshalString<clix::E_UTF8>(_0);
    auto& __ret = ((class ::CompoundTag*)NativePtr)->getString(__arg0);
    return (::System::String ^)(clix::marshalString<clix::E_UTF8>(__ret));
}

MC::Tag ^ MC::CompoundTag::Put(::System::String ^ _0, MC::Tag ^ _1)
{
    auto __arg0 = clix::marshalString<clix::E_UTF8>(_0);
    if (ReferenceEquals(_1, nullptr))
        throw gcnew ::System::ArgumentNullException("_1", "Cannot be null because it is a C++ reference (&).");
    auto& __arg1 = *(class ::Tag*)_1->NativePtr;
    auto& __ret = ((class ::CompoundTag*)NativePtr)->put(__arg0, std::move(__arg1));
    return (MC::Tag ^)((&__ret == nullptr) ? nullptr : gcnew ::MC::Tag((class ::Tag*)&__ret));
}

void MC::CompoundTag::PutBoolean(::System::String ^ _0, bool _1)
{
    auto __arg0 = clix::marshalString<clix::E_UTF8>(_0);
    ((class ::CompoundTag*)NativePtr)->putBoolean(__arg0, _1);
}

unsigned char MC::CompoundTag::PutByte(::System::String ^ _0, unsigned char _1)
{
    auto __arg0 = clix::marshalString<clix::E_UTF8>(_0);
    auto& __ret = ((class ::CompoundTag*)NativePtr)->putByte(__arg0, _1);
    return (unsigned char)(__ret);
}

MC::CompoundTag ^ MC::CompoundTag::PutCompound(::System::String ^ _0, MC::CompoundTag ^ _1)
{
    auto __arg0 = clix::marshalString<clix::E_UTF8>(_0);
    if (ReferenceEquals(_1, nullptr))
        throw gcnew ::System::ArgumentNullException("_1", "Cannot be null because it is passed by value.");
    auto __ret = ((class ::CompoundTag*)NativePtr)->putCompound(__arg0, std::unique_ptr<::CompoundTag>((::CompoundTag*)_1->Release()));
    return __ret == nullptr ? nullptr : gcnew ::MC::CompoundTag(__ret);
}

float MC::CompoundTag::PutFloat(::System::String ^ _0, float _1)
{
    auto __arg0 = clix::marshalString<clix::E_UTF8>(_0);
    auto& __ret = ((class ::CompoundTag*)NativePtr)->putFloat(__arg0, _1);
    return (float)(__ret);
}

int MC::CompoundTag::PutInt(::System::String ^ _0, int _1)
{
    auto __arg0 = clix::marshalString<clix::E_UTF8>(_0);
    auto& __ret = ((class ::CompoundTag*)NativePtr)->putInt(__arg0, _1);
    return (int)(__ret);
}

long long MC::CompoundTag::PutInt64(::System::String ^ _0, long long _1)
{
    auto __arg0 = clix::marshalString<clix::E_UTF8>(_0);
    auto& __ret = ((class ::CompoundTag*)NativePtr)->putInt64(__arg0, _1);
    return (long long)(__ret);
}

short MC::CompoundTag::PutShort(::System::String ^ _0, short _1)
{
    auto __arg0 = clix::marshalString<clix::E_UTF8>(_0);
    auto& __ret = ((class ::CompoundTag*)NativePtr)->putShort(__arg0, _1);
    return (short)(__ret);
}

::System::String ^ MC::CompoundTag::PutString(::System::String ^ _0, ::System::String ^ _1)
{
    auto __arg0 = clix::marshalString<clix::E_UTF8>(_0);
    auto __arg1 = clix::marshalString<clix::E_UTF8>(_1);
    auto& __ret = ((class ::CompoundTag*)NativePtr)->putString(__arg0, __arg1);
    return (::System::String ^)(clix::marshalString<clix::E_UTF8>(__ret));
}

bool MC::CompoundTag::Remove(::System::String ^ _0)
{
    auto __arg0 = clix::marshalString<clix::E_UTF8>(_0);
    auto __ret = ((class ::CompoundTag*)NativePtr)->remove(__arg0);
    return __ret;
}

void MC::CompoundTag::Rename(::System::String ^ _0, ::System::String ^ _1)
{
    auto __arg0 = clix::marshalString<clix::E_UTF8>(_0);
    auto __arg1 = clix::marshalString<clix::E_UTF8>(_1);
    ((class ::CompoundTag*)NativePtr)->rename(__arg0, __arg1);
}

bool MC::CompoundTag::IsEmpty::get()
{
    auto __ret = ((class ::CompoundTag*)NativePtr)->isEmpty();
    return __ret;
}
#endif // INCLUDE_MCAPI
