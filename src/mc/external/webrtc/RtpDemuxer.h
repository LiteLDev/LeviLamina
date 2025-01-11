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
    MCAPI bool AddSink(::webrtc::RtpDemuxerCriteria const&, ::webrtc::RtpPacketSinkInterface*);

    MCAPI void AddSsrcSinkBinding(uint, ::webrtc::RtpPacketSinkInterface*);

    MCAPI bool CriteriaWouldConflict(::webrtc::RtpDemuxerCriteria const&) const;

    MCAPI ::webrtc::flat_containers_internal::
        flat_tree<uint, ::webrtc::identity, ::std::less<void>, ::std::vector<uint>>
        GetSsrcsForSink(::webrtc::RtpPacketSinkInterface const*) const;

    MCAPI bool OnRtpPacket(::webrtc::RtpPacketReceived const&);

    MCAPI void RefreshKnownMids();

    MCAPI bool RemoveSink(::webrtc::RtpPacketSinkInterface const*);

    MCAPI ::webrtc::RtpPacketSinkInterface* ResolveSink(::webrtc::RtpPacketReceived const&);

    MCAPI ::webrtc::RtpPacketSinkInterface* ResolveSinkByMid(::std::string_view, uint);

    MCAPI ::webrtc::RtpPacketSinkInterface* ResolveSinkByMidRsid(::std::string_view, ::std::string_view, uint);

    MCAPI ::webrtc::RtpPacketSinkInterface* ResolveSinkByPayloadType(uchar, uint);

    MCAPI ::webrtc::RtpPacketSinkInterface* ResolveSinkByRsid(::std::string_view, uint);

    MCAPI explicit RtpDemuxer(bool);

    MCAPI ~RtpDemuxer();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string DescribePacket(::webrtc::RtpPacketReceived const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
