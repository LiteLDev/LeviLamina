#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_10::BlockDefinition {

struct Tags {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mTags;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~Tags();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NameId();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10::BlockDefinition
