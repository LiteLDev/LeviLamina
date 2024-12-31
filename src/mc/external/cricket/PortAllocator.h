#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/sigslot/has_slots.h"
#include "mc/external/webrtc/PortPrunePolicy.h"
#include "mc/external/webrtc/VpnPreference.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
namespace cricket { class CandidateStats; }
namespace cricket { class PortAllocatorSession; }
namespace cricket { struct IceParameters; }
namespace cricket { struct RelayServerConfig; }
namespace rtc { class NetworkMask; }
namespace rtc { class SocketAddress; }
namespace sigslot { class single_threaded; }
namespace webrtc { class TurnCustomizer; }
// clang-format on

namespace cricket {

class PortAllocator : public ::sigslot::has_slots<::sigslot::single_threaded> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkfed399;
    ::ll::UntypedStorage<1, 1>  mUnkca8bb8;
    ::ll::UntypedStorage<4, 4>  mUnkf17e60;
    ::ll::UntypedStorage<4, 4>  mUnka2f873;
    ::ll::UntypedStorage<4, 4>  mUnk870ea4;
    ::ll::UntypedStorage<4, 4>  mUnkfbbe4a;
    ::ll::UntypedStorage<4, 4>  mUnk8e7c9c;
    ::ll::UntypedStorage<1, 1>  mUnk190a86;
    ::ll::UntypedStorage<4, 4>  mUnk4f51fc;
    ::ll::UntypedStorage<8, 32> mUnk505686;
    ::ll::UntypedStorage<1, 1>  mUnkd13226;
    ::ll::UntypedStorage<4, 4>  mUnkc94d35;
    ::ll::UntypedStorage<8, 16> mUnk94c684;
    ::ll::UntypedStorage<8, 24> mUnke2a5a8;
    ::ll::UntypedStorage<8, 24> mUnk504b40;
    ::ll::UntypedStorage<4, 4>  mUnk468809;
    ::ll::UntypedStorage<8, 24> mUnk2d974e;
    ::ll::UntypedStorage<4, 4>  mUnkedf6f9;
    ::ll::UntypedStorage<8, 8>  mUnk56a4b5;
    ::ll::UntypedStorage<4, 8>  mUnk8219ff;
    ::ll::UntypedStorage<1, 1>  mUnk76954f;
    ::ll::UntypedStorage<8, 8>  mUnk1a5901;
    // NOLINTEND

public:
    // prevent constructor by default
    PortAllocator& operator=(PortAllocator const&);
    PortAllocator(PortAllocator const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PortAllocator() /*override*/ = default;

    // vIndex: 1
    virtual void Initialize();

    // vIndex: 2
    virtual void set_restrict_ice_credentials_change(bool);

    // vIndex: 3
    virtual void SetNetworkIgnoreMask(int) = 0;

    // vIndex: 4
    virtual void SetVpnPreference(::webrtc::VpnPreference);

    // vIndex: 5
    virtual void SetVpnList(::std::vector<::rtc::NetworkMask> const&);

    // vIndex: 6
    virtual void GetCandidateStatsFromPooledSessions(::std::vector<::cricket::CandidateStats>*);

    // vIndex: 7
    virtual ::cricket::PortAllocatorSession*
    CreateSessionInternal(::std::string_view, int, ::std::string_view, ::std::string_view) = 0;

    // vIndex: 8
    virtual bool MdnsObfuscationEnabled() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::cricket::PortAllocatorSession>
    CreateSession(::std::string_view, int, ::std::string_view, ::std::string_view);

    MCAPI void DiscardCandidatePool();

    MCAPI ::std::_Vector_const_iterator<
        ::std::_Vector_val<::std::_Simple_types<::std::unique_ptr<::cricket::PortAllocatorSession>>>>
    FindPooledSession(::cricket::IceParameters const*) const;

    MCAPI ::std::vector<::cricket::IceParameters> GetPooledIceCredentials();

    MCAPI PortAllocator();

    MCAPI ::cricket::Candidate SanitizeCandidate(::cricket::Candidate const&) const;

    MCAPI void SetCandidateFilter(uint);

    MCAPI bool
    SetConfiguration(::std::set<::rtc::SocketAddress> const&, ::std::vector<::cricket::RelayServerConfig> const&, ::std::vector<::std::pair<::rtc::SocketAddress, ::rtc::SocketAddress>> const&, int, ::webrtc::PortPrunePolicy, ::webrtc::TurnCustomizer*, ::std::optional<int> const&);

    MCAPI ::std::unique_ptr<::cricket::PortAllocatorSession>
    TakePooledSession(::std::string_view, int, ::std::string_view, ::std::string_view);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
