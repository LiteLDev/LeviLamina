#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
#include "mc/deps/shared_types/v1_26_10/block/ConnectionType.h"
#include "mc/deps/shared_types/v1_26_10/block/Direction.h"
#include "mc/world/level/block/components/ConnectionID.h"
#include "mc/world/level/block/components/NetworkedBlockComponentDescription.h"

// auto generated forward declare list
// clang-format off
class BlockComponentStorage;
// clang-format on

struct BlockConnectionRuleDescription : public ::NetworkedBlockComponentDescription<::BlockConnectionRuleDescription> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::Bedrock::EnumSet<::ConnectionID, 4>>              mConnectionsFromMask;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_10::ConnectionType>            mConnectionsFrom;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_26_10::Direction>> mEnabledDirections;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockConnectionRuleDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string const& getName() const /*override*/;

    virtual void initializeComponent(::BlockComponentStorage& blockComponentStorage) const /*override*/;

    virtual void initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const /*override*/;

    virtual ~BlockConnectionRuleDescription() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockConnectionRuleDescription(
        ::Bedrock::EnumSet<::ConnectionID, 4>             connectionsFromMask,
        ::std::vector<::SharedTypes::v1_26_10::Direction> enabledDirections
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::
        unordered_map<::SharedTypes::v1_26_10::ConnectionType, ::Bedrock::EnumSet<::ConnectionID, 4> const> const&
        CONNECTION_TO_MASK();

    MCAPI static ::std::string const& NameID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::EnumSet<::ConnectionID, 4>             connectionsFromMask,
        ::std::vector<::SharedTypes::v1_26_10::Direction> enabledDirections
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
