#include "llapi/mc/IntArrayTag.hpp"
#include "llapi/memory/MemoryUtils.h"

using ll::memory::dAccess;

TagMemoryChunk& IntArrayTag::value() { return dAccess<TagMemoryChunk, 8>(this); }
IntArrayTag& IntArrayTag::operator=(TagMemoryChunk const& val) {
    value() = val;
    return *this;
}

std::unique_ptr<IntArrayTag> IntArrayTag::create() {
    return std::unique_ptr<IntArrayTag>((IntArrayTag*)Tag::newTag(Tag::Type::IntArray).release());
}

std::unique_ptr<IntArrayTag> IntArrayTag::create(TagMemoryChunk const& val) {
    if (val.size % 4)
        return nullptr;
    auto tag = Tag::newTag(Tag::Type::IntArray);
    tag->asIntArrayTag()->set(val);
    return std::unique_ptr<IntArrayTag>((IntArrayTag*)tag.release());
}

std::unique_ptr<IntArrayTag> IntArrayTag::create(int data[], size_t size) {
    TagMemoryChunk tmc((char*)data, size * 4);
    return create(tmc);
}

bool IntArrayTag::set(TagMemoryChunk const& val) {
    if (getTagType() != Tag::Type::IntArray)
        return false;
    value() = val;
    return true;
}

TagMemoryChunk IntArrayTag::get() { return value(); }
