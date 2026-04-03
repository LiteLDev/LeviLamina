#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::DataStore {

struct PayloadDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnka1561d;
    ::ll::UntypedStorage<8, 40> mUnk37a10b;
    ::ll::UntypedStorage<8, 40> mUnk85dfb6;
    // NOLINTEND

public:
    // prevent constructor by default
    PayloadDescription& operator=(PayloadDescription const&);
    PayloadDescription(PayloadDescription const&);
    PayloadDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::DataStore::PayloadDescription& operator=(::Editor::DataStore::PayloadDescription&&);

    MCNAPI ~PayloadDescription();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::DataStore
