#include <MC/ListTag.hpp>
#include <MC/ByteArrayTag.hpp>

void ListTag::add(Tag* t) {
    SymCall("?add@ListTag@@QEAAXV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@@Z",
            void, void*, Tag**)(this, &t);
}

void ListTag::addEnd() {
    Tag* t = Tag::createTag(Tag::Type::End);
    add(t);
}

void ListTag::addByte(char v) {
    Tag* t = Tag::createTag(Tag::Type::Byte);
    t->asByte() = v;
    add(t);
}

void ListTag::addShort(short v) {
    Tag* t = Tag::createTag(Tag::Type::Short);
    t->asShort() = v;
    add(t);
}

void ListTag::addInt(int v) {
    Tag* t = Tag::createTag(Tag::Type::Int);
    t->asInt() = v;
    add(t);
}

void ListTag::addLong(__int64 v) {
    Tag* t = Tag::createTag(Tag::Type::Long);
    t->asLong() = v;
    add(t);
}

void ListTag::addFloat(float v) {
    Tag* t = Tag::createTag(Tag::Type::Float);
    t->asFloat() = v;
    add(t);
}

void ListTag::addDouble(double v) {
    Tag* t = Tag::createTag(Tag::Type::Double);
    t->asDouble() = v;
    add(t);
}

void ListTag::addString(const string& v) {
    Tag* t = Tag::createTag(Tag::Type::String);
    t->asString() = v;
    add(t);
}

void ListTag::addByteArray(void* data, size_t size) {
    Tag* t = Tag::createTag(Tag::Type::ByteArray);

    uint8_t* written = new uint8_t[size];
    memcpy(written, data, size);
    auto tmc = TagMemoryChunk(size, written);
    t->asByteArray() = tmc;

    add(t);
}