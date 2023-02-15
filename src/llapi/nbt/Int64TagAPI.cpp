#include "llapi/mc/Int64Tag.hpp"
#include "llapi/memory/MemoryUtils.h"

using ll::memory::dAccess;

int64_t& Int64Tag::value() { return dAccess<int64_t, 8>(this); }

Int64Tag& Int64Tag::operator=(int64_t val) {
    value() = val;
    return *this;
}

std::unique_ptr<Int64Tag> Int64Tag::create(int64_t val) {
    auto tag = Tag::newTag(Tag::Type::Int64);
    tag->asInt64Tag()->set(val);
    return std::unique_ptr<Int64Tag>((Int64Tag*)tag.release());
}

bool Int64Tag::set(int64_t val) {
    if (getTagType() != Tag::Type::Int64)
        return false;
    value() = val;
    return true;
}

int64_t Int64Tag::get() { return value(); }

Int64Tag::operator int64_t() const {
    if (!this)
        return 0;
    return val;
}
