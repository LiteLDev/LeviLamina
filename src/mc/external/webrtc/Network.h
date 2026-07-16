#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/AdapterType.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class IPAddress; }
namespace webrtc { class InterfaceAddress; }
namespace webrtc { class MdnsResponderInterface; }
// clang-format on

namespace webrtc {

class Network {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk3f3f71;
    ::ll::UntypedStorage<8, 48> mUnk4b33d5;
    ::ll::UntypedStorage<8, 8>  mUnk824936;
    ::ll::UntypedStorage<8, 8>  mUnkaade45;
    ::ll::UntypedStorage<8, 32> mUnked953d;
    ::ll::UntypedStorage<8, 32> mUnk8e224f;
    ::ll::UntypedStorage<8, 32> mUnkc1698e;
    ::ll::UntypedStorage<4, 4>  mUnk887392;
    ::ll::UntypedStorage<8, 32> mUnke125b2;
    ::ll::UntypedStorage<8, 24> mUnk954f6b;
    ::ll::UntypedStorage<4, 4>  mUnkbfcbbc;
    ::ll::UntypedStorage<1, 1>  mUnkbc3e93;
    ::ll::UntypedStorage<4, 4>  mUnk397059;
    ::ll::UntypedStorage<4, 4>  mUnk7e18ad;
    ::ll::UntypedStorage<4, 4>  mUnka09d53;
    ::ll::UntypedStorage<1, 1>  mUnkc70243;
    ::ll::UntypedStorage<2, 2>  mUnk8734dd;
    ::ll::UntypedStorage<4, 4>  mUnkd310d2;
    // NOLINTEND

public:
    // prevent constructor by default
    Network& operator=(Network const&);
    Network(Network const&);
    Network();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::IPAddress GetBestIP() const;

    MCNAPI ushort GetCost(::webrtc::FieldTrialsView const& field_trials) const;

    MCNAPI ::webrtc::MdnsResponderInterface* GetMdnsResponder() const;

    MCNAPI bool SetIPs(::std::vector<::webrtc::InterfaceAddress> const& ips, bool changed);

    MCNAPI ::std::string ToString() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::pair<::webrtc::AdapterType, bool> GuessAdapterFromNetworkCost(int network_cost);
    // NOLINTEND
};

} // namespace webrtc
