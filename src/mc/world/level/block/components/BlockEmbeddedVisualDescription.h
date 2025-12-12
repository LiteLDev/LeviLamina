#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/NetworkedBlockComponentDescription.h"

// auto generated forward declare list
// clang-format off
class BlockComponentStorage;
// clang-format on

struct BlockEmbeddedVisualDescription : public ::NetworkedBlockComponentDescription<::BlockEmbeddedVisualDescription> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 216> mUnkc1a530;
    ::ll::UntypedStorage<8, 144> mUnke61458;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockEmbeddedVisualDescription& operator=(BlockEmbeddedVisualDescription const&);
    BlockEmbeddedVisualDescription(BlockEmbeddedVisualDescription const&);
    BlockEmbeddedVisualDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string const& getName() const /*override*/;

    virtual void initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const /*override*/;

    virtual void initializeComponent(::BlockComponentStorage& blockComponentStorage) const /*override*/;

    virtual ~BlockEmbeddedVisualDescription() /*override*/ = default;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& NameID();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string const& $getName() const;

    MCNAPI void $initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const;

    MCNAPI void $initializeComponent(::BlockComponentStorage& blockComponentStorage) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
