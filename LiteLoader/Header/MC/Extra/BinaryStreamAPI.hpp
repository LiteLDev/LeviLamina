//Extra Part For BinaryStream.hpp
#ifdef EXTRA_INCLUDE_PART_BINARYSTREAM
// Include Headers or Declare Types Here

#else
// Add Member There
public:
std::string writebuf, *pwbuf;
inline void reserve(size_t size) {
    writebuf.reserve(size);
}
std::string& getRaw() { // BinaryStream::getAndReleaseData
    return *dAccess<std::string*, 96>(this);
}
#endif
