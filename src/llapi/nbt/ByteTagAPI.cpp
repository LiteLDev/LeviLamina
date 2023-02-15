#include "llapi/mc/ByteTag.hpp"

#include "llapi/memory/MemoryUtils.h"

using ll::memory::dAccess;

unsigned char& ByteTag::value() { return dAccess<unsigned char, 8>(this); }

ByteTag& ByteTag::operator=(unsigned char val) {
    value() = val;
    return *this;
}

std::unique_ptr<ByteTag> ByteTag::create(unsigned char val) {
    auto tag = Tag::newTag(Tag::Type::Byte);
    tag->asByteTag()->set(val);
    return std::unique_ptr<ByteTag>((ByteTag*)tag.release());
}

bool ByteTag::set(unsigned char val) {
    if (getTagType() != Tag::Type::Byte)
        return false;
    value() = val;
    return true;
}

unsigned char ByteTag::get() { return value(); }

ByteTag::operator unsigned char() const {
    if (!this)
        return 0;
    return val;
}
