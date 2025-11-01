#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_110::BlockDefinition {

struct Tags {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk2fd887;
    // NOLINTEND

public:
    // prevent constructor by default
    Tags& operator=(Tags const&);
    Tags(Tags const&);
    Tags();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~Tags();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& NameId();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
