#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/NetworkedBlockComponentDescription.h"

// auto generated forward declare list
// clang-format off
class BlockComponentStorage;
// clang-format on

struct BlockVoxelShapesCullingDescription
: public ::NetworkedBlockComponentDescription<::BlockVoxelShapesCullingDescription> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkc9f7ef;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockVoxelShapesCullingDescription& operator=(BlockVoxelShapesCullingDescription const&);
    BlockVoxelShapesCullingDescription(BlockVoxelShapesCullingDescription const&);
    BlockVoxelShapesCullingDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string const& getName() const /*override*/;

    virtual void initializeComponent(::BlockComponentStorage& blockComponentStorage) const /*override*/;

    virtual void initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const /*override*/;

    virtual ~BlockVoxelShapesCullingDescription() /*override*/;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& NameID();

    MCNAPI static ::std::string const& SHAPE_DEFAULT();
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
