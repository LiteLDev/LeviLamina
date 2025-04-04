#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
// clang-format on

class MolangUpdateSystem : public ::ITickingSystem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk5f68c4;
    // NOLINTEND

public:
    // prevent constructor by default
    MolangUpdateSystem& operator=(MolangUpdateSystem const&);
    MolangUpdateSystem(MolangUpdateSystem const&);
    MolangUpdateSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void tick(::EntityRegistry&) /*override*/;

    // vIndex: 0
    virtual ~MolangUpdateSystem() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
