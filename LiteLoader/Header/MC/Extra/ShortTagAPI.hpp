//Extra Part For ShortTag.hpp
#ifdef EXTRA_INCLUDE_PART_SHORTTAG
// Include Headers or Declare Types Here

#else
// Add Member There
public:
inline short& value() {
    return dAccess<short, 8>(this);
}
inline ShortTag& operator=(short val) {
    value() = val;
    return *this;
}
inline static ShortTag* create(short val = 0) {
    ShortTag* tag = (ShortTag*)Tag::createTag(Tag::Type::Short);
    *tag = val;
    return tag;
}
inline bool set(short val) {
    if (getTagType() != Tag::Type::Short)
        return false;
    value() = val;
    return true;
}
inline short get() {
    return value();
}

#endif
