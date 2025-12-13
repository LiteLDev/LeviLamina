#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/minecraft/threading/EnableQueueForMainThread.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/IncomingPacketFilterResult.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/NetEventCallback.h"
#include "mc/network/OutgoingPacketFilterResult.h"

// auto generated forward declare list
// clang-format off
class Packet;
struct NetworkIdentifierWithSubId;
namespace Automation { class AutomationClient; }
// clang-format on

class ClassroomModeNetworkHandler : public ::NetEventCallback, public ::Bedrock::Threading::EnableQueueForMainThread {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkc48695;
    ::ll::UntypedStorage<8, 8>  mUnke73bc4;
    ::ll::UntypedStorage<8, 32> mUnk3b0765;
    ::ll::UntypedStorage<8, 32> mUnk91139f;
    ::ll::UntypedStorage<1, 1>  mUnk7eb0cd;
    // NOLINTEND

public:
    // prevent constructor by default
    ClassroomModeNetworkHandler& operator=(ClassroomModeNetworkHandler const&);
    ClassroomModeNetworkHandler(ClassroomModeNetworkHandler const&);
    ClassroomModeNetworkHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClassroomModeNetworkHandler() /*override*/;

    virtual ::IncomingPacketFilterResult allowIncomingPacketId(
        ::NetworkIdentifierWithSubId const& id,
        ::MinecraftPacketIds                packetId,
        uint64                              packetSize
    ) /*override*/;

    virtual ::OutgoingPacketFilterResult
    allowOutgoingPacket(::std::vector<::NetworkIdentifierWithSubId> const& ids, ::Packet const& packet) /*override*/;

    virtual void onWebsocketRequest(
        ::std::string const&    serverAddress,
        ::std::string const&    payload,
        ::std::function<void()> errorCallback
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ClassroomModeNetworkHandler(bool isDedicatedServer);

    MCNAPI void _connect(::std::string const& address);

    MCNAPI_S void setAutomationClient(::Bedrock::NonOwnerPointer<::Automation::AutomationClient> client);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool isDedicatedServer);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::IncomingPacketFilterResult
    $allowIncomingPacketId(::NetworkIdentifierWithSubId const& id, ::MinecraftPacketIds packetId, uint64 packetSize);

    MCNAPI ::OutgoingPacketFilterResult
    $allowOutgoingPacket(::std::vector<::NetworkIdentifierWithSubId> const& ids, ::Packet const& packet);

    MCNAPI void $onWebsocketRequest(
        ::std::string const&    serverAddress,
        ::std::string const&    payload,
        ::std::function<void()> errorCallback
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableQueueForMainThread();

    MCNAPI static void** $vftableForNetEventCallback();
    // NOLINTEND
};
