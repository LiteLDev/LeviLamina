#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/PluginInterface2.h"
#include "mc/deps/raknet/PluginReceiveResult.h"
#include "mc/deps/raknet/data_structures/List.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class CloudAllocator; }
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
    ::ll::UntypedStorage<8, 8> mUnkdae1cb;
    ::ll::UntypedStorage<8, 8> mUnkf7e494;
    ::ll::UntypedStorage<1, 8> mUnkbd0590;
    // NOLINTEND

public:
    // prevent constructor by default
    CloudClient& operator=(CloudClient const&);
    CloudClient(CloudClient const&);
    CloudClient();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CloudClient() /*override*/ = default;

    virtual void SetDefaultCallbacks(::RakNet::CloudAllocator*, ::RakNet::CloudClientCallback*);

    virtual void Post(::RakNet::CloudKey*, uchar const*, uint, ::RakNet::RakNetGUID);

    virtual void Release(::DataStructures::List<::RakNet::CloudKey>&, ::RakNet::RakNetGUID);

    virtual bool Get(::RakNet::CloudQuery*, ::RakNet::RakNetGUID);

    virtual bool Get(::RakNet::CloudQuery*, ::DataStructures::List<::RakNet::RakNetGUID>&, ::RakNet::RakNetGUID);

    virtual bool Get(::RakNet::CloudQuery*, ::DataStructures::List<::RakNet::CloudQueryRow*>&, ::RakNet::RakNetGUID);

    virtual void Unsubscribe(::DataStructures::List<::RakNet::CloudKey>&, ::RakNet::RakNetGUID);

    virtual void Unsubscribe(
        ::DataStructures::List<::RakNet::CloudKey>&,
        ::DataStructures::List<::RakNet::RakNetGUID>&,
        ::RakNet::RakNetGUID
    );

    virtual void Unsubscribe(
        ::DataStructures::List<::RakNet::CloudKey>&,
        ::DataStructures::List<::RakNet::CloudQueryRow*>&,
        ::RakNet::RakNetGUID
    );

    virtual void OnGetReponse(::RakNet::Packet*, ::RakNet::CloudClientCallback*, ::RakNet::CloudAllocator*);

    virtual void OnGetReponse(::RakNet::CloudQueryResult*, ::RakNet::Packet*, ::RakNet::CloudAllocator*);

    virtual void
    OnSubscriptionNotification(::RakNet::Packet*, ::RakNet::CloudClientCallback*, ::RakNet::CloudAllocator*);

    virtual void
    OnSubscriptionNotification(bool*, ::RakNet::CloudQueryRow*, ::RakNet::Packet*, ::RakNet::CloudAllocator*);

    virtual void DeallocateWithDefaultAllocator(::RakNet::CloudQueryResult*);

    virtual void DeallocateWithDefaultAllocator(::RakNet::CloudQueryRow*);

    virtual ::RakNet::PluginReceiveResult OnReceive(::RakNet::Packet*) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
