#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

namespace SharedTypes::v1_21_110 {

struct Description {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString> mIdentifier;
    // NOLINTEND

public:
    // prevent constructor by default
    Description();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Description(::SharedTypes::v1_21_110::Description const&);

    MCFOLD ::SharedTypes::v1_21_110::Description& operator=(::SharedTypes::v1_21_110::Description&&);

    MCFOLD ::SharedTypes::v1_21_110::Description& operator=(::SharedTypes::v1_21_110::Description const&);

    MCAPI ~Description();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::SharedTypes::v1_21_110::Description const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110
