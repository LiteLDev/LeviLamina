//Extra Part For CompoundTagVariant.hpp
#ifdef EXTRA_INCLUDE_PART_COMPOUNDTAGVARIANT
// Include Headers or Declare Types Here
#include "../Tag.hpp"
class EndTag;
class ByteTag;
class ShortTag;
class IntTag;
class Int64Tag;
class FloatTag;
class DoubleTag;
class ByteArrayTag;
class StringTag;
class ListTag;
class CompoundTag;
class IntArrayTag;

#else
// Add Member There
//#define AllTagTypes EndTag, ByteTag, ShortTag, IntTag, Int64Tag, FloatTag, DoubleTag, ByteArrayTag, StringTag, ListTag, CompoundTag, IntArrayTag
//std::variant<AllTagTypes> tagStorage;
char filler[0x30]; // IDA CompoundTagVariant::emplace

public:
inline Tag::Type getTagType() {
    return dAccess<Tag::Type, 40>(this);
}
inline ByteTag* asByteTag() {
    return (ByteTag*)this;
}
inline ShortTag* asShortTag(){
    return (ShortTag*)this;
}
inline IntTag* asIntTag(){
    return (IntTag*)this;
}
inline Int64Tag* asInt64Tag(){
    return (Int64Tag*)this;
}
inline FloatTag* asFloatTag(){
    return (FloatTag*)this;
}
inline DoubleTag* asDoubleTag(){
    return (DoubleTag*)this;
}
inline StringTag* asStringTag(){
    return (StringTag*)this;
}
inline ListTag* asListTag(){
    return (ListTag*)this;
}
inline CompoundTag* asCompoundTag(){
    return (CompoundTag*)this;
}
inline ByteArrayTag* asByteArrayTag(){
    return (ByteArrayTag*)this;
}
inline IntArrayTag* asIntArrayTag(){
    return (IntArrayTag*)this;
}

#endif
