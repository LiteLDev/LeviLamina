#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/item/Boat.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Vec3;
// clang-format on

class ChestBoat : public ::Boat {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void kill() /*override*/;

    virtual void destroy(::Actor* sourceActor) /*override*/;

    virtual ::std::string getEntityLocNameString() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _dropChestContents(::Vec3 const& pos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $kill();

    MCAPI void $destroy(::Actor* sourceActor);

    MCAPI ::std::string $getEntityLocNameString() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
