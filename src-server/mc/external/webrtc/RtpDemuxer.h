#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/flat_tree.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtpDemuxerCriteria; }
namespace webrtc { class RtpPacketReceived; }
namespace webrtc { class RtpPacketSinkInterface; }
namespace webrtc { struct identity; }
// clang-format on

namespace webrtc {

class RtpDemuxer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkfa666c;
    ::ll::UntypedStorage<8, 32> mUnkaf8c84;
    ::ll::UntypedStorage<8, 16> mUnk34f5dc;
    ::ll::UntypedStorage<8, 32> mUnk2aa2bb;
    ::ll::UntypedStorage<8, 32> mUnk9085bf;
    ::ll::UntypedStorage<8, 32> mUnkb41d16;
    ::ll::UntypedStorage<8, 32> mUnk83d0bc;
    ::ll::UntypedStorage<8, 32> mUnkbc77f9;
    ::ll::UntypedStorage<1, 1> mUnk728521;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpDemuxer& operator=(RtpDemuxer const&);
    RtpDemuxer(RtpDemuxer const&);
    RtpDemuxer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool AddSink(::webrtc::RtpDemuxerCriteria const& criteria, ::webrtc::RtpPacketSinkInterface* sink);

    MCNAPI void AddSsrcSinkBinding(uint ssrc, ::webrtc::RtpPacketSinkInterface* sink);

    MCNAPI bool CriteriaWouldConflict(::webrtc::RtpDemuxerCriteria const& criteria) const;

    MCNAPI ::webrtc::flat_containers_internal::flat_tree<uint, ::webrtc::identity, ::std::less<void>, ::std::vector<uint>> GetSsrcsForSink(::webrtc::RtpPacketSinkInterface const* sink) const;

    MCNAPI bool OnRtpPacket(::webrtc::RtpPacketReceived const& packet);

    MCNAPI void RefreshKnownMids();

    MCNAPI bool RemoveSink(::webrtc::RtpPacketSinkInterface const* sink);

    MCNAPI ::webrtc::RtpPacketSinkInterface* ResolveSink(::webrtc::RtpPacketReceived const& packet);

    MCNAPI ::webrtc::RtpPacketSinkInterface* ResolveSinkByMid(::std::string_view mid, uint ssrc);

    MCNAPI ::webrtc::RtpPacketSinkInterface* ResolveSinkByMidRsid(::std::string_view mid, ::std::string_view rsid, uint ssrc);

    MCNAPI ::webrtc::RtpPacketSinkInterface* ResolveSinkByPayloadType(uchar payload_type, uint ssrc);

    MCNAPI ::webrtc::RtpPacketSinkInterface* ResolveSinkByRsid(::std::string_view rsid, uint ssrc);

    MCNAPI explicit RtpDemuxer(bool use_mid);

    MCNAPI ~RtpDemuxer();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::string DescribePacket(::webrtc::RtpPacketReceived const& packet);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool use_mid);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
