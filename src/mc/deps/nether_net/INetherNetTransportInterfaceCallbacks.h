#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/nether_net/ESessionError.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace NetherNet { struct NetworkID; }
// clang-format on

namespace NetherNet {

class INetherNetTransportInterfaceCallbacks {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~INetherNetTransportInterfaceCallbacks() = default;

    virtual void OnSessionGetConnectionFlags(::NetherNet::NetworkID, uint*) = 0;

    virtual ::Bedrock::Threading::Async<bool> OnSessionRequested(
        ::NetherNet::NetworkID networkID,
        uint64                 sessionId,
        ::std::string_view     assertion,
        ::std::string_view     fingerprintJson,
        bool                   isLan
    ) = 0;

#ifdef LL_PLAT_S
    virtual ::Bedrock::Threading::Async<bool>
    OnSessionResponse(::NetherNet::NetworkID, uint64, ::std::string_view, ::std::string_view, bool);
#else // LL_PLAT_C
    virtual ::Bedrock::Threading::Async<bool> OnSessionResponse(
        ::NetherNet::NetworkID networkID,
        uint64                 sessionId,
        ::std::string_view     assertion,
        ::std::string_view     fingerprintJson,
        bool                   isLan
    );
#endif

    virtual void OnSessionOpen(::NetherNet::NetworkID networkID, uint64 sessionId, bool isLan) = 0;

    virtual void OnSessionClose(
        ::NetherNet::NetworkID     networkID,
        uint64                     sessionId,
        ::NetherNet::ESessionError sessionError,
        ::Json::Value              summary
    ) = 0;

    virtual void OnSpopViolation() = 0;

    virtual void
    OnBroadcastResponseReceived(::NetherNet::NetworkID networkID, void const* pApplicationData, int size) = 0;

    virtual bool OnBroadcastDiscoveryRequestReceivedGetResponse(void* pApplicationData, int* pSize) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI ::Bedrock::Threading::Async<bool>
    $OnSessionResponse(::NetherNet::NetworkID, uint64, ::std::string_view, ::std::string_view, bool);
#else // LL_PLAT_C
    MCNAPI ::Bedrock::Threading::Async<bool> $OnSessionResponse(
        ::NetherNet::NetworkID networkID,
        uint64                 sessionId,
        ::std::string_view     assertion,
        ::std::string_view     fingerprintJson,
        bool                   isLan
    );
#endif


    // NOLINTEND
};

} // namespace NetherNet
