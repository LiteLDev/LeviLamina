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
    MCAPI StaticOptimizedString(class Bedrock::StaticOptimizedString&&);

    MCAPI StaticOptimizedString(class Bedrock::StaticOptimizedString const&);

    MCAPI ~StaticOptimizedString();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _set(char const*, uint64, ::Bedrock::StaticOptimizedString::StorageType);

    // NOLINTEND
};

}; // namespace Bedrock
