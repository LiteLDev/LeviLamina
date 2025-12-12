#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

namespace SharedTypes::v1_20_80 {

struct VectorEvents {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkbbb7b5;
    // NOLINTEND

public:
    // prevent constructor by default
    VectorEvents& operator=(VectorEvents const&);
    VectorEvents(VectorEvents const&);
    VectorEvents();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~VectorEvents();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void fromString(::SharedTypes::v1_20_80::VectorEvents& instance, ::HashedString const& string);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
