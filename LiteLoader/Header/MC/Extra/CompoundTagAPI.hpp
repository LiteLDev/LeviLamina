//Extra Part For CompoundTag.hpp
#ifdef EXTRA_INCLUDE_PART_COMPOUNDTAG
// Include Headers or Declare Types Here
#include "../CompoundTagVariant.hpp"

#else
// Add Member There
public:

MCAPI CompoundTag::CompoundTag(CompoundTag&&);

inline static CompoundTag* create() {
    return (CompoundTag*)Tag::createTag((Tag::Type)10);
}

inline map<std::string, CompoundTagVariant>& value() {
    return dAccess<map<std::string, CompoundTagVariant>, 8>(this);
}

template <typename T>
inline T const* get(class gsl::basic_string_span<char const, -1> key) const {
    return (T*)get(key);
};

// put value
LIAPI void putEnd(std::string key);
LIAPI struct TagMemoryChunk& putIntArray(std::string key, struct TagMemoryChunk val);
LIAPI double& putDouble(std::string key, double val);
LIAPI void putByteArray(std::string key, void* data, size_t size);

// get value
LIAPI double getDouble(class gsl::basic_string_span<char const, -1> key) const;
LIAPI struct TagMemoryChunk const& getIntArray(class gsl::basic_string_span<char const, -1> key) const;

// get tag
LIAPI class ByteTag const* getByteTag(class gsl::basic_string_span<char const, -1> key) const;
LIAPI class ShortTag const* getShortTag(class gsl::basic_string_span<char const, -1> key) const;
LIAPI class FloatTag const* getFloatTag(class gsl::basic_string_span<char const, -1> key) const;
LIAPI class DoubleTag const* getDoubleTag(class gsl::basic_string_span<char const, -1> key) const;
LIAPI class ByteArrayTag const* getByteArrayTag(class gsl::basic_string_span<char const, -1> key) const;
LIAPI class StringTag const* getStringTag(class gsl::basic_string_span<char const, -1> key) const;
LIAPI class IntArrayTag const* getIntArrayTag(class gsl::basic_string_span<char const, -1> key) const;
inline Tag* operator[](class gsl::basic_string_span<char const, -1> key) {
    return get(key);
}

inline class ListTag const* getListTag(class gsl::basic_string_span<char const, -1> key) const {
    return getList(key);
};
inline class CompoundTag const* getCompoundTag(class gsl::basic_string_span<char const, -1> key) const {
    return getCompound(key );
};


#endif
