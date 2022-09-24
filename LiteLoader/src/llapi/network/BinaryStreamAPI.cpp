#include "llapi/mc/BinaryStream.hpp"

void BinaryStream::reserve(size_t size) {
    writeBuf.reserve(size);
}
std::string& BinaryStream::getRaw() {
    return *dAccess<std::string*, 96>(this); // BinaryStream::getAndReleaseData
}

void BinaryStream::writeCompoundTag(class CompoundTag const& tag) {
    void (*rv)(class CompoundTag const&, class BinaryStream&);
    *((void**)&rv) = dlsym("?write@?$serialize@VCompoundTag@@@@SAXAEBVCompoundTag@@AEAVBinaryStream@@@Z");
    return (*rv)(tag, *this);
}