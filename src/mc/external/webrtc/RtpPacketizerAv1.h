#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RtpPacketizer.h"
#include "mc/external/webrtc/VideoFrameType.h"

namespace webrtc {

class RtpPacketizerAv1 {
public:
    // RtpPacketizerAv1 inner types declare
    // clang-format off
    struct Obu;
    struct Packet;
    // clang-format on

    // RtpPacketizerAv1 inner types define
    struct Obu {};

    struct Packet {};

public:
    // member functions
    // NOLINTBEGIN
    MCAPI uchar AggregationHeader() const;

    MCAPI RtpPacketizerAv1(
        ::rtc::ArrayView<uchar const>,
        ::webrtc::RtpPacketizer::PayloadSizeLimits,
        ::webrtc::VideoFrameType,
        bool
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static int AdditionalBytesForPreviousObuElement(::webrtc::RtpPacketizerAv1::Packet const&);

    MCAPI static ::std::vector<::webrtc::RtpPacketizerAv1::Packet>
        Packetize(::rtc::ArrayView<::webrtc::RtpPacketizerAv1::Obu const>, ::webrtc::RtpPacketizer::PayloadSizeLimits);

    MCAPI static ::std::vector<::webrtc::RtpPacketizerAv1::Obu> ParseObus(::rtc::ArrayView<uchar const>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::rtc::ArrayView<uchar const>, ::webrtc::RtpPacketizer::PayloadSizeLimits, ::webrtc::VideoFrameType, bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
