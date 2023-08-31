#include "mc/ByteTag.hpp"

#include "liteloader/api/memory/MemoryUtils.h"

using ll::memory::dAccess;

uint8_t& ByteTag::value() { return dAccess<uint8_t, 8>(this); }

ByteTag& ByteTag::operator=(uint8_t val) {
    value() = val;
    return *this;
}

std::unique_ptr<ByteTag> ByteTag::create(uint8_t val) {
    auto tag = Tag::newTag(Tag::Type::Byte);
    tag->asByteTag()->set(val);
    return std::unique_ptr<ByteTag>((ByteTag*)tag.release());
}

bool ByteTag::set(uint8_t val) {
    if (getTagType() != Tag::Type::Byte)
        return false;
    value() = val;
    return true;
}

uint8_t ByteTag::get() { return value(); }

ByteTag::operator uint8_t() const {
    if (!this)
        return 0;
    return val;
}
