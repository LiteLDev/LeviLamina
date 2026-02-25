#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/PrivacyTagEnterprise.h"

namespace OreUI {

struct EventProperty {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::variant<::std::string, bool, double>> value;
    ::ll::TypedStorage<1, 1, ::Social::Events::PrivacyTagEnterprise>       privacyTag;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~EventProperty();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace OreUI
