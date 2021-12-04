//Extra Part For Int64Tag.hpp
#ifdef EXTRA_INCLUDE_PART_INT64TAG
// Include Headers or Declare Types Here

#else
// Add Member There
public:
inline int64_t& value() {
    return dAccess<int64_t, 8>(this);
}
inline Int64Tag& operator=(int64_t val) {
    value() = val;
    return *this;
}
inline static Int64Tag* create(int64_t val = 0) {
    Int64Tag* tag = (Int64Tag*)Tag::createTag(Tag::Type::Int64);
    *tag = val;
    return tag;
}
inline bool set(int64_t val) {
    if (getTagType() != Tag::Type::Int64)
        return false;
    value() = val;
    return true;
}
inline int64_t get() {
    return value();
}

#endif
