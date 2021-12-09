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
#include <MC/Tag.hpp>

// get value
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
    void (ListTag::*rv)(Tag*);
    *(void**)&rv = *(void**)&func;
    (this->*rv)(t);
}

void ListTag::addEnd() {
    Tag* t = Tag::createTag(Tag::Type::End);
    add(t);
}

void ListTag::addByte(unsigned char v) {
    ByteTag* t = ByteTag::create(v);
    add(t);
}

void ListTag::addShort(short v) {
    ShortTag* t = ShortTag::create(v);
    add(t);
}

void ListTag::addInt(int v) {
    Tag* t = Tag::createTag(Tag::Type::Int);
    t->asIntTag()->value() = v;
    add(t);
}

void ListTag::addInt64(__int64 v) {
    Tag* t = Tag::createTag(Tag::Type::Int64);
    t->asInt64Tag()->value() = v;
    add(t);
}

void ListTag::addFloat(float v) {
    Tag* t = Tag::createTag(Tag::Type::Float);
    t->asFloatTag()->value() = v;
    add(t);
}

void ListTag::addDouble(double v) {
    Tag* t = Tag::createTag(Tag::Type::Double);
    t->asDoubleTag()->value() = v;
    add(t);
}

void ListTag::addString(const string& v) {
    Tag* t = Tag::createTag(Tag::Type::String);
    t->asStringTag()->value() = v;
    add(t);
}

void ListTag::addByteArray(void* data, size_t size) {
    Tag* t = Tag::createTag(Tag::Type::ByteArray);

    uint8_t* written = new uint8_t[size];
    memcpy(written, data, size);
    auto tmc = TagMemoryChunk(size, written);
    t->asByteArrayTag()->value() = tmc;

    add(t);
}
void ListTag::addByteArray(TagMemoryChunk tmc) {
    throw("TODO");
    Tag* t = Tag::createTag(Tag::Type::ByteArray);
    t->asByteArrayTag()->value() = tmc;
    add(t);
}
void ListTag::addIntArray(TagMemoryChunk tmc) {
    throw("TODO");
    Tag* t = Tag::createTag(Tag::Type::IntArray);
    t->asByteArrayTag()->value() = tmc;
    add(t);
}
