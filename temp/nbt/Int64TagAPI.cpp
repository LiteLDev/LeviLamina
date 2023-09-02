#include "liteloader/api/memory/MemoryUtils.h"
#include "mc/Int64Tag.hpp"

using ll::memory::dAccess;

int64& Int64Tag::value() { return dAccess<int64, 8>(this); }

Int64Tag& Int64Tag::operator=(int64 val) {
    value() = val;
    return *this;
}

std::unique_ptr<Int64Tag> Int64Tag::create(int64 val) {
    auto tag = Tag::newTag(Tag::Type::Int64);
    tag->asInt64Tag()->set(val);
    return std::unique_ptr<Int64Tag>((Int64Tag*)tag.release());
}

bool Int64Tag::set(int64 val) {
    if (getTagType() != Tag::Type::Int64)
        return false;
    value() = val;
    return true;
}

int64 Int64Tag::get() { return value(); }

Int64Tag::operator int64() const {
    if (!this)
        return 0;
    return val;
}
