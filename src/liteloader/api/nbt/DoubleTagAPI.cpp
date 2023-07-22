#include "mc/DoubleTag.hpp"
#include "liteloader/api/memory/MemoryUtils.h"

using ll::memory::dAccess;

double& DoubleTag::value() { return dAccess<double, 8>(this); }

DoubleTag& DoubleTag::operator=(double val) {
    value() = val;
    return *this;
}

std::unique_ptr<DoubleTag> DoubleTag::create(double val) {
    auto tag = Tag::newTag(Tag::Type::Double);
    tag->asDoubleTag()->set(val);
    return std::unique_ptr<DoubleTag>((DoubleTag*)tag.release());
}

bool DoubleTag::set(double val) {
    if (getTagType() != Tag::Type::Double)
        return false;
    value() = val;
    return true;
}

double DoubleTag::get() { return value(); }

DoubleTag::operator double() const {
    if (!this)
        return 0.0;
    return val;
}
