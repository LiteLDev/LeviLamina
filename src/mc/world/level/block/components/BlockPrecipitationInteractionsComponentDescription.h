#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/NetworkedBlockComponentDescription.h"
#include "mc/world/level/block/components/PrecipitationBehavior.h"

// auto generated forward declare list
// clang-format off
class BlockComponentStorage;
class SemVersion;
// clang-format on

struct BlockPrecipitationInteractionsComponentDescription
: public ::NetworkedBlockComponentDescription<::BlockPrecipitationInteractionsComponentDescription> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk337d05;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPrecipitationInteractionsComponentDescription&
    operator=(BlockPrecipitationInteractionsComponentDescription const&);
    BlockPrecipitationInteractionsComponentDescription(BlockPrecipitationInteractionsComponentDescription const&);
    BlockPrecipitationInteractionsComponentDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string const& getName() const /*override*/;

    virtual void initializeComponent(::BlockComponentStorage& blockComponentStorage) const /*override*/;

    virtual void initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const /*override*/;

    virtual ~BlockPrecipitationInteractionsComponentDescription() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BlockPrecipitationInteractionsComponentDescription(::PrecipitationBehavior behavior);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& NameID();

    MCNAPI static ::std::string const& PrecipitationBehaviorID();

    MCNAPI static ::std::string const& SchemaID();

    MCNAPI static ::SemVersion const& Version1_21_120();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PrecipitationBehavior behavior);
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
