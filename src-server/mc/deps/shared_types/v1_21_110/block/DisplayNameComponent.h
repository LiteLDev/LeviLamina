#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_110::BlockDefinition {

struct DisplayNameComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk54cc85;
    // NOLINTEND

public:
    // prevent constructor by default
    DisplayNameComponent& operator=(DisplayNameComponent const&);
    DisplayNameComponent(DisplayNameComponent const&);
    DisplayNameComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DisplayNameComponent();
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
