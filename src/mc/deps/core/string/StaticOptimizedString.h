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
    MCAPI void* ctor$(class Bedrock::StaticOptimizedString const& other);

    MCAPI void* ctor$(class Bedrock::StaticOptimizedString&& other);

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Bedrock
