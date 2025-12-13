#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/IceGatheringState.h"
#include "mc/external/cricket/IceMode.h"
#include "mc/external/cricket/IceRole.h"
#include "mc/external/cricket/IceTransportState.h"
#include "mc/external/rtc/PacketTransportInternal.h"
#include "mc/external/webrtc/IceTransportState.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
namespace cricket { class Connection; }
namespace cricket { class StunDictionaryWriter; }
namespace cricket { struct CandidatePair; }
namespace cricket { struct IceConfig; }
namespace cricket { struct IceParameters; }
namespace cricket { struct IceTransportStats; }
// clang-format on

namespace cricket {

class IceTransportInternal : public ::rtc::PacketTransportInternal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkbf17b8;
    ::ll::UntypedStorage<8, 48> mUnke711bb;
    ::ll::UntypedStorage<8, 48> mUnkf64fc1;
    ::ll::UntypedStorage<8, 48> mUnk80b1a8;
    ::ll::UntypedStorage<8, 48> mUnk29372f;
    ::ll::UntypedStorage<8, 48> mUnkcf8e73;
    ::ll::UntypedStorage<8, 48> mUnkbab572;
    ::ll::UntypedStorage<8, 32> mUnk76097d;
    ::ll::UntypedStorage<8, 32> mUnk2f5418;
    ::ll::UntypedStorage<8, 32> mUnk25fade;
    ::ll::UntypedStorage<8, 32> mUnk541ea4;
    ::ll::UntypedStorage<8, 32> mUnk6ad035;
    ::ll::UntypedStorage<8, 32> mUnk91aa34;
    // NOLINTEND

public:
    // prevent constructor by default
    IceTransportInternal& operator=(IceTransportInternal const&);
    IceTransportInternal(IceTransportInternal const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IceTransportInternal() /*override*/;

    // vIndex: 9
    virtual ::cricket::IceTransportState GetState() const = 0;

    // vIndex: 10
    virtual ::webrtc::IceTransportState GetIceTransportState() const = 0;

    // vIndex: 11
    virtual int component() const = 0;

    // vIndex: 12
    virtual ::cricket::IceRole GetIceRole() const = 0;

    // vIndex: 13
    virtual void SetIceRole(::cricket::IceRole) = 0;

    // vIndex: 14
    virtual void SetIceTiebreaker(uint64) = 0;

    // vIndex: 15
    virtual void SetIceCredentials(::std::string_view ice_ufrag, ::std::string_view ice_pwd);

    // vIndex: 16
    virtual void SetRemoteIceCredentials(::std::string_view ice_ufrag, ::std::string_view ice_pwd);

    // vIndex: 17
    virtual void SetIceParameters(::cricket::IceParameters const&) = 0;

    // vIndex: 18
    virtual void SetRemoteIceParameters(::cricket::IceParameters const&) = 0;

    // vIndex: 19
    virtual void SetRemoteIceMode(::cricket::IceMode) = 0;

    // vIndex: 20
    virtual void SetIceConfig(::cricket::IceConfig const& config) = 0;

    // vIndex: 21
    virtual void MaybeStartGathering() = 0;

    // vIndex: 22
    virtual void AddRemoteCandidate(::cricket::Candidate const&) = 0;

    // vIndex: 23
    virtual void RemoveRemoteCandidate(::cricket::Candidate const&) = 0;

    // vIndex: 24
    virtual void RemoveAllRemoteCandidates() = 0;

    // vIndex: 25
    virtual ::cricket::IceGatheringState gathering_state() const = 0;

    // vIndex: 26
    virtual bool GetStats(::cricket::IceTransportStats*) = 0;

    // vIndex: 27
    virtual ::std::optional<int> GetRttEstimate() = 0;

    // vIndex: 28
    virtual ::cricket::Connection const* selected_connection() const = 0;

    // vIndex: 29
    virtual ::std::optional<::cricket::CandidatePair const> GetSelectedCandidatePair() const = 0;

    // vIndex: 30
    virtual ::std::optional<::std::reference_wrapper<::cricket::StunDictionaryWriter>> GetDictionaryWriter();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI IceTransportInternal();

    MCNAPI void SendGatheringStateEvent();

    MCNAPI void SignalGatheringStateFired(::cricket::IceTransportInternal* transport);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $SetIceCredentials(::std::string_view ice_ufrag, ::std::string_view ice_pwd);

    MCNAPI void $SetRemoteIceCredentials(::std::string_view ice_ufrag, ::std::string_view ice_pwd);

    MCNAPI ::std::optional<::std::reference_wrapper<::cricket::StunDictionaryWriter>> $GetDictionaryWriter();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
