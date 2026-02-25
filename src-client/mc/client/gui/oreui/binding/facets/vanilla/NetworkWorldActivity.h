#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/resources/AllowListPath.h"

namespace OreUI {

struct NetworkWorldActivity {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::OreUI::AllowListPath> imagePath;
    ::ll::TypedStorage<8, 32, ::std::string>          title;
    ::ll::TypedStorage<8, 32, ::std::string>          subtitle;
    ::ll::TypedStorage<8, 32, ::std::string>          description;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~NetworkWorldActivity();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
