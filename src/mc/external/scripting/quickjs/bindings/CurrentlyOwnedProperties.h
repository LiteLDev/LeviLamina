#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

struct CurrentlyOwnedProperties {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnka53bfa;
    ::ll::UntypedStorage<8, 24> mUnk32658d;
    // NOLINTEND

public:
    // prevent constructor by default
    CurrentlyOwnedProperties& operator=(CurrentlyOwnedProperties const&);
    CurrentlyOwnedProperties(CurrentlyOwnedProperties const&);
    CurrentlyOwnedProperties();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::QuickJS::CurrentlyOwnedProperties& operator=(::Scripting::QuickJS::CurrentlyOwnedProperties&&);
    // NOLINTEND
};

} // namespace Scripting::QuickJS
