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
    StaticOptimizedString();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StaticOptimizedString(::Bedrock::StaticOptimizedString const& other);

    MCNAPI StaticOptimizedString(::std::string_view s, ::Bedrock::StaticOptimizedString::StorageType storageType);

    MCNAPI void _set(char const* data, uint64 length, ::Bedrock::StaticOptimizedString::StorageType storageType);

    MCNAPI ::Bedrock::StaticOptimizedString& operator=(::Bedrock::StaticOptimizedString const& other);

    MCNAPI ~StaticOptimizedString();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::StaticOptimizedString const& other);

    MCNAPI void* $ctor(::std::string_view s, ::Bedrock::StaticOptimizedString::StorageType storageType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock
