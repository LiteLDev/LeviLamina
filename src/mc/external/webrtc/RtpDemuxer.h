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

struct RtpDemuxer {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool AddSink(::webrtc::RtpDemuxerCriteria const&, ::webrtc::RtpPacketSinkInterface*);

    MCNAPI void AddSsrcSinkBinding(uint, ::webrtc::RtpPacketSinkInterface*);

    MCNAPI bool CriteriaWouldConflict(::webrtc::RtpDemuxerCriteria const&) const;

    MCNAPI ::webrtc::flat_containers_internal::
        flat_tree<uint, ::webrtc::identity, ::std::less<void>, ::std::vector<uint>>
        GetSsrcsForSink(::webrtc::RtpPacketSinkInterface const*) const;

    MCNAPI bool OnRtpPacket(::webrtc::RtpPacketReceived const&);

    MCNAPI void RefreshKnownMids();

    MCNAPI bool RemoveSink(::webrtc::RtpPacketSinkInterface const*);

    MCNAPI ::webrtc::RtpPacketSinkInterface* ResolveSink(::webrtc::RtpPacketReceived const&);

    MCNAPI ::webrtc::RtpPacketSinkInterface* ResolveSinkByMid(::std::string_view, uint);

    MCNAPI ::webrtc::RtpPacketSinkInterface* ResolveSinkByMidRsid(::std::string_view, ::std::string_view, uint);

    MCNAPI ::webrtc::RtpPacketSinkInterface* ResolveSinkByPayloadType(uchar, uint);

    MCNAPI ::webrtc::RtpPacketSinkInterface* ResolveSinkByRsid(::std::string_view, uint);

    MCNAPI explicit RtpDemuxer(bool);

    MCNAPI ~RtpDemuxer();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::string DescribePacket(::webrtc::RtpPacketReceived const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
