#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace UI::Resources {

struct ResolvedPropertyData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> name;
    ::ll::TypedStorage<8, 32, ::std::string> value;
    // NOLINTEND

public:
    // prevent constructor by default
    ResolvedPropertyData& operator=(ResolvedPropertyData const&);
    ResolvedPropertyData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ResolvedPropertyData(::UI::Resources::ResolvedPropertyData const&);

    MCAPI ~ResolvedPropertyData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::UI::Resources::ResolvedPropertyData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace UI::Resources
