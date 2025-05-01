#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/world/ContainerID.h"
#include "mc/world/containers/managers/IContainerManager.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ContainerModel;
class ContainerScreenContext;
class ItemStack;
class Player;
struct FullContainerName;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class ContainerManagerModel : public ::IContainerManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnkc2376e;
    ::ll::UntypedStorage<8, 16>  mUnk38654c;
    ::ll::UntypedStorage<8, 16>  mUnk1bfaad;
    ::ll::UntypedStorage<8, 8>   mUnkfee45b;
    ::ll::UntypedStorage<8, 24>  mUnkf245ae;
    ::ll::UntypedStorage<1, 1>   mUnk5c726e;
    ::ll::UntypedStorage<1, 1>   mUnkb3fe56;
    ::ll::UntypedStorage<8, 8>   mUnk3505e0;
    ::ll::UntypedStorage<8, 64>  mUnk466296;
    ::ll::UntypedStorage<8, 40>  mUnkbb37fd;
    ::ll::UntypedStorage<8, 64>  mUnke23970;
    ::ll::UntypedStorage<8, 128> mUnkb06eac;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerManagerModel& operator=(ContainerManagerModel const&);
    ContainerManagerModel(ContainerManagerModel const&);
    ContainerManagerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ContainerManagerModel() /*override*/;

    // vIndex: 14
    virtual bool tick();

    // vIndex: 1
    virtual ::ContainerID getContainerId() const /*override*/;

    // vIndex: 2
    virtual void setContainerId(::ContainerID id) /*override*/;

    // vIndex: 3
    virtual ::SharedTypes::Legacy::ContainerType getContainerType() const /*override*/;

    // vIndex: 4
    virtual void setContainerType(::SharedTypes::Legacy::ContainerType type) /*override*/;

    // vIndex: 5
    virtual ::Bedrock::PubSub::Subscription
    registerContainerTypeListener(::std::function<void(::SharedTypes::Legacy::ContainerType)> callback) const
        /*override*/;

    // vIndex: 15
    virtual void debitPlayerLevels(int levels);

    // vIndex: 16
    virtual bool isCreativeMode() const;

    // vIndex: 17
    virtual bool isClientSide() const;

    // vIndex: 18
    virtual bool isServerAuthoritative() const;

    // vIndex: 19
    virtual bool isValid(float pickRange);

    // vIndex: 6
    virtual void serverInitItemStackIds() /*override*/;

    // vIndex: 11
    virtual void
    setFullContainerSlot(int slot, ::FullContainerName const& name, ::ItemStack const& item, bool) /*override*/;

    // vIndex: 12
    virtual ::ItemStack const& getFullContainerSlot(int slot, ::FullContainerName const& name) const /*override*/;

    // vIndex: 13
    virtual void broadcastChanges() /*override*/;

    // vIndex: 20
    virtual ::ContainerScreenContext _postInit() = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ContainerManagerModel(::ContainerID containerId, ::Player& player);

    MCNAPI void _addContainer(::std::shared_ptr<::ContainerModel> containerModel);

    MCNAPI bool _isPlayerInRangeOfPosition(::BlockPos const& blockPos, float pickRange) const;

    MCNAPI void addDynamicContainer(::std::shared_ptr<::ContainerModel> model);

    MCNAPI void postInit();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ContainerID containerId, ::Player& player);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $tick();

    MCNAPI ::ContainerID $getContainerId() const;

    MCNAPI void $setContainerId(::ContainerID id);

    MCNAPI ::SharedTypes::Legacy::ContainerType $getContainerType() const;

    MCNAPI void $setContainerType(::SharedTypes::Legacy::ContainerType type);

    MCNAPI ::Bedrock::PubSub::Subscription
    $registerContainerTypeListener(::std::function<void(::SharedTypes::Legacy::ContainerType)> callback) const;

    MCNAPI void $debitPlayerLevels(int levels);

    MCNAPI bool $isCreativeMode() const;

    MCNAPI bool $isClientSide() const;

    MCNAPI bool $isServerAuthoritative() const;

    MCNAPI bool $isValid(float pickRange);

    MCNAPI void $serverInitItemStackIds();

    MCNAPI void $setFullContainerSlot(int slot, ::FullContainerName const& name, ::ItemStack const& item, bool);

    MCNAPI ::ItemStack const& $getFullContainerSlot(int slot, ::FullContainerName const& name) const;

    MCNAPI void $broadcastChanges();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
