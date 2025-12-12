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
    ::ll::UntypedStorage<1, 1> mUnke6a3fa;
    ::ll::UntypedStorage<1, 1> mUnkaa3794;
    ::ll::UntypedStorage<1, 1> mUnk1d9ab0;
    ::ll::UntypedStorage<1, 1> mUnk417b22;
    ::ll::UntypedStorage<1, 1> mUnk88f635;
    ::ll::UntypedStorage<1, 1> mUnk2fb6ff;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockRedstoneProducerDescription& operator=(BlockRedstoneProducerDescription const&);
    BlockRedstoneProducerDescription(BlockRedstoneProducerDescription const&);
    BlockRedstoneProducerDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string const& getName() const /*override*/;

    virtual void initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const /*override*/;

    virtual void initializeComponent(::BlockComponentStorage& blockComponentStorage) const /*override*/;

    virtual ::CompoundTag buildUnboundDataNetworkTag() const /*override*/;

    virtual void initializeUnboundDataFromNetwork(::CompoundTag const& tag) /*override*/;

    virtual ~BlockRedstoneProducerDescription() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockRedstoneProducerDescription(
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
    MCNAPI static ::std::string const& NameID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
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
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string const& $getName() const;

    MCNAPI void $initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const;

    MCNAPI void $initializeComponent(::BlockComponentStorage& blockComponentStorage) const;

    MCNAPI ::CompoundTag $buildUnboundDataNetworkTag() const;

    MCNAPI void $initializeUnboundDataFromNetwork(::CompoundTag const& tag);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
