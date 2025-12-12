#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/NetworkedBlockComponentDescription.h"
#include "mc/world/level/block/components/SupportShape.h"

// auto generated forward declare list
// clang-format off
class BlockComponentStorage;
// clang-format on

struct BlockSupportDescription : public ::NetworkedBlockComponentDescription<::BlockSupportDescription> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkd23f98;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockSupportDescription& operator=(BlockSupportDescription const&);
    BlockSupportDescription(BlockSupportDescription const&);
    BlockSupportDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string const& getName() const /*override*/;

    virtual void initializeComponent(::BlockComponentStorage& blockComponentStorage) const /*override*/;

    virtual void initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const /*override*/;

    virtual ~BlockSupportDescription() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BlockSupportDescription(::SupportShape shapeType);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& NameID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SupportShape shapeType);
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
