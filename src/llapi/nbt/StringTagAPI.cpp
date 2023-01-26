#include "llapi/mc/StringTag.hpp"

std::string& StringTag::value() {
    return dAccess<std::string, 8>(this);
}

StringTag& StringTag::operator=(std::string const& val) {
    value() = val;
    return *this;
}

std::unique_ptr<StringTag> StringTag::create(std::string val) {
    auto tag = Tag::newTag(Tag::Type::String);
    tag->asStringTag()->set(val);
    return std::unique_ptr<StringTag>((StringTag*)tag.release());
}

bool StringTag::set(std::string const& val) {
    if (getTagType() != Tag::Type::String)
        return false;
    value() = val;
    return true;
}

std::string StringTag::get() {
    return value();
}

StringTag::operator std::string() const {
    if (!this)
        return "";
    return val;
}
