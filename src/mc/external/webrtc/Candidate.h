#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/IceCandidateType.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class SocketAddress; }
// clang-format on

namespace webrtc {

class Candidate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk649851;
    ::ll::UntypedStorage<4, 4>  mUnkd4fbfc;
    ::ll::UntypedStorage<8, 32> mUnk4bd855;
    ::ll::UntypedStorage<8, 32> mUnkf2d428;
    ::ll::UntypedStorage<8, 80> mUnkdd6b1a;
    ::ll::UntypedStorage<4, 4>  mUnkced845;
    ::ll::UntypedStorage<8, 32> mUnkdca21e;
    ::ll::UntypedStorage<8, 32> mUnka229dc;
    ::ll::UntypedStorage<4, 4>  mUnk36ceaa;
    ::ll::UntypedStorage<8, 32> mUnk5983fb;
    ::ll::UntypedStorage<4, 4>  mUnk6b0365;
    ::ll::UntypedStorage<4, 4>  mUnk8c11db;
    ::ll::UntypedStorage<4, 4>  mUnk3cefe8;
    ::ll::UntypedStorage<8, 32> mUnk31febf;
    ::ll::UntypedStorage<8, 80> mUnk123fd7;
    ::ll::UntypedStorage<8, 32> mUnka98173;
    ::ll::UntypedStorage<8, 32> mUnkb0c3e4;
    ::ll::UntypedStorage<2, 2>  mUnk21d706;
    ::ll::UntypedStorage<2, 2>  mUnk578d3d;
    ::ll::UntypedStorage<8, 32> mUnkf5f76e;
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
