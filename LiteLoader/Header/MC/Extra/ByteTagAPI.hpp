//Extra Part For ByteTag.hpp
#ifdef EXTRA_INCLUDE_PART_BYTETAG
// Include Headers or Declare Types Here

#else
// Add Member There
public:
inline unsigned char& value() {
    return dAccess<unsigned char, 8>(this);
}
inline ByteTag& operator=(unsigned char val) {
    value() = val;
    return *this;
}
inline static ByteTag* create(unsigned char val = 0) {
    ByteTag* tag = (ByteTag*)Tag::createTag(Tag::Type::Byte);
    *tag = val;
    return tag;
}
inline bool set(unsigned char val) {
    if (getTagType() != Tag::Type::Byte)
        return false;
    value() = val;
    return true;
}
inline unsigned char get() {
    return value();
}

#endif
