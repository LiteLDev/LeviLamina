#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/NetworkedBlockComponentDescription.h"

// auto generated forward declare list
// clang-format off
class BlockComponentStorage;
class CompoundTag;
class SemVersion;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockFlowerPottableDescription : public ::NetworkedBlockComponentDescription<::BlockFlowerPottableDescription> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mUsePreR26U2FlowerPotOffset;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockFlowerPottableDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string const& getName() const /*override*/;

    virtual void initializeComponent(::BlockComponentStorage& blockComponentStorage) const /*override*/;

    virtual void initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const /*override*/;

    virtual void handleVersionBasedInitialization(::SemVersion const& originalJsonVersion) /*override*/;

    virtual ::CompoundTag buildUnboundDataNetworkTag() const /*override*/;

    virtual void initializeUnboundDataFromNetwork(::CompoundTag const& tag) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BlockFlowerPottableDescription(bool hardcoded);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& NameID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(bool hardcoded);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string const& $getName() const;

    MCAPI void $initializeComponent(::BlockComponentStorage& blockComponentStorage) const;

    MCFOLD void $initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const;

    MCAPI void $handleVersionBasedInitialization(::SemVersion const& originalJsonVersion);

    MCAPI ::CompoundTag $buildUnboundDataNetworkTag() const;

    MCAPI void $initializeUnboundDataFromNetwork(::CompoundTag const& tag);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
