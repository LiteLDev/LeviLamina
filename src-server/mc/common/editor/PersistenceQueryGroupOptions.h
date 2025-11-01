#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

struct PersistenceQueryGroupOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk266c7e;
    ::ll::UntypedStorage<8, 40> mUnk918c22;
    ::ll::UntypedStorage<4, 8> mUnk9a25f4;
    ::ll::UntypedStorage<4, 8> mUnkdcf3ee;
    // NOLINTEND

public:
    // prevent constructor by default
    PersistenceQueryGroupOptions(PersistenceQueryGroupOptions const&);
    PersistenceQueryGroupOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::Services::PersistenceQueryGroupOptions& operator=(::Editor::Services::PersistenceQueryGroupOptions const&);

    MCNAPI ~PersistenceQueryGroupOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
