//Extra Part For ListTag.hpp
#ifdef EXTRA_INCLUDE_PART_LISTTAG
// Include Headers or Declare Types Here
#include "../TagMemoryChunk.hpp"

#else
// Add Member There
public:
inline static ListTag* create() {
    return (ListTag*)Tag::createTag(Tag::Type::List);
}
inline std::vector<Tag*>& value() {
    return dAccess<std::vector<Tag*>, 8>(this);
}
inline Tag* operator[](int index) {
    if (index < size())
        return get(index);
    return nullptr;
}

// get value
LIAPI unsigned char getByte(int) const;
LIAPI short getShort(int) const;
LIAPI int64_t getInt64(int) const;
LIAPI TagMemoryChunk getByteArray(int) const;


LIAPI void add(Tag* t);
LIAPI void addEnd();
LIAPI void addByte(unsigned char v);
LIAPI void addShort(short v);
LIAPI void addInt(int v);
LIAPI void addInt64(__int64 v);
LIAPI void addFloat(float v);
LIAPI void addDouble(double v);
LIAPI void addString(const std::string& v);
LIAPI void addByteArray(TagMemoryChunk);
LIAPI void addByteArray(void* data, size_t size);
LIAPI void addIntArray(TagMemoryChunk);
LIAPI void addIntArray(void* data, size_t size);

#endif
