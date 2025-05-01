#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ILevel;
// clang-format on

class CraftingContext {
public:
    // CraftingContext inner types declare
    // clang-format off
    class Impl;
    // clang-format on

    // CraftingContext inner types define
    class Impl {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnkd10edc;
        ::ll::UntypedStorage<8, 16> mUnke6135a;
        ::ll::UntypedStorage<8, 32> mUnkde9e64;
        ::ll::UntypedStorage<8, 72> mUnk2c370e;
        ::ll::UntypedStorage<8, 64> mUnkf47724;
        ::ll::UntypedStorage<8, 64> mUnka39f24;
        ::ll::UntypedStorage<8, 64> mUnk4059ed;
        ::ll::UntypedStorage<8, 64> mUnkd7f78a;
        // NOLINTEND

    public:
        // prevent constructor by default
        Impl& operator=(Impl const&);
        Impl(Impl const&);
        Impl();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI explicit Impl(::Bedrock::NotNullNonOwnerPtr<::ILevel> level);

        MCNAPI ~Impl();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::ILevel> level);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk922d05;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftingContext& operator=(CraftingContext const&);
    CraftingContext(CraftingContext const&);
    CraftingContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CraftingContext(::Bedrock::NotNullNonOwnerPtr<::ILevel> level);

    MCNAPI ~CraftingContext();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::ILevel> level);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
