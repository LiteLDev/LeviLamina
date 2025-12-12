#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/NetworkedBlockComponentDescription.h"

// auto generated forward declare list
// clang-format off
class BlockComponentStorage;
// clang-format on

struct BlockFlowerPottableDescription : public ::NetworkedBlockComponentDescription<::BlockFlowerPottableDescription> {
public:
    // prevent constructor by default
    BlockFlowerPottableDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string const& getName() const /*override*/;

    virtual void initializeComponent(::BlockComponentStorage& blockComponentStorage) const /*override*/;

    virtual void initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const /*override*/;

    virtual ~BlockFlowerPottableDescription() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BlockFlowerPottableDescription(bool hardcoded);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& NameID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool hardcoded);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string const& $getName() const;

    MCNAPI void $initializeComponent(::BlockComponentStorage& blockComponentStorage) const;

    MCNAPI void $initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
