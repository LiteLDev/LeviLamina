#include <MC/ReadOnlyBinaryStream.hpp>

std::string const& ReadOnlyBinaryStream::getData() const {
    return *pBuf;
}

size_t ReadOnlyBinaryStream::getLength() const {
    return pBuf->size();
}

size_t ReadOnlyBinaryStream::getReadPointer() const {
    return readPointer;
}

size_t ReadOnlyBinaryStream::getUnreadLength() const {
    return getLength() - getReadPointer();
}

void ReadOnlyBinaryStream::setReadPointer(std::size_t size) {
    auto len = getLength();
    if (size <= len)
        readPointer = size;
    else
        readPointer = len;
}

//static_assert(offsetof(ReadOnlyBinaryStream, pBuf) == 56);