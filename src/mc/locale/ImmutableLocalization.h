#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"
#include "mc/platform/threading/SharedLock.h"
#include "mc/platform/threading/UniqueLock.h"

// auto generated forward declare list
// clang-format off
class Localization;
// clang-format on

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

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI explicit Copy(::std::shared_ptr<::Localization const> original);

        MCNAPI ~Copy();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::std::shared_ptr<::Localization const> original);
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
    ::ll::UntypedStorage<8, 8>  mUnkc958d9;
    ::ll::UntypedStorage<8, 16> mUnk55524c;
    // NOLINTEND

public:
    // prevent constructor by default
    ImmutableLocalization& operator=(ImmutableLocalization const&);
    ImmutableLocalization(ImmutableLocalization const&);
    ImmutableLocalization();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _compareAndSwap(::ImmutableLocalization::Copy&& copy);

    MCNAPI void _setValue(::std::shared_ptr<::Localization const> value);

    MCNAPI void modifyAdditive(::brstd::function_ref<void(::Localization&)> modifier);

    MCNAPI void modifyReplace(::brstd::function_ref<void(::Localization&)> modifier);
    // NOLINTEND
};
