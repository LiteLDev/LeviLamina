#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/Reference.h"

namespace SharedTypes::v1_21_20::PoolAliases {

struct Direct {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                mAlias;
    ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<15>> mTarget;
    // NOLINTEND

public:
    // prevent constructor by default
    Direct(Direct const&);
    Direct();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_20::PoolAliases::Direct& operator=(::SharedTypes::v1_21_20::PoolAliases::Direct&&);

    MCFOLD ::SharedTypes::v1_21_20::PoolAliases::Direct& operator=(::SharedTypes::v1_21_20::PoolAliases::Direct const&);

    MCAPI ~Direct();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::PoolAliases
