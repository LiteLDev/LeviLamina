#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RTCReceivedRtpStreamStats.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Attribute; }
namespace webrtc { class RTCStats; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

class RTCInboundRtpStreamStats : public ::webrtc::RTCReceivedRtpStreamStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk2befa5;
    ::ll::UntypedStorage<8, 40> mUnk354fed;
    ::ll::UntypedStorage<8, 40> mUnka9d361;
    ::ll::UntypedStorage<8, 40> mUnk6a77df;
    ::ll::UntypedStorage<4, 8> mUnk156574;
    ::ll::UntypedStorage<8, 16> mUnk269eb7;
    ::ll::UntypedStorage<8, 16> mUnkbeb100;
    ::ll::UntypedStorage<8, 16> mUnk32678c;
    ::ll::UntypedStorage<8, 16> mUnk4dcf5e;
    ::ll::UntypedStorage<4, 8> mUnk4d906c;
    ::ll::UntypedStorage<8, 16> mUnkc7fac8;
    ::ll::UntypedStorage<8, 16> mUnka77907;
    ::ll::UntypedStorage<8, 16> mUnk47c63b;
    ::ll::UntypedStorage<8, 16> mUnka73145;
    ::ll::UntypedStorage<4, 8> mUnk9d1798;
    ::ll::UntypedStorage<8, 16> mUnkf4bf57;
    ::ll::UntypedStorage<8, 16> mUnk2df47e;
    ::ll::UntypedStorage<8, 16> mUnka5f983;
    ::ll::UntypedStorage<8, 16> mUnk8cb1a9;
    ::ll::UntypedStorage<8, 16> mUnk20f2eb;
    ::ll::UntypedStorage<8, 16> mUnkd00d99;
    ::ll::UntypedStorage<8, 16> mUnk2e4865;
    ::ll::UntypedStorage<8, 16> mUnkb522ce;
    ::ll::UntypedStorage<8, 16> mUnk1814c8;
    ::ll::UntypedStorage<8, 16> mUnkdb62ea;
    ::ll::UntypedStorage<8, 16> mUnkc16e07;
    ::ll::UntypedStorage<8, 16> mUnk77dd73;
    ::ll::UntypedStorage<8, 16> mUnk915025;
    ::ll::UntypedStorage<8, 16> mUnk5a945d;
    ::ll::UntypedStorage<4, 8> mUnkedecb8;
    ::ll::UntypedStorage<4, 8> mUnka7dee8;
    ::ll::UntypedStorage<4, 8> mUnk60d130;
    ::ll::UntypedStorage<8, 16> mUnkae5b6e;
    ::ll::UntypedStorage<4, 8> mUnk4ab8fe;
    ::ll::UntypedStorage<4, 8> mUnkd0246f;
    ::ll::UntypedStorage<4, 8> mUnk2aca95;
    ::ll::UntypedStorage<8, 16> mUnk75b45f;
    ::ll::UntypedStorage<8, 16> mUnk190fbd;
    ::ll::UntypedStorage<8, 16> mUnkf36a1c;
    ::ll::UntypedStorage<4, 8> mUnk78465b;
    ::ll::UntypedStorage<8, 16> mUnk750121;
    ::ll::UntypedStorage<8, 16> mUnk4048de;
    ::ll::UntypedStorage<4, 8> mUnk36bd25;
    ::ll::UntypedStorage<8, 16> mUnk7bc385;
    ::ll::UntypedStorage<4, 8> mUnk63dfa2;
    ::ll::UntypedStorage<8, 16> mUnka97835;
    ::ll::UntypedStorage<8, 40> mUnka17712;
    ::ll::UntypedStorage<8, 16> mUnkf29380;
    ::ll::UntypedStorage<8, 40> mUnkb30125;
    ::ll::UntypedStorage<4, 8> mUnk13d423;
    ::ll::UntypedStorage<4, 8> mUnk3bd508;
    ::ll::UntypedStorage<4, 8> mUnkf2b331;
    ::ll::UntypedStorage<8, 16> mUnk540110;
    ::ll::UntypedStorage<8, 40> mUnkf4bb77;
    ::ll::UntypedStorage<1, 2> mUnke99d26;
    ::ll::UntypedStorage<8, 16> mUnkeff2a8;
    ::ll::UntypedStorage<8, 16> mUnkffbfc7;
    ::ll::UntypedStorage<8, 16> mUnkbf7ad7;
    ::ll::UntypedStorage<4, 8> mUnk19c438;
    ::ll::UntypedStorage<8, 16> mUnkb7fd21;
    ::ll::UntypedStorage<8, 16> mUnk540832;
    // NOLINTEND

public:
    // prevent constructor by default
    RTCInboundRtpStreamStats& operator=(RTCInboundRtpStreamStats const&);
    RTCInboundRtpStreamStats();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual ::std::vector<::webrtc::Attribute> AttributesImpl(uint64 additional_capacity) const /*override*/;

    // vIndex: 1
    virtual ::std::unique_ptr<::webrtc::RTCStats> copy() const /*override*/;

    // vIndex: 2
    virtual char const* type() const /*override*/;

    // vIndex: 0
    virtual ~RTCInboundRtpStreamStats() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RTCInboundRtpStreamStats(::webrtc::RTCInboundRtpStreamStats const&);

    MCNAPI RTCInboundRtpStreamStats(::std::string id, ::webrtc::Timestamp timestamp);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> kType();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::RTCInboundRtpStreamStats const&);

    MCNAPI void* $ctor(::std::string id, ::webrtc::Timestamp timestamp);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::vector<::webrtc::Attribute> $AttributesImpl(uint64 additional_capacity) const;

    MCNAPI ::std::unique_ptr<::webrtc::RTCStats> $copy() const;

    MCNAPI char const* $type() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
