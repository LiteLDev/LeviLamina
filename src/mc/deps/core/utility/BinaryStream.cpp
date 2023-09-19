#include "BinaryStream.h"

#include <liteloader/api/memory/MemoryUtils.h>

void BinaryStream::reserve(size_t size) {
    mOwnedBuffer.reserve(size);
}
std::string& BinaryStream::getRaw() {
    return *ll::memory::dAccess<std::string*, 96>(this); // BinaryStream::getAndReleaseData
}