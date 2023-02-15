#include "llapi/mc/ByteArrayTag.hpp"
#include "llapi/mc/ByteTag.hpp"
#include "llapi/mc/CompoundTag.hpp"
#include "llapi/mc/CompoundTagVariant.hpp"
#include "llapi/mc/DoubleTag.hpp"
#include "llapi/mc/FloatTag.hpp"
#include "llapi/mc/Int64Tag.hpp"
#include "llapi/mc/IntArrayTag.hpp"
#include "llapi/mc/IntTag.hpp"
#include "llapi/mc/ListTag.hpp"
#include "llapi/mc/ShortTag.hpp"
#include "llapi/mc/StringTag.hpp"
#include "llapi/mc/EndTag.hpp"
#include "llapi/mc/Tag.hpp"

#include "llapi/memory/MemoryUtils.h"

using ll::memory::dAccess;

std::unique_ptr<ListTag> ListTag::create() {
    return std::unique_ptr<ListTag>((ListTag*)Tag::newTag(Tag::Type::List).release());
}

std::vector<Tag*>& ListTag::value() { return dAccess<std::vector<Tag*>, 8>(this); }

Tag const* ListTag::operator[](int index) const {
    if (index < size())
        return get(index);
    return nullptr;
}

Tag::Type ListTag::getElementType() const { return elementType; }

size_t ListTag::getSize() const { return val.size(); }

std::vector<Tag*>::const_iterator ListTag::begin() const { return val.begin(); }

std::vector<Tag*>::const_iterator ListTag::end() const { return val.end(); }

vector<Tag*> ListTag::get() { return value(); }


// get value
unsigned char  ListTag::getByte(int index) const { return get(index)->asByteTag()->value(); };
short          ListTag::getShort(int index) const { return get(index)->asShortTag()->value(); };
int64_t        ListTag::getInt64(int index) const { return get(index)->asInt64Tag()->value(); };
TagMemoryChunk ListTag::getByteArray(int index) const { return get(index)->asByteArrayTag()->value(); };

void ListTag::addEnd() { add(EndTag::create()); }

void ListTag::addByte(unsigned char v) { add(ByteTag::create(v)); }

void ListTag::addShort(short v) { add(ShortTag::create(v)); }

void ListTag::addInt(int v) { add(IntTag::create(v)); }

void ListTag::addInt64(__int64 v) { add(Int64Tag::create(v)); }

void ListTag::addFloat(float v) { add(FloatTag::create(v)); }

void ListTag::addDouble(double v) { add(DoubleTag::create(v)); }

void ListTag::addString(const string& v) { add(StringTag::create(v)); }

void ListTag::addByteArray(char data[], size_t size) { add(ByteArrayTag::create(data, size)); }

void ListTag::addIntArray(int data[], size_t size) { add(Tag::asTag(IntArrayTag::create(data, size))); }

void ListTag::addByteArray(TagMemoryChunk tmc) { add(ByteArrayTag::create(tmc)); }

void ListTag::addIntArray(TagMemoryChunk tmc) { add(IntArrayTag::create(tmc)); }
