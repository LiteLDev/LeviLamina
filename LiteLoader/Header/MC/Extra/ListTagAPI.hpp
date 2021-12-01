//Extra Part For ListTag.hpp
#ifdef EXTRA_INCLUDE_PART_LISTTAG
// Include Headers or Declare Types Here

#else
// Add Member There
public:
inline static ListTag* createTag() {
    return (ListTag*)Tag::createTag(Tag::Type::List);
}
LIAPI void add(Tag* t);
LIAPI void addEnd();
LIAPI void addByte(char v);
LIAPI void addShort(short v);
LIAPI void addInt(int v);
LIAPI void addLong(__int64 v);
LIAPI void addFloat(float v);
LIAPI void addDouble(double v);
LIAPI void addString(const std::string& v);
LIAPI void addByteArray(void* data, size_t size);

#endif
