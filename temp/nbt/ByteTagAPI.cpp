#include "mc/ByteTag.hpp"

#include "liteloader/api/memory/MemoryUtils.h"

using ll::memory::dAccess;

uchar& ByteTag::value() { return dAccess<uchar, 8>(this); }

ByteTag& ByteTag::operator=(uchar val) {
    value() = val;
    return *this;
}

std::unique_ptr<ByteTag> ByteTag::create(uchar val) {
    auto tag = Tag::newTag(Tag::Type::Byte);
    tag->asByteTag()->set(val);
    return std::unique_ptr<ByteTag>((ByteTag*)tag.release());
}

bool ByteTag::set(uchar val) {
    if (getTagType() != Tag::Type::Byte)
        return false;
    value() = val;
    return true;
}

uchar ByteTag::get() { return value(); }

ByteTag::operator uchar() const {
    if (!this)
        return 0;
    return val;
}
