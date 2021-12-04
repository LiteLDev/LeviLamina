#include <MC/CompoundTag.hpp>
#include <MC/Tag.hpp>
#include <MC/ByteTag.hpp>
#include <MC/ShortTag.hpp>
#include <MC/IntTag.hpp>
#include <MC/Int64Tag.hpp>
#include <MC/FloatTag.hpp>
#include <MC/DoubleTag.hpp>
#include <MC/ByteArrayTag.hpp>
#include <MC/StringTag.hpp>
#include <MC/ListTag.hpp>
#include <MC/IntArrayTag.hpp>
#include <MC/CompoundTagVariant.hpp>

// put value
void CompoundTag::putEnd(std::string key) {
    Tag* tag = Tag::createTag(Tag::Type::End);
    put(key, std::move(*tag));
}

struct TagMemoryChunk& CompoundTag::putIntArray(std::string key, struct TagMemoryChunk val) {
    IntArrayTag* tag = (IntArrayTag*)Tag::createTag(Tag::Type::IntArray);
    throw("TODO");
    return val;
}

double& CompoundTag::putDouble(std::string key, double val) {
    Tag* tag = Tag::createTag(Tag::Type::Double);
    double& value = tag->asDoubleTag()->value();
    value = val;
    put(key, std::move(*tag));
    return value;
}

void CompoundTag::putByteArray(std::string key, void* data, size_t size) {
    uint8_t* written = new uint8_t[size];
    memcpy(written, data, size);
    TagMemoryChunk tmc(size, written);
    putByteArray(key, tmc);
}

// get value
double CompoundTag::getDouble(class gsl::basic_string_span<char const, -1> key) const {
    auto tag = const_cast<Tag*>(get(key))->asDoubleTag();
    if (tag)
        return tag->value();
    // TODO 
    return 0.0;
};
struct TagMemoryChunk const& CompoundTag::getIntArray(class gsl::basic_string_span<char const, -1> key) const{
    auto tag = const_cast<Tag*>(get(key))->asIntArrayTag();
    throw("TODO");
    return *(TagMemoryChunk*)tag;
};

// get tag
class ByteTag const* CompoundTag::getByteTag(class gsl::basic_string_span<char const, -1> key) const{
    return const_cast<Tag*>(get(key))->asByteTag();
};
class ShortTag const* CompoundTag::getShortTag(class gsl::basic_string_span<char const, -1> key) const{
    return const_cast<Tag*>(get(key))->asShortTag();
};
class FloatTag const* CompoundTag::getFloatTag(class gsl::basic_string_span<char const, -1> key) const{
    return const_cast<Tag*>(get(key))->asFloatTag();
};
class DoubleTag const* CompoundTag::getDoubleTag(class gsl::basic_string_span<char const, -1> key) const{
    return const_cast<Tag*>(get(key))->asDoubleTag();
};
class ByteArrayTag const* CompoundTag::getByteArrayTag(class gsl::basic_string_span<char const, -1> key) const{
    return const_cast<Tag*>(get(key))->asByteArrayTag();
};
class StringTag const* CompoundTag::getStringTag(class gsl::basic_string_span<char const, -1> key) const{
    return const_cast<Tag*>(get(key))->asStringTag();
};
class IntArrayTag const* CompoundTag::getIntArrayTag(class gsl::basic_string_span<char const, -1> key) const{
    return const_cast<Tag*>(get(key))->asIntArrayTag();
};