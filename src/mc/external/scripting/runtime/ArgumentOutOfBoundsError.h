#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/runtime/Error.h"

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
    ArgumentOutOfBoundsError(ArgumentOutOfBoundsError const&);
    ArgumentOutOfBoundsError();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ArgumentOutOfBoundsError(::std::string const& message_, double value_, double minValue_, double maxValue_);

    MCAPI ~ArgumentOutOfBoundsError();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& message_, double value_, double minValue_, double maxValue_);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Scripting
