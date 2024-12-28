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
    MCAPI Candidate();

    MCAPI Candidate(::cricket::Candidate const&);

    MCAPI Candidate(
        int,
        ::std::string_view,
        ::rtc::SocketAddress const&,
        uint,
        ::std::string_view,
        ::std::string_view,
        ::webrtc::IceCandidateType,
        uint,
        ::std::string_view,
        ushort,
        ushort
    );

    MCAPI void ComputeFoundation(::rtc::SocketAddress const&, uint64);

    MCAPI void ComputePrflxFoundation();

    MCAPI uint GetPriority(uint, int, int, bool) const;

    MCAPI bool IsEquivalent(::cricket::Candidate const&) const;

    MCAPI bool MatchesForRemoval(::cricket::Candidate const&) const;

    MCAPI ::cricket::Candidate ToSanitizedCopy(bool, bool) const;

    MCAPI ::std::string ToStringInternal(bool) const;

    MCAPI void generate_id();

    MCAPI bool is_local() const;

    MCAPI bool is_prflx() const;

    MCAPI bool is_relay() const;

    MCAPI bool is_stun() const;

    MCAPI bool operator!=(::cricket::Candidate const&) const;

    MCAPI ::cricket::Candidate& operator=(::cricket::Candidate const&);

    MCAPI bool operator==(::cricket::Candidate const&) const;

    MCAPI void set_password(::std::string_view);

    MCAPI void set_username(::std::string_view);

    MCAPI ::std::string_view type_name() const;

    MCAPI ~Candidate();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void Assign(::std::string&, ::std::string_view);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::cricket::Candidate const&);

    MCAPI void* $ctor(
        int,
        ::std::string_view,
        ::rtc::SocketAddress const&,
        uint,
        ::std::string_view,
        ::std::string_view,
        ::webrtc::IceCandidateType,
        uint,
        ::std::string_view,
        ushort,
        ushort
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
