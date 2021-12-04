//Extra Part For IntTag.hpp
#ifdef EXTRA_INCLUDE_PART_INTTAG
// Include Headers or Declare Types Here

#else
// Add Member There
public:
inline int& value() {
    return dAccess<int, 8>(this);
}
inline IntTag& operator=(int val) {
    value() = val;
    return *this;
}
inline static IntTag* create(int val = 0) {
    IntTag* tag = (IntTag*)Tag::createTag(Tag::Type::Int);
    *tag = val;
    return tag;
}
inline bool set(int val) {
    if (getTagType() != Tag::Type::Int)
        return false;
    value() = val;
    return true;
}
inline int get() {
    return value();
}

#endif
