#include "mc/ByteArrayTag.hpp"

#include "liteloader/api/memory/MemoryUtils.h"

using ll::memory::dAccess;

TagMemoryChunk& ByteArrayTag::value() { return dAccess<TagMemoryChunk, 8>(this); }

ByteArrayTag& ByteArrayTag::operator=(TagMemoryChunk const& val) {
    value() = val;
    return *this;
}

std::unique_ptr<ByteArrayTag> ByteArrayTag::create() {
    return std::unique_ptr<ByteArrayTag>((ByteArrayTag*)Tag::newTag(Tag::Type::ByteArray).release());
}

std::unique_ptr<ByteArrayTag> ByteArrayTag::create(TagMemoryChunk const& val) {
    auto tag = Tag::newTag(Tag::Type::ByteArray);
    tag->asByteArrayTag()->set(val);
    return std::unique_ptr<ByteArrayTag>((ByteArrayTag*)tag.release());
}

std::unique_ptr<ByteArrayTag> ByteArrayTag::create(char data[], size_t size) {
    TagMemoryChunk tmc(data, size);
    return create(tmc);
}

bool ByteArrayTag::set(TagMemoryChunk const& val) {
    if (getTagType() != Tag::Type::ByteArray)
        return false;
    value() = val;
    return true;
}

TagMemoryChunk ByteArrayTag::get() { return value(); }
