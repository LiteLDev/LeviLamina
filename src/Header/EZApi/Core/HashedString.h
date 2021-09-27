#pragma once

#include <cstdint>
#include <string>

#include "../dll.h"

class HashedString {
    uint64_t    hash;
    std::string str;

public:
    uint64_t getHash() const noexcept {
        return hash;
    }
    std::string const& getString() const noexcept {
        return str;
    }

    MCAPI HashedString(HashedString const& rhs);
    MCAPI HashedString(HashedString&& rhs);
    MCAPI HashedString(char const* rhs);
    MCAPI HashedString(std::string const& rhs);
    inline HashedString() {
    }
    MCAPI bool operator==(HashedString const& rhs) const;
    MCAPI bool operator!=(HashedString const& rhs) const;
};