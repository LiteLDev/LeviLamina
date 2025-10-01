#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
#include "mc/legacy/facing/Name.h"
#include "mc/world/level/block/components/NetworkedBlockComponentDescription.h"

// auto generated forward declare list
// clang-format off
class BlockComponentStorage;
class CompoundTag;
// clang-format on

struct BlockRedstoneProducerDescription
: public ::NetworkedBlockComponentDescription<::BlockRedstoneProducerDescription> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, char>                                  mPower;
    ::ll::TypedStorage<1, 1, uchar>                                 mStronglyPoweredFace;
    ::ll::TypedStorage<1, 1, ::Bedrock::EnumSet<::Facing::Name, 6>> mConnectedFaces;
    ::ll::TypedStorage<1, 1, bool>                                  mIsTransformRelative;
    ::ll::TypedStorage<1, 1, bool>                                  mAllowPowerUp;
    ::ll::TypedStorage<1, 1, bool>                                  mAllowPowerDown;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockRedstoneProducerDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::string const& getName() const /*override*/;

    // vIndex: 4
    virtual void initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const /*override*/;

    // vIndex: 2
    virtual void initializeComponent(::BlockComponentStorage& blockComponentStorage) const /*override*/;

    // vIndex: 11
    virtual ::CompoundTag buildUnboundDataNetworkTag() const /*override*/;

    // vIndex: 12
    virtual void initializeUnboundDataFromNetwork(::CompoundTag const& tag) /*override*/;

    // vIndex: 0
    virtual ~BlockRedstoneProducerDescription() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockRedstoneProducerDescription(
        int                                   outputPower,
        uchar                                 stronglyPoweredFace,
        ::Bedrock::EnumSet<::Facing::Name, 6> connectedFaces,
        bool                                  isTransformRelative,
        bool                                  allowPowerUp,
        bool                                  allowPowerDown
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& NameID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        int                                   outputPower,
        uchar                                 stronglyPoweredFace,
        ::Bedrock::EnumSet<::Facing::Name, 6> connectedFaces,
        bool                                  isTransformRelative,
        bool                                  allowPowerUp,
        bool                                  allowPowerDown
    );
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

    MCFOLD void $initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const;

    MCAPI void $initializeComponent(::BlockComponentStorage& blockComponentStorage) const;

    MCAPI ::CompoundTag $buildUnboundDataNetworkTag() const;

    MCAPI void $initializeUnboundDataFromNetwork(::CompoundTag const& tag);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
