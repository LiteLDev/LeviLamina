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
    virtual void kill() /*override*/;

    virtual void destroy(::Actor* source) /*override*/;

    virtual ::std::string getEntityLocNameString() const /*override*/;

    virtual ~ChestBoat() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $kill();

    MCAPI void $destroy(::Actor* source);

    MCAPI ::std::string $getEntityLocNameString() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
