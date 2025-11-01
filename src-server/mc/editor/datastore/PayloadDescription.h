#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::DataStore {

struct PayloadDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkb5d9f9;
    ::ll::UntypedStorage<8, 40> mUnkd46627;
    ::ll::UntypedStorage<8, 40> mUnk7425ea;
    // NOLINTEND

public:
    // prevent constructor by default
    PayloadDescription(PayloadDescription const&);
    PayloadDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::DataStore::PayloadDescription& operator=(::Editor::DataStore::PayloadDescription const&);

    MCNAPI ::Editor::DataStore::PayloadDescription& operator=(::Editor::DataStore::PayloadDescription&&);

    MCNAPI ~PayloadDescription();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
