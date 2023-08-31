#include "mc/IntTag.hpp"
#include "liteloader/api/memory/MemoryUtils.h"

using ll::memory::dAccess;

int32_t& IntTag::value() { return dAccess<int32_t, 8>(this); }

IntTag& IntTag::operator=(int32_t val) {
    value() = val;
    return *this;
}

std::unique_ptr<IntTag> IntTag::create(int32_t val) {
    auto tag = Tag::newTag(Tag::Type::Int);
    tag->asIntTag()->set(val);
    return std::unique_ptr<IntTag>((IntTag*)tag.release());
}

bool IntTag::set(int32_t val) {
    if (getTagType() != Tag::Type::Int)
        return false;
    value() = val;
    return true;
}

int32_t IntTag::get() { return value(); }

IntTag::operator int32_t() const {
    if (!this)
        return 0;
    return val;
}
