#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/NewType.h"

namespace World {

struct WorldID : public ::NewType<::std::string> {
public:
    // prevent constructor by default
    WorldID& operator=(WorldID const&);
    WorldID(WorldID const&);
    WorldID();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::World::WorldID& operator=(::World::WorldID&&);

    MCAPI ~WorldID();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace World
