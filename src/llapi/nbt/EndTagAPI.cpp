#include "llapi/mc/EndTag.hpp"

nullptr_t EndTag::value() { return nullptr; }

std::unique_ptr<EndTag> EndTag::create() {
    return std::unique_ptr<EndTag>((EndTag*)Tag::newTag(Tag::Type::End).release());
}

bool EndTag::set() {
    if (getTagType() != Tag::Type::End)
        return false;
    return true;
}

nullptr_t EndTag::get() { return nullptr; }
