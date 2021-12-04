//Extra Part For FloatTag.hpp
#ifdef EXTRA_INCLUDE_PART_FLOATTAG
// Include Headers or Declare Types Here

#else
// Add Member There
public:
inline float& value() {
    return dAccess<float, 8>(this);
}
inline FloatTag& operator=(float val) {
    value() = val;
    return *this;
}
inline static FloatTag* create(float val = 0.0f) {
    FloatTag* tag = (FloatTag*)Tag::createTag(Tag::Type::Float);
    *tag = val;
    return tag;
}
inline bool set(float val) {
    if (getTagType() != Tag::Type::Float)
        return false;
    value() = val;
    return true;
}
inline float get() {
    return value();
}

#endif
