#include "mc/nbt/TagMemoryChunk.h"

TagMemoryChunk::TagMemoryChunk(uint8_t data[], size_t size) : mElements(size), mSize(size) {
    this->mBuffer = std::unique_ptr<uint8_t[]>(new uint8_t[mSize]);
    memcpy(this->mBuffer.get(), data, mSize);
}

TagMemoryChunk::TagMemoryChunk(TagMemoryChunk const& a1) { *this = a1.copy(); }

TagMemoryChunk::TagMemoryChunk(TagMemoryChunk&& a1) noexcept
: mElements(a1.mElements), mSize(a1.mSize), mBuffer(std::move(a1.mBuffer)) {}

TagMemoryChunk& TagMemoryChunk::operator=(TagMemoryChunk const& a1) {
    if (&a1 == this) {
        return *this;
    }
    *this = a1.copy();
    return *this;
}

TagMemoryChunk& TagMemoryChunk::operator=(TagMemoryChunk&& a1) noexcept {
    if (&a1 == this) {
        return *this;
    }
    mElements = a1.mElements;
    mSize     = a1.mSize;
    mBuffer   = std::move(a1.mBuffer);
    return *this;
}