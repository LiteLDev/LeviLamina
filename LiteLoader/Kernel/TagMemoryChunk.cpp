#include <MC/TagMemoryChunk.hpp>

TagMemoryChunk::TagMemoryChunk(char* data, size_t size)
    : capacity(size), size(size), data(std::make_unique<char*>(data))
{}

TagMemoryChunk::TagMemoryChunk(const TagMemoryChunk& a1)
    : capacity(a1.capacity), size(a1.size), data(std::make_unique<char*>(new char[capacity]))
{
    memcpy(*data, *a1.data, size);
}

TagMemoryChunk::TagMemoryChunk(TagMemoryChunk&& a1)
    : capacity(a1.capacity), size(a1.size), data(std::move(a1.data))
{ }

void TagMemoryChunk::operator=(const TagMemoryChunk& a1)
{
    capacity = a1.capacity;
    size = a1.size;
    memcpy(*data, *a1.data, size);
}

void TagMemoryChunk::operator=(TagMemoryChunk&& a1)
{
    capacity = a1.capacity;
    size = a1.size;
    data = std::move(a1.data);
}