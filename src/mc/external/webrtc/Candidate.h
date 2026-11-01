#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/AdapterType.h"
#include "mc/external/webrtc/IceCandidateType.h"
#include "mc/external/webrtc/SocketAddress.h"

namespace webrtc {

class Candidate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>             id_;
    ::ll::TypedStorage<4, 4, int>                        component_;
    ::ll::TypedStorage<8, 32, ::std::string>             protocol_;
    ::ll::TypedStorage<8, 32, ::std::string>             relay_protocol_;
    ::ll::TypedStorage<8, 80, ::webrtc::SocketAddress>   address_;
    ::ll::TypedStorage<4, 4, uint>                       priority_;
    ::ll::TypedStorage<8, 32, ::std::string>             username_;
    ::ll::TypedStorage<8, 32, ::std::string>             password_;
    ::ll::TypedStorage<4, 4, ::webrtc::IceCandidateType> type_;
    ::ll::TypedStorage<8, 32, ::std::string>             network_name_;
    ::ll::TypedStorage<4, 4, ::webrtc::AdapterType>      network_type_;
    ::ll::TypedStorage<4, 4, ::webrtc::AdapterType>      underlying_type_for_vpn_;
    ::ll::TypedStorage<4, 4, uint>                       generation_;
    ::ll::TypedStorage<8, 32, ::std::string>             foundation_;
    ::ll::TypedStorage<8, 80, ::webrtc::SocketAddress>   related_address_;
    ::ll::TypedStorage<8, 32, ::std::string>             tcptype_;
    ::ll::TypedStorage<8, 32, ::std::string>             transport_name_;
    ::ll::TypedStorage<2, 2, ushort>                     network_id_;
    ::ll::TypedStorage<2, 2, ushort>                     network_cost_;
    ::ll::TypedStorage<8, 32, ::std::string>             url_;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Candidate();

    MCNAPI Candidate(::webrtc::Candidate const&);

    MCNAPI Candidate(
        int                            component,
        ::std::string_view             protocol,
        ::webrtc::SocketAddress const& address,
        uint                           priority,
        ::std::string_view             username,
        ::std::string_view             password,
        ::webrtc::IceCandidateType     type,
        uint                           generation,
        ::std::string_view             foundation,
        ushort                         network_id,
        ushort                         network_cost
    );

    MCNAPI void ComputeFoundation(::webrtc::SocketAddress const& base_address, uint64 tie_breaker);

    MCNAPI void ComputePrflxFoundation();

    MCNAPI uint GetPriority(
        uint type_preference,
        int  network_adapter_preference,
        int  relay_preference,
        bool adjust_local_preference
    ) const;

    MCNAPI bool IsEquivalent(::webrtc::Candidate const& c) const;

    MCNAPI bool MatchesForRemoval(::webrtc::Candidate const& c) const;

    MCNAPI ::webrtc::Candidate
    ToSanitizedCopy(bool use_hostname_address, bool filter_related_address, bool filter_ufrag) const;

    MCNAPI ::std::string ToStringInternal(bool sensitive) const;

    MCNAPI void generate_id();

    MCNAPI bool is_local() const;

    MCNAPI bool is_prflx() const;

    MCNAPI bool is_relay() const;

    MCNAPI bool is_stun() const;

    MCNAPI bool operator!=(::webrtc::Candidate const& o) const;

    MCNAPI ::webrtc::Candidate& operator=(::webrtc::Candidate const&);

    MCNAPI bool operator==(::webrtc::Candidate const& o) const;

    MCNAPI ::std::string_view type_name() const;

    MCNAPI ~Candidate();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void Assign(::std::string& s, ::std::string_view view);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::webrtc::Candidate const&);

    MCNAPI void* $ctor(
        int                            component,
        ::std::string_view             protocol,
        ::webrtc::SocketAddress const& address,
        uint                           priority,
        ::std::string_view             username,
        ::std::string_view             password,
        ::webrtc::IceCandidateType     type,
        uint                           generation,
        ::std::string_view             foundation,
        ushort                         network_id,
        ushort                         network_cost
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
