#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/threading/SharedLock.h"
#include "mc/platform/threading/UniqueLock.h"

class ImmutableLocalization {
public:
    // ImmutableLocalization inner types declare
    // clang-format off
    struct Copy;
    // clang-format on

    // ImmutableLocalization inner types define
    struct Copy {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnkf64f09;
        ::ll::UntypedStorage<8, 16> mUnkcd94c1;
        // NOLINTEND

    public:
        // prevent constructor by default
        Copy& operator=(Copy const&);
        Copy(Copy const&);
        Copy();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkc958d9;
    ::ll::UntypedStorage<8, 16> mUnk55524c;
    // NOLINTEND

public:
    // prevent constructor by default
    ImmutableLocalization& operator=(ImmutableLocalization const&);
    ImmutableLocalization(ImmutableLocalization const&);
    ImmutableLocalization();
};
