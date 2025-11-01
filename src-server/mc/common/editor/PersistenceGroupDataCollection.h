#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

struct PersistenceGroupDataCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk65f955;
    ::ll::UntypedStorage<8, 24> mUnkb49381;
    // NOLINTEND

public:
    // prevent constructor by default
    PersistenceGroupDataCollection& operator=(PersistenceGroupDataCollection const&);
    PersistenceGroupDataCollection();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PersistenceGroupDataCollection(::Editor::Services::PersistenceGroupDataCollection const&);

    MCNAPI ::Editor::Services::PersistenceGroupDataCollection&
    operator=(::Editor::Services::PersistenceGroupDataCollection&&);

    MCNAPI ~PersistenceGroupDataCollection();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Services::PersistenceGroupDataCollection const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Services
