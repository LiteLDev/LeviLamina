#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/Reference.h"

namespace SharedTypes::Legacy::Spawn {

struct PermuteType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                          mWeight;
    ::ll::TypedStorage<4, 4, int>                          mMinGuaranteed;
    ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<1>> mEntityType;
    // NOLINTEND

public:
    // prevent constructor by default
    PermuteType& operator=(PermuteType const&);
    PermuteType(PermuteType const&);
    PermuteType();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::SharedTypes::Legacy::Spawn::PermuteType& operator=(::SharedTypes::Legacy::Spawn::PermuteType&&);

    MCAPI ~PermuteType();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::Legacy::Spawn
