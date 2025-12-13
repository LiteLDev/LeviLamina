#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

struct PersistenceItemMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkb94ab8;
    // NOLINTEND

public:
    // prevent constructor by default
    PersistenceItemMetadata& operator=(PersistenceItemMetadata const&);
    PersistenceItemMetadata(PersistenceItemMetadata const&);
    PersistenceItemMetadata();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::Services::PersistenceItemMetadata& operator=(::Editor::Services::PersistenceItemMetadata&&);

    MCNAPI ~PersistenceItemMetadata();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Services
