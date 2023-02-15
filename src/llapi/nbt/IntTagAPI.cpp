#include "llapi/mc/IntTag.hpp"
#include "llapi/memory/MemoryUtils.h"

using ll::memory::dAccess;

int& IntTag::value() { return dAccess<int, 8>(this); }

IntTag& IntTag::operator=(int val) {
    value() = val;
    return *this;
}

std::unique_ptr<IntTag> IntTag::create(int val) {
    auto tag = Tag::newTag(Tag::Type::Int);
    tag->asIntTag()->set(val);
    return std::unique_ptr<IntTag>((IntTag*)tag.release());
}

bool IntTag::set(int val) {
    if (getTagType() != Tag::Type::Int)
        return false;
    value() = val;
    return true;
}

int IntTag::get() { return value(); }

IntTag::operator int() const {
    if (!this)
        return 0;
    return val;
}
