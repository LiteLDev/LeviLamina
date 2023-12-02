#include "mc/nbt/TagMemoryChunk.h"

TagMemoryChunk::TagMemoryChunk(TagMemoryChunk const& a1) { *this = a1.copy(); }

TagMemoryChunk::TagMemoryChunk(TagMemoryChunk&& a1) noexcept
: mSize(a1.mSize),
  mCapacity(a1.mCapacity),
  mBuffer(std::move(a1.mBuffer)) {}

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
    mSize     = a1.mSize;
    mCapacity = a1.mCapacity;
    mBuffer   = std::move(a1.mBuffer);
    return *this;
}