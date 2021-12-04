//Extra Part For DoubleTag.hpp
#ifdef EXTRA_INCLUDE_PART_DOUBLETAG
// Include Headers or Declare Types Here

#else
// Add Member There
public:
inline double& value() {
    return dAccess<double, 8>(this);
}
inline DoubleTag& operator=(double val) {
    value() = val;
    return *this;
}
inline static DoubleTag* create(double val = 0.0) {
    DoubleTag* tag = (DoubleTag*)Tag::createTag(Tag::Type::Double);
    *tag = val;
    return tag;
}
inline bool set(double val) {
    if (getTagType() != Tag::Type::Double)
        return false;
    value() = val;
    return true;
}
inline double get() {
    return value();
}

#endif
