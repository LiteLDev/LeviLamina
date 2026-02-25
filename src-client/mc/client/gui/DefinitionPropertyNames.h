#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ControlPropertyNames.h"

namespace UI::Resources {

struct DefinitionPropertyNames {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string const>                   defName;
    ::ll::TypedStorage<8, 32, ::std::string const>                   defNamespace;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string> const>    defTextures;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string> const>    defProperties;
    ::ll::TypedStorage<8, 48, ::UI::Resources::ControlPropertyNames> defControls;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~DefinitionPropertyNames();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace UI::Resources
