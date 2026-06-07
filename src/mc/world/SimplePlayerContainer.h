#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/world/SimpleContainer.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class Player;
// clang-format on

class SimplePlayerContainer : public ::SimpleContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Player&> mPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    SimplePlayerContainer& operator=(SimplePlayerContainer const&);
    SimplePlayerContainer(SimplePlayerContainer const&);
    SimplePlayerContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SimplePlayerContainer() /*override*/ = default;

    virtual ::ItemStack const& getItem(int slot) const /*override*/;

    virtual void setItem(int slot, ::ItemStack const& item) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SimplePlayerContainer(
        ::Player&                            player,
        ::std::string const&                 name,
        bool                                 customName,
        int                                  size,
        ::SharedTypes::Legacy::ContainerType containerType
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Player&                            player,
        ::std::string const&                 name,
        bool                                 customName,
        int                                  size,
        ::SharedTypes::Legacy::ContainerType containerType
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ItemStack const& $getItem(int slot) const;

    MCAPI void $setItem(int slot, ::ItemStack const& item);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
