#include "mc/nbt/Tag.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/nbt/ListTag.h"
namespace ll::nbt::detail {
std::string TypedToSnbt(ByteTag&, uchar, SnbtFormat);
std::string TypedToSnbt(ShortTag&, uchar, SnbtFormat);
std::string TypedToSnbt(IntTag&, uchar, SnbtFormat);
std::string TypedToSnbt(Int64Tag&, uchar, SnbtFormat);
std::string TypedToSnbt(FloatTag&, uchar, SnbtFormat);
std::string TypedToSnbt(DoubleTag&, uchar, SnbtFormat);
std::string TypedToSnbt(ByteArrayTag&, uchar, SnbtFormat);
std::string TypedToSnbt(StringTag&, uchar, SnbtFormat);
std::string TypedToSnbt(ListTag&, uchar, SnbtFormat);
std::string TypedToSnbt(CompoundTag&, uchar, SnbtFormat);
std::string TypedToSnbt(IntArrayTag&, uchar, SnbtFormat);
std::string TypedToSnbt(EndTag&, uchar, SnbtFormat);
} // namespace ll::nbt::detail

std::string Tag::toSnbt(SnbtFormat snbtFormat, uchar indent) const {
    return ::ll::meta::visitIndex<CompoundTagVariant::Types::size>(static_cast<size_t>(getId()), [&]<size_t I> {
        return ll::nbt::detail::TypedToSnbt(*(CompoundTagVariant::Types::get<I>*)this, indent, snbtFormat);
    });
}
