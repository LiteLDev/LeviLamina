#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/CloudAllocator.h"
#include "mc/deps/raknet/PluginInterface2.h"
#include "mc/deps/raknet/PluginReceiveResult.h"
#include "mc/deps/raknet/data_structures/List.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class CloudClientCallback; }
namespace RakNet { struct CloudKey; }
namespace RakNet { struct CloudQuery; }
namespace RakNet { struct CloudQueryResult; }
namespace RakNet { struct CloudQueryRow; }
namespace RakNet { struct Packet; }
namespace RakNet { struct RakNetGUID; }
// clang-format on

namespace RakNet {

class CloudClient : public ::RakNet::PluginInterface2 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::RakNet::CloudClientCallback*> callback;
    ::ll::TypedStorage<8, 8, ::RakNet::CloudAllocator*>      allocator;
    ::ll::TypedStorage<1, 8, ::RakNet::CloudAllocator>       unsetDefaultAllocator;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CloudClient() /*override*/ = default;

    // vIndex: 17
    virtual void SetDefaultCallbacks(::RakNet::CloudAllocator*, ::RakNet::CloudClientCallback*);

    // vIndex: 18
    virtual void Post(::RakNet::CloudKey*, uchar const*, uint, ::RakNet::RakNetGUID);

    // vIndex: 19
    virtual void Release(::DataStructures::List<::RakNet::CloudKey>&, ::RakNet::RakNetGUID);

    // vIndex: 22
    virtual bool Get(::RakNet::CloudQuery*, ::RakNet::RakNetGUID);

    // vIndex: 21
    virtual bool Get(::RakNet::CloudQuery*, ::DataStructures::List<::RakNet::RakNetGUID>&, ::RakNet::RakNetGUID);

    // vIndex: 20
    virtual bool Get(::RakNet::CloudQuery*, ::DataStructures::List<::RakNet::CloudQueryRow*>&, ::RakNet::RakNetGUID);

    // vIndex: 25
    virtual void Unsubscribe(::DataStructures::List<::RakNet::CloudKey>&, ::RakNet::RakNetGUID);

    // vIndex: 24
    virtual void Unsubscribe(
        ::DataStructures::List<::RakNet::CloudKey>&,
        ::DataStructures::List<::RakNet::RakNetGUID>&,
        ::RakNet::RakNetGUID
    );

    // vIndex: 23
    virtual void Unsubscribe(
        ::DataStructures::List<::RakNet::CloudKey>&,
        ::DataStructures::List<::RakNet::CloudQueryRow*>&,
        ::RakNet::RakNetGUID
    );

    // vIndex: 27
    virtual void OnGetReponse(::RakNet::Packet*, ::RakNet::CloudClientCallback*, ::RakNet::CloudAllocator*);

    // vIndex: 26
    virtual void OnGetReponse(::RakNet::CloudQueryResult*, ::RakNet::Packet*, ::RakNet::CloudAllocator*);

    // vIndex: 29
    virtual void
    OnSubscriptionNotification(::RakNet::Packet*, ::RakNet::CloudClientCallback*, ::RakNet::CloudAllocator*);

    // vIndex: 28
    virtual void
    OnSubscriptionNotification(bool*, ::RakNet::CloudQueryRow*, ::RakNet::Packet*, ::RakNet::CloudAllocator*);

    // vIndex: 31
    virtual void DeallocateWithDefaultAllocator(::RakNet::CloudQueryResult*);

    // vIndex: 30
    virtual void DeallocateWithDefaultAllocator(::RakNet::CloudQueryRow*);

    // vIndex: 4
    virtual ::RakNet::PluginReceiveResult OnReceive(::RakNet::Packet*) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
