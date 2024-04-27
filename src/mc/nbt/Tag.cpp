#include "mc/nbt/Tag.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/nbt/ListTag.h"
namespace ll::nbt::detail {
std::string TypedToSnbt(ByteTag const&, uchar, SnbtFormat);
std::string TypedToSnbt(ShortTag const&, uchar, SnbtFormat);
std::string TypedToSnbt(IntTag const&, uchar, SnbtFormat);
std::string TypedToSnbt(Int64Tag const&, uchar, SnbtFormat);
std::string TypedToSnbt(FloatTag const&, uchar, SnbtFormat);
std::string TypedToSnbt(DoubleTag const&, uchar, SnbtFormat);
std::string TypedToSnbt(ByteArrayTag const&, uchar, SnbtFormat);
std::string TypedToSnbt(StringTag const&, uchar, SnbtFormat);
std::string TypedToSnbt(ListTag const&, uchar, SnbtFormat);
std::string TypedToSnbt(CompoundTag const&, uchar, SnbtFormat);
std::string TypedToSnbt(IntArrayTag const&, uchar, SnbtFormat);
std::string TypedToSnbt(EndTag const&, uchar, SnbtFormat);
} // namespace ll::nbt::detail

std::string Tag::toSnbt(SnbtFormat snbtFormat, uchar indent) const noexcept {
    return ::ll::meta::visitIndex<CompoundTagVariant::Types::size>(static_cast<size_t>(getId()), [&]<size_t I> {
        return ll::nbt::detail::TypedToSnbt(*(CompoundTagVariant::Types::get<I>*)this, indent, snbtFormat);
    });
}
std::string CompoundTagVariant::toSnbt(SnbtFormat snbtFormat, uchar indent) const noexcept {
    return std::visit([&](auto& v) { return ll::nbt::detail::TypedToSnbt(v, indent, snbtFormat); }, mTagStorage);
}
