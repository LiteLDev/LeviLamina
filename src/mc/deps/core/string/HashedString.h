#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HashedString {
public:
    // prevent constructor by default
    HashedString();

public:
    // NOLINTBEGIN
    MCAPI explicit HashedString(char const* str);

    MCAPI HashedString(class HashedString&& rhs);

    MCAPI HashedString(class HashedString const& rhs);

    MCAPI explicit HashedString(std::string const& str);

    MCAPI explicit HashedString(std::nullptr_t);

    MCAPI HashedString(uint64 hash, char const* str);

    MCAPI char const* c_str() const;

    MCAPI void clear();

    MCAPI bool empty() const;

    MCAPI uint64 getHash() const;

    MCAPI std::string const& getString() const;

    MCAPI bool isEmpty() const;

    MCAPI explicit operator std::string_view() const;

    MCAPI bool operator!=(class HashedString const& rhs) const;

    MCAPI bool operator<(class HashedString const& rhs) const;

    MCAPI class HashedString& operator=(class HashedString&& rhs);

    MCAPI class HashedString& operator=(class HashedString const& rhs);

    MCAPI bool operator==(class HashedString const& rhs) const;

    MCAPI ~HashedString();

    MCAPI static uint64 computeHash(char const* str);

    MCAPI static uint64 computeHash(std::string const& str);

    MCAPI static class HashedString const& getEmptyString();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI static class HashedString& defaultErrorValue();

    // NOLINTEND
};
