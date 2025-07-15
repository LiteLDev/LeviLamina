#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/DenseEnumMap.h"
#include "mc/world/level/block/CopperType.h"

struct CopperBlockSet {
public:
    // CopperBlockSet inner types declare
    // clang-format off
    class HashedStringRef;
    // clang-format on

    // CopperBlockSet inner types define
    class HashedStringRef {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkd3971c;
        // NOLINTEND

    public:
        // prevent constructor by default
        HashedStringRef& operator=(HashedStringRef const&);
        HashedStringRef(HashedStringRef const&);
        HashedStringRef();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf3a4b9;
    ::ll::UntypedStorage<8, 32> mUnk763ea2;
    // NOLINTEND

public:
    // prevent constructor by default
    CopperBlockSet& operator=(CopperBlockSet const&);
    CopperBlockSet(CopperBlockSet const&);
    CopperBlockSet();
};
