#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class StaticOptimizedString {
public:
    // StaticOptimizedString inner types define
    enum class StorageType : int {
        Static  = 0,
        Dynamic = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk31dddc;
    // NOLINTEND

public:
    // prevent constructor by default
    StaticOptimizedString& operator=(StaticOptimizedString const&);
    StaticOptimizedString();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StaticOptimizedString(::Bedrock::StaticOptimizedString const& other);

    MCAPI StaticOptimizedString(::Bedrock::StaticOptimizedString&& other);

    MCAPI void _set(char const* data, uint64 length, ::Bedrock::StaticOptimizedString::StorageType storageType);

    MCAPI ~StaticOptimizedString();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::StaticOptimizedString const& other);

    MCAPI void* $ctor(::Bedrock::StaticOptimizedString&& other);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock
