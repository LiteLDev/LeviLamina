#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/Reference.h"

namespace SharedTypes::v1_21_60::Spawn {

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
    PermuteType(PermuteType const&);
    PermuteType();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::SharedTypes::v1_21_60::Spawn::PermuteType& operator=(::SharedTypes::v1_21_60::Spawn::PermuteType&&);

    MCFOLD ::SharedTypes::v1_21_60::Spawn::PermuteType& operator=(::SharedTypes::v1_21_60::Spawn::PermuteType const&);

    MCAPI ~PermuteType();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60::Spawn
