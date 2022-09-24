#include "llapi/mc/FloatTag.hpp"

float& FloatTag::value() {
    return dAccess<float, 8>(this);
}

FloatTag& FloatTag::operator=(float val) {
    value() = val;
    return *this;
}

std::unique_ptr<FloatTag> FloatTag::create(float val) {
    auto tag = Tag::newTag(Tag::Type::Float);
    tag->asFloatTag()->set(val);
    return std::unique_ptr<FloatTag>((FloatTag*)tag.release());
}

bool FloatTag::set(float val) {
    if (getTagType() != Tag::Type::Float)
        return false;
    value() = val;
    return true;
}

float FloatTag::get() {
    return value();
}

FloatTag::operator float() const {
    if (!this)
        return 0.0f;
    return val;
}
