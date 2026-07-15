#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/Reference.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Legacy::Spawn { struct PermuteType; }
// clang-format on

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
    // static functions
    // NOLINTBEGIN
    MCAPI static ::SharedTypes::v1_21_60::Spawn::PermuteType from(::SharedTypes::Legacy::Spawn::PermuteType const& val);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60::Spawn
