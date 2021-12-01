//Extra Part For CompoundTag.hpp
#ifdef EXTRA_INCLUDE_PART_COMPOUNDTAG
// Include Headers or Declare Types Here

#else
// Add Member There
public:
inline __int64& putLong(std::string a1, __int64 a2) {
    return putInt64(a1, a2);
};
inline __int64 getLong(std::string a1) {
    return getInt64(gsl::string_span<-1>(a1));
};
inline static CompoundTag* createTag() {
    return (CompoundTag*)Tag::createTag(Tag::Type::Compound);
}
LIAPI void putEnd(const std::string& k);
LIAPI void putByteArray(const std::string& key, void* data, size_t size);
//LIAPI void _putByteArray(const string& key, const TagMemoryChunk& value);
LIAPI void putDouble(const std::string& k, double v);

#endif
