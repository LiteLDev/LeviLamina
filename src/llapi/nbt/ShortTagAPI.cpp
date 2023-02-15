#include "llapi/mc/ShortTag.hpp"

#include "llapi/memory/MemoryUtils.h"

using ll::memory::dAccess;

short& ShortTag::value() { return dAccess<short, 8>(this); }

ShortTag& ShortTag::operator=(short val) {
    value() = val;
    return *this;
}

std::unique_ptr<ShortTag> ShortTag::create(short val) {
    auto tag = Tag::newTag(Tag::Type::Short);
    tag->asShortTag()->set(val);
    return std::unique_ptr<ShortTag>((ShortTag*)tag.release());
}

bool ShortTag::set(short val) {
    if (getTagType() != Tag::Type::Short)
        return false;
    value() = val;
    return true;
}

short ShortTag::get() { return value(); }

ShortTag::operator short() const {
    if (!this)
        return 0;
    return val;
}
