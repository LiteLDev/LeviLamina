#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/util/OwnerPtrFactory.h"

// auto generated forward declare list
// clang-format off
class Dimension;
struct DerivedDimensionArguments;
// clang-format on

struct DimensionFactoryArguments {
public:
    // DimensionFactoryArguments inner types declare
    // clang-format off
    struct Dependencies;
    // clang-format on

    // DimensionFactoryArguments inner types define
    struct Dependencies {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk63480c;
        ::ll::UntypedStorage<8, 24> mUnk1722af;
        ::ll::UntypedStorage<8, 8>  mUnke4956f;
        ::ll::UntypedStorage<8, 64> mUnkefd193;
        // NOLINTEND

    public:
        // prevent constructor by default
        Dependencies& operator=(Dependencies const&);
        Dependencies(Dependencies const&);
        Dependencies();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Dependencies();
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
    ::ll::TypedStorage<
        8,
        64,
        ::brstd::move_only_function<::OwnerPtr<
            ::Dimension>(::OwnerPtrFactory<::Dimension, ::DerivedDimensionArguments&&> const&, ::std::string const&)
                                        const>>
                                                                                     mCreate;
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<void(::Dimension&) const>> mInit;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DimensionFactoryArguments();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::DimensionFactoryArguments create(::DimensionFactoryArguments::Dependencies&& deps);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
