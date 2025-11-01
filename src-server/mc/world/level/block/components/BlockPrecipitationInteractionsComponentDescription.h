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

struct BlockPrecipitationInteractionsComponentDescription : public ::NetworkedBlockComponentDescription<::BlockPrecipitationInteractionsComponentDescription> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::PrecipitationBehavior> mBehavior;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPrecipitationInteractionsComponentDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::string const& getName() const /*override*/;

    // vIndex: 2
    virtual void initializeComponent(::BlockComponentStorage& blockComponentStorage) const /*override*/;

    // vIndex: 4
    virtual void initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const /*override*/;

    // vIndex: 0
    virtual ~BlockPrecipitationInteractionsComponentDescription() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BlockPrecipitationInteractionsComponentDescription(::PrecipitationBehavior behavior);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& NameID();

    MCAPI static ::std::string const& PrecipitationBehaviorID();

    MCAPI static ::std::string const& SchemaID();

    MCAPI static ::SemVersion const& Version1_21_120();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::PrecipitationBehavior behavior);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string const& $getName() const;

    MCAPI void $initializeComponent(::BlockComponentStorage& blockComponentStorage) const;

    MCFOLD void $initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
