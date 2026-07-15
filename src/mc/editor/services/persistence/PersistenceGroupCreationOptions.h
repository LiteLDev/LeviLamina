#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

struct PersistenceGroupCreationOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk7917d2;
    ::ll::UntypedStorage<4, 8> mUnk56d671;
    ::ll::UntypedStorage<4, 8> mUnkf149c6;
    // NOLINTEND

public:
    // prevent constructor by default
    PersistenceGroupCreationOptions& operator=(PersistenceGroupCreationOptions const&);
    PersistenceGroupCreationOptions(PersistenceGroupCreationOptions const&);
    PersistenceGroupCreationOptions();
};

} // namespace Editor::Services
