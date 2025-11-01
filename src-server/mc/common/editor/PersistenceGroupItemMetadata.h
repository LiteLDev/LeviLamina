#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

struct PersistenceGroupItemMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk1561a7;
    ::ll::UntypedStorage<4, 4>  mUnk65f780;
    ::ll::UntypedStorage<8, 40> mUnk911841;
    // NOLINTEND

public:
    // prevent constructor by default
    PersistenceGroupItemMetadata(PersistenceGroupItemMetadata const&);
    PersistenceGroupItemMetadata();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::Services::PersistenceGroupItemMetadata&
    operator=(::Editor::Services::PersistenceGroupItemMetadata&&);

    MCNAPI ::Editor::Services::PersistenceGroupItemMetadata&
    operator=(::Editor::Services::PersistenceGroupItemMetadata const&);

    MCNAPI ~PersistenceGroupItemMetadata();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Services
