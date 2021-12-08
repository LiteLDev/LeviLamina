#include <MC/BinaryStream.hpp>

void BinaryStream::reserve(size_t size) {
    writeBuf.reserve(size);
}
std::string& BinaryStream::getRaw() {     
    return *dAccess<std::string*, 96>(this);    // BinaryStream::getAndReleaseData
}