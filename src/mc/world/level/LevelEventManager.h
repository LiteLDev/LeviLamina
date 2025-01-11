#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/world/level/ILevelEventManagerCoordinator.h"
#include "mc/world/level/block/LevelEvent.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class IDimension;
class LevelEventCoordinator;
class UserEntityIdentifierComponent;
class Vec3;
// clang-format on

class LevelEventManager : public ::ILevelEventManagerCoordinator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnk421ab9;
    ::ll::UntypedStorage<8, 24>  mUnk9a39fb;
    ::ll::UntypedStorage<8, 24>  mUnk2ce8a3;
    ::ll::UntypedStorage<8, 128> mUnk9a2537;
    ::ll::UntypedStorage<8, 128> mUnk50442b;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelEventManager& operator=(LevelEventManager const&);
    LevelEventManager(LevelEventManager const&);
    LevelEventManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LevelEventManager() /*override*/;

    // vIndex: 1
    virtual ::Bedrock::PubSub::Connector<void(::LevelEvent, ::Vec3 const&, int)>&
    getLevelEventDataConnector() /*override*/;

    // vIndex: 2
    virtual ::Bedrock::PubSub::Connector<void(::LevelEvent, ::CompoundTag const&)>&
    getLevelEventCompoundTagConnector() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    LevelEventManager(bool isClientSide, ::Bedrock::NotNullNonOwnerPtr<::LevelEventCoordinator> levelEventCoordinator);

    MCAPI void broadcastLevelEvent(
        ::LevelEvent                           type,
        ::CompoundTag const&                   tag,
        ::UserEntityIdentifierComponent const* userIdentifierToExclude
    );

    MCAPI void broadcastLevelEvent(
        ::LevelEvent                           type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::UserEntityIdentifierComponent const* userIdentifierToExclude
    );

    MCAPI void broadcastLocalEvent(::IDimension& dimension, ::LevelEvent type, ::Vec3 const& pos, int data);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(bool isClientSide, ::Bedrock::NotNullNonOwnerPtr<::LevelEventCoordinator> levelEventCoordinator);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Bedrock::PubSub::Connector<void(::LevelEvent, ::Vec3 const&, int)>& $getLevelEventDataConnector();

    MCFOLD ::Bedrock::PubSub::Connector<void(::LevelEvent, ::CompoundTag const&)>& $getLevelEventCompoundTagConnector();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
