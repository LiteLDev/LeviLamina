#include "mc/nbt/Tag.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/nbt/ListTag.h"

extern std::string TypedToSnbt(ByteTag&, uchar, SnbtFormat);
extern std::string TypedToSnbt(ShortTag&, uchar, SnbtFormat);
extern std::string TypedToSnbt(IntTag&, uchar, SnbtFormat);
extern std::string TypedToSnbt(Int64Tag&, uchar, SnbtFormat);
extern std::string TypedToSnbt(FloatTag&, uchar, SnbtFormat);
extern std::string TypedToSnbt(DoubleTag&, uchar, SnbtFormat);
extern std::string TypedToSnbt(ByteArrayTag&, uchar, SnbtFormat);
extern std::string TypedToSnbt(StringTag&, uchar, SnbtFormat);
extern std::string TypedToSnbt(ListTag&, uchar, SnbtFormat);
extern std::string TypedToSnbt(CompoundTag&, uchar, SnbtFormat);
extern std::string TypedToSnbt(IntArrayTag&, uchar, SnbtFormat);
extern std::string TypedToSnbt(EndTag&, uchar, SnbtFormat);

std::string Tag::toSnbt(SnbtFormat snbtFormat, uchar indent) const {
    switch (getId()) {
    case Type::Byte:
        return TypedToSnbt(*(ByteTag*)this, indent, snbtFormat);
    case Type::Short:
        return TypedToSnbt(*(ShortTag*)this, indent, snbtFormat);
    case Type::Int:
        return TypedToSnbt(*(IntTag*)this, indent, snbtFormat);
    case Type::Int64:
        return TypedToSnbt(*(Int64Tag*)this, indent, snbtFormat);
    case Type::Float:
        return TypedToSnbt(*(FloatTag*)this, indent, snbtFormat);
    case Type::Double:
        return TypedToSnbt(*(DoubleTag*)this, indent, snbtFormat);
    case Type::ByteArray:
        return TypedToSnbt(*(ByteArrayTag*)this, indent, snbtFormat);
    case Type::String:
        return TypedToSnbt(*(StringTag*)this, indent, snbtFormat);
    case Type::List:
        return TypedToSnbt(*(ListTag*)this, indent, snbtFormat);
    case Type::Compound:
        return TypedToSnbt(*(CompoundTag*)this, indent, snbtFormat);
    case Type::IntArray:
        return TypedToSnbt(*(IntArrayTag*)this, indent, snbtFormat);
    case Type::End:
    default:
        return TypedToSnbt(*(EndTag*)this, indent, snbtFormat);
    }
}

extern std::optional<CompoundTagVariant> parseSnbtValue(std::string_view&);

std::unique_ptr<Tag> Tag::parseSnbt(std::string_view s) {
    auto tag = parseSnbtValue(s);
    if (tag) { return tag.value().toUnique(); }
    return nullptr;
}