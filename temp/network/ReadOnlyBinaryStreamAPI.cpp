#include "mc/ReadOnlyBinaryStream.hpp"
#include "mc/CompoundTag.hpp"

#include "liteloader/api/memory/MemoryUtils.h"

using ll::memory::dAccess;

std::string const& ReadOnlyBinaryStream::getData() const { return *pBuf; }

size_t ReadOnlyBinaryStream::getLength() const { return pBuf->size(); }

size_t ReadOnlyBinaryStream::getReadPointer() const { return readPointer; }

size_t ReadOnlyBinaryStream::getUnreadLength() const { return getLength() - getReadPointer(); }

void ReadOnlyBinaryStream::setReadPointer(std::size_t size) {
    auto len = getLength();
    if (size <= len)
        readPointer = size;
    else
        readPointer = len;
}

std::unique_ptr<class CompoundTag> ReadOnlyBinaryStream::getCompoundTag() {
    auto tag = CompoundTag::create();
    class CompoundTag& (*rv)(class CompoundTag&, class ReadOnlyBinaryStream&);
    *((void**)&rv) = LL_RESOLVE_SYMBOL("?read@?$serialize@VCompoundTag@@@@SA?AVCompoundTag@@AEAVReadOnlyBinaryStream@@@Z");
    (*rv)(*tag, *this);
    return std::move(tag);
}

// static_assert(offsetof(ReadOnlyBinaryStream, pBuf) == 56);
