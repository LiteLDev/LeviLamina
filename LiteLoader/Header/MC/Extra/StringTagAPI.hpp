//Extra Part For StringTag.hpp
#ifdef EXTRA_INCLUDE_PART_STRINGTAG
// Include Headers or Declare Types Here

#else
// Add Member There
public:
inline std::string& value() {
    return dAccess<std::string, 8>(this);
}
inline StringTag& operator=(std::string const& val) {
    value() = val;
    return *this;
}
inline static StringTag* create(std::string val = "") {
    StringTag* tag = (StringTag*)Tag::createTag(Tag::Type::String);
    *tag = val;
    return tag;
}
inline bool set(std::string const& val) {
    if (getTagType() != Tag::Type::String)
        return false;
    value() = val;
    return true;
}
inline std::string get() {
    return value();
}

#endif
