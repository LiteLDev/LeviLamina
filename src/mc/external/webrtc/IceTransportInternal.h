#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/AnyInvocable.h"
#include "mc/external/webrtc/IceGatheringState.h"
#include "mc/external/webrtc/IceMode.h"
#include "mc/external/webrtc/IceRole.h"
#include "mc/external/webrtc/IceTransportState.h"
#include "mc/external/webrtc/IceTransportStateInternal.h"
#include "mc/external/webrtc/PacketTransportInternal.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Candidate; }
namespace webrtc { class Connection; }
namespace webrtc { class DtlsStunPiggybackCallbacks; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class StunDictionaryWriter; }
namespace webrtc { struct CandidatePair; }
namespace webrtc { struct IceConfig; }
namespace webrtc { struct IceParameters; }
namespace webrtc { struct IceTransportStats; }
// clang-format on

namespace webrtc {

class IceTransportInternal : public ::webrtc::PacketTransportInternal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkae0c44;
    ::ll::UntypedStorage<8, 48> mUnkfce510;
    ::ll::UntypedStorage<8, 48> mUnk8bf01f;
    ::ll::UntypedStorage<8, 48> mUnk66de67;
    ::ll::UntypedStorage<8, 48> mUnkbb3972;
    ::ll::UntypedStorage<8, 32> mUnk73b680;
    ::ll::UntypedStorage<8, 32> mUnk3ece04;
    ::ll::UntypedStorage<8, 32> mUnk6ffc4a;
    ::ll::UntypedStorage<8, 32> mUnk46d3e7;
    ::ll::UntypedStorage<8, 32> mUnk929071;
    ::ll::UntypedStorage<8, 32> mUnk7a4201;
    ::ll::UntypedStorage<8, 80> mUnk828022;
    ::ll::UntypedStorage<8, 80> mUnke26b3e;
    ::ll::UntypedStorage<8, 80> mUnkf52641;
    ::ll::UntypedStorage<8, 80> mUnke10465;
    // NOLINTEND

public:
    // prevent constructor by default
    IceTransportInternal& operator=(IceTransportInternal const&);
    IceTransportInternal(IceTransportInternal const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IceTransportInternal() /*override*/;

    virtual ::webrtc::IceTransportStateInternal GetState() const = 0;

    virtual ::webrtc::IceTransportState GetIceTransportState() const = 0;

    virtual int component() const = 0;

    virtual ::webrtc::IceRole GetIceRole() const = 0;

    virtual void SetIceRole(::webrtc::IceRole ice_role) = 0;

    virtual void SetIceTiebreaker(uint64);

    virtual void SetIceCredentials(::std::string_view ice_ufrag, ::std::string_view ice_pwd);

    virtual void SetRemoteIceCredentials(::std::string_view ice_ufrag, ::std::string_view ice_pwd);

    virtual ::webrtc::IceParameters const* local_ice_parameters() const;

    virtual ::webrtc::IceParameters const* remote_ice_parameters() const;

    virtual void SetIceParameters(::webrtc::IceParameters const& ice_params) = 0;

    virtual void SetRemoteIceParameters(::webrtc::IceParameters const& ice_params) = 0;

    virtual void SetRemoteIceMode(::webrtc::IceMode mode) = 0;

    virtual void SetIceConfig(::webrtc::IceConfig const& config) = 0;

    virtual ::webrtc::IceConfig const& config() const;

    virtual void MaybeStartGathering() = 0;

    virtual void AddRemoteCandidate(::webrtc::Candidate const& candidate) = 0;

    virtual void RemoveRemoteCandidate(::webrtc::Candidate const& cand_to_remove) = 0;

    virtual void RemoveAllRemoteCandidates() = 0;

    virtual ::webrtc::IceGatheringState gathering_state() const = 0;

    virtual bool GetStats(::webrtc::IceTransportStats* ice_transport_stats) = 0;

    virtual ::std::optional<int> GetRttEstimate() = 0;

    virtual ::webrtc::Connection const* selected_connection() const = 0;

    virtual ::std::optional<::webrtc::CandidatePair const> GetSelectedCandidatePair() const = 0;

    virtual ::std::optional<::std::reference_wrapper<::webrtc::StunDictionaryWriter>> GetDictionaryWriter();

    virtual ::webrtc::FieldTrialsView const* field_trials() const;

    virtual void ResetDtlsStunPiggybackCallbacks();

    virtual void SetDtlsStunPiggybackCallbacks(::webrtc::DtlsStunPiggybackCallbacks&& callbacks);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddGatheringStateCallback(
        void const*                                                 removal_tag,
        ::absl::AnyInvocable<void(::webrtc::IceTransportInternal*)> callback
    );

    MCNAPI IceTransportInternal();

    MCNAPI void SendGatheringStateEvent();
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
    MCNAPI void $SetIceTiebreaker(uint64);

    MCNAPI void $SetIceCredentials(::std::string_view ice_ufrag, ::std::string_view ice_pwd);

    MCNAPI void $SetRemoteIceCredentials(::std::string_view ice_ufrag, ::std::string_view ice_pwd);

    MCNAPI ::webrtc::IceParameters const* $local_ice_parameters() const;

    MCNAPI ::webrtc::IceParameters const* $remote_ice_parameters() const;

    MCNAPI ::webrtc::IceConfig const& $config() const;

    MCNAPI ::std::optional<::std::reference_wrapper<::webrtc::StunDictionaryWriter>> $GetDictionaryWriter();

    MCNAPI ::webrtc::FieldTrialsView const* $field_trials() const;

    MCNAPI void $ResetDtlsStunPiggybackCallbacks();

    MCNAPI void $SetDtlsStunPiggybackCallbacks(::webrtc::DtlsStunPiggybackCallbacks&& callbacks);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
