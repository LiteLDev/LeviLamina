#include "mc/nbt/Tag.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/nbt/ListTag.h"
namespace ll::nbt::detail {
extern std::string                       TypedToSnbt(ByteTag&, uchar, SnbtFormat);
extern std::string                       TypedToSnbt(ShortTag&, uchar, SnbtFormat);
extern std::string                       TypedToSnbt(IntTag&, uchar, SnbtFormat);
extern std::string                       TypedToSnbt(Int64Tag&, uchar, SnbtFormat);
extern std::string                       TypedToSnbt(FloatTag&, uchar, SnbtFormat);
extern std::string                       TypedToSnbt(DoubleTag&, uchar, SnbtFormat);
extern std::string                       TypedToSnbt(ByteArrayTag&, uchar, SnbtFormat);
extern std::string                       TypedToSnbt(StringTag&, uchar, SnbtFormat);
extern std::string                       TypedToSnbt(ListTag&, uchar, SnbtFormat);
extern std::string                       TypedToSnbt(CompoundTag&, uchar, SnbtFormat);
extern std::string                       TypedToSnbt(IntArrayTag&, uchar, SnbtFormat);
extern std::string                       TypedToSnbt(EndTag&, uchar, SnbtFormat);
extern std::optional<CompoundTagVariant> parseSnbtValue(std::string_view&);
} // namespace ll::nbt::detail

std::string Tag::toSnbt(SnbtFormat snbtFormat, uchar indent) const {
    switch (getId()) {
    case Type::Byte:
        return ll::nbt::detail::TypedToSnbt(*(ByteTag*)this, indent, snbtFormat);
    case Type::Short:
        return ll::nbt::detail::TypedToSnbt(*(ShortTag*)this, indent, snbtFormat);
    case Type::Int:
        return ll::nbt::detail::TypedToSnbt(*(IntTag*)this, indent, snbtFormat);
    case Type::Int64:
        return ll::nbt::detail::TypedToSnbt(*(Int64Tag*)this, indent, snbtFormat);
    case Type::Float:
        return ll::nbt::detail::TypedToSnbt(*(FloatTag*)this, indent, snbtFormat);
    case Type::Double:
        return ll::nbt::detail::TypedToSnbt(*(DoubleTag*)this, indent, snbtFormat);
    case Type::ByteArray:
        return ll::nbt::detail::TypedToSnbt(*(ByteArrayTag*)this, indent, snbtFormat);
    case Type::String:
        return ll::nbt::detail::TypedToSnbt(*(StringTag*)this, indent, snbtFormat);
    case Type::List:
        return ll::nbt::detail::TypedToSnbt(*(ListTag*)this, indent, snbtFormat);
    case Type::Compound:
        return ll::nbt::detail::TypedToSnbt(*(CompoundTag*)this, indent, snbtFormat);
    case Type::IntArray:
        return ll::nbt::detail::TypedToSnbt(*(IntArrayTag*)this, indent, snbtFormat);
    case Type::End:
    default:
        return ll::nbt::detail::TypedToSnbt(*(EndTag*)this, indent, snbtFormat);
    }
}

std::unique_ptr<Tag> Tag::parseSnbt(std::string_view s) {
    auto tag = ll::nbt::detail::parseSnbtValue(s);
    if (tag) {
        return (*std::move(tag)).toUnique();
    }
    return nullptr;
}
