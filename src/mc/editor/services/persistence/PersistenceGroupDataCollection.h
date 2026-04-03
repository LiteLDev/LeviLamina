#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

struct PersistenceGroupDataCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk6b98a7;
    ::ll::UntypedStorage<8, 24> mUnka2db32;
    // NOLINTEND

public:
    // prevent constructor by default
    PersistenceGroupDataCollection& operator=(PersistenceGroupDataCollection const&);
    PersistenceGroupDataCollection();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PersistenceGroupDataCollection(::Editor::Services::PersistenceGroupDataCollection const&);

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
