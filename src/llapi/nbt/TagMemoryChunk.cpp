#include "llapi/mc/TagMemoryChunk.hpp"

TagMemoryChunk::TagMemoryChunk(char data[], size_t size)
: capacity(size), size(size)
//, data(std::move(data))
{
    this->data = std::unique_ptr<char[]>(new char[size]);
    memcpy(this->data.get(), data, size);
}

TagMemoryChunk::TagMemoryChunk(const TagMemoryChunk& a1)
//: capacity(a1.capacity), size(a1.size), data(std::make_unique<char*>(new char[capacity]))
{
    *this = a1.copy();
}

TagMemoryChunk::TagMemoryChunk(TagMemoryChunk&& a1) : capacity(a1.capacity), size(a1.size), data(std::move(a1.data)) {}

void TagMemoryChunk::operator=(const TagMemoryChunk& a1) { *this = a1.copy(); }

void TagMemoryChunk::operator=(TagMemoryChunk&& a1) {
    capacity = a1.capacity;
    size     = a1.size;
    data     = std::move(a1.data);
}
