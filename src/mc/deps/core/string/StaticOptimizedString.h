#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class StaticOptimizedString {
public:
    // StaticOptimizedString inner types define
    enum class StorageType {};

public:
    // prevent constructor by default
    StaticOptimizedString& operator=(StaticOptimizedString const&);
    StaticOptimizedString();

public:
    // NOLINTBEGIN
    MCAPI StaticOptimizedString(class Bedrock::StaticOptimizedString&& other);

    MCAPI StaticOptimizedString(class Bedrock::StaticOptimizedString const& other);

    MCAPI ~StaticOptimizedString();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _set(char const* data, uint64 length, ::Bedrock::StaticOptimizedString::StorageType storageType);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Bedrock
