#pragma once

#include "CompoundTagVariant.hpp"
#include "ByteArrayTag.hpp"
#include "ByteTag.hpp"
#include "DoubleTag.hpp"
#include "EndTag.hpp"
#include "ShortTag.hpp"
#include "FloatTag.hpp"
#include "StringTag.hpp"
#include "IntArrayTag.hpp"
#include "ListTag.hpp"

#include <MC/CompoundTag.hpp>

using System::Collections::Generic::Dictionary;

namespace MC
{
ref class Actor;
ref class Player;
ref class ItemStack;
ref class Block;
ref class BlockActor;
ref class ItemStack;
ref class CompoundTagVariant;
} // namespace MC

namespace MC
{
public
ref class CompoundTag : public Tag
{
public:
    __ctor_base(CompoundTag, ::CompoundTag, Tag);

    inline static CompoundTag ^ Create();
    inline Dictionary<System::String ^, CompoundTagVariant ^> ^ Value();
    // put value
    inline void PutEnd(System::String ^ key);
    inline double ^ PutDouble(System::String ^ key, double val);
    inline void PutByteArray(System::String ^ key, array<char> ^ data /*, size_t size*/);
    inline void PutIntArray(System::String ^ key, array<int> ^ data /*, size_t size*/);
    inline TagMemoryChunk ^ PutIntArray(System::String ^ key, TagMemoryChunk ^ val);
    // get value
    inline double GetDouble(System::String ^ key);
    inline TagMemoryChunk const ^ GetIntArray(System::String ^ key);
    // get tag
    inline ByteTag const ^ GetByteTag(System::String ^ key);
    inline ShortTag const ^ GetShortTag(System::String ^ key);
    inline FloatTag const ^ GetFloatTag(System::String ^ key);
    inline DoubleTag const ^ GetDoubleTag(System::String ^ key);
    inline ByteArrayTag const ^ GetByteArrayTag(System::String ^ key);
    inline StringTag const ^ GetStringTag(System::String ^ key);
    inline IntArrayTag const ^ GetIntArrayTag(System::String ^ key);
    inline ListTag const ^ GetListTag(System::String ^ key);
    inline CompoundTag ^ GetCompoundTag(System::String ^ key);
    inline Tag ^ operator[](System::String ^ key);
    // io
    inline void SetItemStack(ItemStack ^ item);
    inline void SetBlock(Block ^ blk);
    inline bool SetActor(Actor ^ actor);
    inline bool SetBlockActor(BlockActor ^ ble);
    inline bool SetPlayer(Player ^ player);
    inline static CompoundTag ^ FromItemStack(ItemStack ^ item);
    inline static CompoundTag ^ FromBlock(Block ^ blk);
    inline static CompoundTag ^ FromActor(Actor ^ actor);
    inline static CompoundTag ^ FromBlockActor(BlockActor ^ ble);
    inline static CompoundTag ^ FromPlayer(Player ^ player);
    inline System::String ^ ToSNBT();
    inline System::String ^ ToBinaryNBT(bool isLittleEndian);
    inline System::String ^ ToBinaryNBT();
    inline static CompoundTag ^ FromSNBT(System::String ^ snbt);
    inline static CompoundTag ^ FromBinaryNBT(void* data, size_t len, bool isLittleEndian);
    inline static CompoundTag ^ FromBinaryNBT(void* data, size_t len);
    inline static CompoundTag ^ FromBinaryNBT(void* data, size_t len, size_t& endOffset, bool isLittleEndian);
    inline static CompoundTag ^ FromBinaryNBT(void* data, size_t len, size_t& endOffset);


#ifdef INCLUDE_MCAPI

    property bool IsEmpty
    {
        bool get();
    }

    virtual void DeleteChildren() override;

    virtual ::System::String ^ ToString() override;

    virtual MC::Tag::Type GetId();

    virtual bool Equals(MC::Tag ^ _0) override;

    virtual unsigned long long hash();

    void Append(MC::CompoundTag ^ _0);

    void Clear();

    bool Contains(::System::String ^ _0);

    bool Contains(::System::String ^ _0, MC::Tag::Type _1);

    void DeepCopy(MC::CompoundTag ^ _0);

    MC::Tag ^ Get(::System::String ^ _0);

    bool GetBoolean(::System::String ^ _0);

    unsigned char GetByte(::System::String ^ _0);

    MC::CompoundTag ^ GetCompound(::System::String ^ _0);

    float GetFloat(::System::String ^ _0);

    int GetInt(::System::String ^ _0);

    long long GetInt64(::System::String ^ _0);

    short GetShort(::System::String ^ _0);

    ::System::String ^ GetString(::System::String ^ _0);

    MC::Tag ^ Put(::System::String ^ _0, MC::Tag ^ _1);

    void PutBoolean(::System::String ^ _0, bool _1);

    unsigned char PutByte(::System::String ^ _0, unsigned char _1);

    MC::CompoundTag ^ PutCompound(::System::String ^ _0, MC::CompoundTag ^ _1);

    float PutFloat(::System::String ^ _0, float _1);

    int PutInt(::System::String ^ _0, int _1);

    long long PutInt64(::System::String ^ _0, long long _1);

    short PutShort(::System::String ^ _0, short _1);

    ::System::String ^ PutString(::System::String ^ _0, ::System::String ^ _1);

    bool Remove(::System::String ^ _0);

    void Rename(::System::String ^ _0, ::System::String ^ _1);

#endif // INCLUDE_MCAPI
};
} // namespace MC
