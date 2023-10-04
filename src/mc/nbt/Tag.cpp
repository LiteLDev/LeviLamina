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


Tag& Tag::operator[](size_t index) {

    if (getId() != Type::List) { throw std::runtime_error("Not a ListTag"); }

    return *((ListTag*)this)->mList[index];
}
Tag const& Tag::operator[](size_t index) const {

    if (getId() != Type::List) { throw std::runtime_error("Not a ListTag"); }

    return *((ListTag const*)this)->mList[index];
}
Tag& Tag::operator[](std::string_view index) {

    if (getId() != Type::Compound) { throw std::runtime_error("Not a CompoundTag"); }

    return *((CompoundTag*)this)->get(index);
}
Tag const& Tag::operator[](std::string_view index) const {

    if (getId() != Type::Compound) { throw std::runtime_error("Not a CompoundTag"); }

    return *((CompoundTag const*)this)->get(index);
}


std::string Tag::toSnbt(uchar indent, SnbtFormat snbtFormat) const {
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
