#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

struct PersistenceGroupManifest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkbe7187;
    // NOLINTEND

public:
    // prevent constructor by default
    PersistenceGroupManifest& operator=(PersistenceGroupManifest const&);
    PersistenceGroupManifest(PersistenceGroupManifest const&);
    PersistenceGroupManifest();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PersistenceGroupManifest();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
