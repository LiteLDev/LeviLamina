#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/SimpleContainer.h"

// auto generated forward declare list
// clang-format off
class ListTag;
class SaveContext;
class SemVersion;
// clang-format on

class PlayerUIContainer : public ::SimpleContainer {
public:
    // prevent constructor by default
    PlayerUIContainer& operator=(PlayerUIContainer const&);
    PlayerUIContainer(PlayerUIContainer const&);
    PlayerUIContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerUIContainer() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerUIContainer(::std::string const& name, bool customName, int size);

    MCAPI void load(::ListTag const& inventoryList, ::SemVersion const& version);

    MCAPI ::std::unique_ptr<::ListTag> save(::SaveContext const& saveContext) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, bool customName, int size);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
