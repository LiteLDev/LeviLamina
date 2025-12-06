#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class StaticOptimizedString {
public:
    // StaticOptimizedString inner types define
    enum class StorageType : uint {};

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
    MCAPI StaticOptimizedString(::Bedrock::StaticOptimizedString const& other);

    MCAPI StaticOptimizedString(::std::string_view s, ::Bedrock::StaticOptimizedString::StorageType storageType);

    MCAPI void _set(char const* data, uint64 length, ::Bedrock::StaticOptimizedString::StorageType storageType);

    MCAPI ::Bedrock::StaticOptimizedString& operator=(::Bedrock::StaticOptimizedString const& other);

    MCAPI ~StaticOptimizedString();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::StaticOptimizedString const& other);

    MCAPI void* $ctor(::std::string_view s, ::Bedrock::StaticOptimizedString::StorageType storageType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock
