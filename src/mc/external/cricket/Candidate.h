#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/IceCandidateType.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class SocketAddress; }
// clang-format on

namespace cricket {

class Candidate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd3f8fe;
    ::ll::UntypedStorage<4, 4>  mUnkf10b9c;
    ::ll::UntypedStorage<8, 32> mUnkfc97b1;
    ::ll::UntypedStorage<8, 32> mUnk566df7;
    ::ll::UntypedStorage<8, 80> mUnkd7fc44;
    ::ll::UntypedStorage<4, 4>  mUnkc1520e;
    ::ll::UntypedStorage<8, 32> mUnkc171e8;
    ::ll::UntypedStorage<8, 32> mUnk4070ed;
    ::ll::UntypedStorage<4, 4>  mUnk50e396;
    ::ll::UntypedStorage<8, 32> mUnk7adf25;
    ::ll::UntypedStorage<4, 4>  mUnk35170f;
    ::ll::UntypedStorage<4, 4>  mUnk630978;
    ::ll::UntypedStorage<4, 4>  mUnk235b48;
    ::ll::UntypedStorage<8, 32> mUnk6bc578;
    ::ll::UntypedStorage<8, 80> mUnk5da8f6;
    ::ll::UntypedStorage<8, 32> mUnkec224f;
    ::ll::UntypedStorage<8, 32> mUnk5445ab;
    ::ll::UntypedStorage<2, 2>  mUnke44a8d;
    ::ll::UntypedStorage<2, 2>  mUnk2c6d0a;
    ::ll::UntypedStorage<8, 32> mUnke10b0a;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Candidate();

    MCNAPI Candidate(::cricket::Candidate const&);

    MCNAPI Candidate(
        int                         component,
        ::std::string_view          protocol,
        ::rtc::SocketAddress const& address,
        uint                        priority,
        ::std::string_view          username,
        ::std::string_view          password,
        ::webrtc::IceCandidateType  type,
        uint                        generation,
        ::std::string_view          foundation,
        ushort                      network_id,
        ushort                      network_cost
    );

    MCNAPI void ComputeFoundation(::rtc::SocketAddress const& base_address, uint64 tie_breaker);

    MCNAPI void ComputePrflxFoundation();

    MCNAPI uint GetPriority(
        uint type_preference,
        int  network_adapter_preference,
        int  relay_preference,
        bool adjust_local_preference
    ) const;

    MCNAPI bool IsEquivalent(::cricket::Candidate const& c) const;

    MCNAPI bool MatchesForRemoval(::cricket::Candidate const& c) const;

    MCNAPI ::cricket::Candidate ToSanitizedCopy(bool use_hostname_address, bool filter_related_address) const;

    MCNAPI ::std::string ToStringInternal(bool sensitive) const;

    MCNAPI void generate_id();

    MCNAPI bool is_local() const;

    MCNAPI bool is_prflx() const;

    MCNAPI bool is_relay() const;

    MCNAPI bool is_stun() const;

    MCNAPI bool operator!=(::cricket::Candidate const& o) const;

    MCNAPI ::cricket::Candidate& operator=(::cricket::Candidate const&);

    MCNAPI bool operator==(::cricket::Candidate const& o) const;

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

    MCNAPI void* $ctor(::cricket::Candidate const&);

    MCNAPI void* $ctor(
        int                         component,
        ::std::string_view          protocol,
        ::rtc::SocketAddress const& address,
        uint                        priority,
        ::std::string_view          username,
        ::std::string_view          password,
        ::webrtc::IceCandidateType  type,
        uint                        generation,
        ::std::string_view          foundation,
        ushort                      network_id,
        ushort                      network_cost
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
