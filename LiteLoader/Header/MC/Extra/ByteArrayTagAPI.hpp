//Extra Part For ByteArrayArrayTag.hpp
#ifdef EXTRA_INCLUDE_PART_BYTEARRAYTAG
// Include Headers or Declare Types Here
#include "../TagMemoryChunk.hpp"

#else
// Add Member There
public:
inline TagMemoryChunk& value() {
    return dAccess<TagMemoryChunk, 8>(this);
}
inline ByteArrayTag& operator=(TagMemoryChunk const& val) {
    value() = val;
    return *this;
}

inline static ByteArrayTag* create() {
    ByteArrayTag* tag = (ByteArrayTag*)Tag::createTag(Tag::Type::ByteArray);
    return tag;
}

inline static ByteArrayTag* create(TagMemoryChunk const& val) {
    ByteArrayTag* tag = (ByteArrayTag*)Tag::createTag(Tag::Type::ByteArray);
    *tag = val;
    return tag;
}

inline bool set(TagMemoryChunk const& val) {
    if (getTagType() != Tag::Type::ByteArray)
        return false;
    value() = val;
    return true;
}
inline TagMemoryChunk get() {
    return value();
}

#endif
