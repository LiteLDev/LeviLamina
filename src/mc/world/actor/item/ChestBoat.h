#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/item/Boat.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class ChestBoat : public ::Boat {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 122
    virtual void kill() /*override*/;

    // vIndex: 138
    virtual void destroy(::Actor* sourceActor) /*override*/;

    // vIndex: 30
    virtual ::std::string getEntityLocNameString() const /*override*/;

    // vIndex: 8
    virtual ~ChestBoat() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $kill();

    MCNAPI void $destroy(::Actor* sourceActor);

    MCNAPI ::std::string $getEntityLocNameString() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
