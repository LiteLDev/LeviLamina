#pragma once

#include "HashedString.h"
#include <functional>

class StringKey : public HashedString {
public:
    using HashedString::HashedString;
    using HashedString::operator==;
    using HashedString::operator!=;

    size_t mUnk;
};

namespace std {

template <>
struct hash<StringKey> {
    std::size_t operator()(StringKey const& s) const noexcept {
        return s.getHash();
    }
};

} // namespace std