#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Error.h"

namespace Scripting {

struct ArgumentOutOfBoundsError : public ::Scripting::Error {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk740508;
    ::ll::UntypedStorage<8, 8> mUnkafc9ac;
    ::ll::UntypedStorage<8, 8> mUnke9fe98;
    // NOLINTEND

public:
    // prevent constructor by default
    ArgumentOutOfBoundsError& operator=(ArgumentOutOfBoundsError const&);
    ArgumentOutOfBoundsError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ArgumentOutOfBoundsError(::Scripting::ArgumentOutOfBoundsError&&);

    MCNAPI ArgumentOutOfBoundsError(::Scripting::ArgumentOutOfBoundsError const&);

    MCNAPI ArgumentOutOfBoundsError(::std::string const& message_, double value_, double minValue_, double maxValue_);

    MCNAPI ::Scripting::ArgumentOutOfBoundsError& operator=(::Scripting::ArgumentOutOfBoundsError&&);

    MCNAPI ~ArgumentOutOfBoundsError();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::ArgumentOutOfBoundsError&&);

    MCNAPI void* $ctor(::Scripting::ArgumentOutOfBoundsError const&);

    MCNAPI void* $ctor(::std::string const& message_, double value_, double minValue_, double maxValue_);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
