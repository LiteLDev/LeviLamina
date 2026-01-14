#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_110::BlockDefinition {

struct Tags {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mTags;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_S ~Tags();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI_S static ::std::string_view const& NameId();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD_S void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110::BlockDefinition
