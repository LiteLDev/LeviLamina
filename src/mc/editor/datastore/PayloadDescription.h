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
    PayloadDescription& operator=(PayloadDescription const&);
    PayloadDescription(PayloadDescription const&);
    PayloadDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::Editor::DataStore::PayloadDescription& operator=(::Editor::DataStore::PayloadDescription&&);

    MCAPI ~PayloadDescription();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Editor::DataStore
