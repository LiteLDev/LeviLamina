#include <MC/ByteArrayTag.hpp>
#include <MC/ByteTag.hpp>
#include <MC/CompoundTag.hpp>
#include <MC/CompoundTagVariant.hpp>
#include <MC/DoubleTag.hpp>
#include <MC/FloatTag.hpp>
#include <MC/Int64Tag.hpp>
#include <MC/IntArrayTag.hpp>
#include <MC/IntTag.hpp>
#include <MC/ListTag.hpp>
#include <MC/ShortTag.hpp>
#include <MC/StringTag.hpp>
#include <MC/EndTag.hpp>
#include <MC/Tag.hpp>

std::unique_ptr<ListTag> ListTag::create() {
    return std::unique_ptr<ListTag>((ListTag*)Tag::newTag(Tag::Type::List).release());
}

std::vector<Tag*>& ListTag::value() {
    return dAccess<std::vector<Tag*>, 8>(this);
}

Tag* ListTag::operator[](int index) {
    if (index < size())
        return get(index);
    return nullptr;
}

Tag::Type ListTag::getElementType()
{
    return elementType;
}

size_t ListTag::getSize() { return val.size(); }

vector<Tag*> ListTag::get()
{
    return value();
}


// get value
unsigned char ListTag::getByte(int index) const {
    return get(index)->asByteTag()->value();
};
short ListTag::getShort(int index) const {
    return get(index)->asShortTag()->value();
};
int64_t ListTag::getInt64(int index) const {
    return get(index)->asInt64Tag()->value();
};
TagMemoryChunk ListTag::getByteArray(int index) const {
    return get(index)->asByteArrayTag()->value();
};


void ListTag::add(Tag* t) {
    void (ListTag::*func)(std::unique_ptr<class Tag>) = &ListTag::add;
    void (ListTag::*rv)(Tag**);
    *(void**)&rv = *(void**)&func;
    (this->*rv)(&t);
}

void ListTag::addEnd() {
    add(EndTag::create());
}

void ListTag::addByte(unsigned char v) {
    add(ByteTag::create(v));
}

void ListTag::addShort(short v) {
    add(ShortTag::create(v));
}

void ListTag::addInt(int v) {
    add(IntTag::create(v));
}

void ListTag::addInt64(__int64 v) {
    add(Int64Tag::create(v));
}

void ListTag::addFloat(float v) {
    add(FloatTag::create(v));
}

void ListTag::addDouble(double v) {
    add(DoubleTag::create(v));
}

void ListTag::addString(const string& v) {
    add(StringTag::create(v));
}

void ListTag::addByteArray(char data[], size_t size)
{
    add(ByteArrayTag::create(data,size));
}

void ListTag::addIntArray(int data[], size_t size)
{
    add(IntArrayTag::create(data, size));
}

void ListTag::addByteArray(TagMemoryChunk tmc) {
    add(ByteArrayTag::create(tmc));
}

void ListTag::addIntArray(TagMemoryChunk tmc) {
    add(IntArrayTag::create(tmc));
}
