#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RTPExtensionType.h"
#include "mc/deps/webrtc/detail/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class CopyOnWriteBuffer; }
namespace webrtc { class RtpHeaderExtensionMap; }
// clang-format on

namespace webrtc {

class RtpPacket {
public:
    // RtpPacket inner types declare
    // clang-format off
    struct ExtensionInfo;
    // clang-format on

    // RtpPacket inner types define
    struct ExtensionInfo {
    public:
        // prevent constructor by default
        ExtensionInfo& operator=(ExtensionInfo const&);
        ExtensionInfo(ExtensionInfo const&);
        ExtensionInfo();
    };

public:
    // prevent constructor by default
    RtpPacket();

public:
    // NOLINTBEGIN
    // symbol: ?AllocateExtension@RtpPacket@webrtc@@QEAA?AV?$ArrayView@E$0?BCGH@@rtc@@W4RTPExtensionType@2@_K@Z
    MCAPI class rtc::ArrayView<uchar, -4711> AllocateExtension(::webrtc::RTPExtensionType, uint64);

    // symbol: ?AllocatePayload@RtpPacket@webrtc@@QEAAPEAE_K@Z
    MCAPI uchar* AllocatePayload(uint64);

    // symbol: ?Clear@RtpPacket@webrtc@@QEAAXXZ
    MCAPI void Clear();

    // symbol: ?Csrcs@RtpPacket@webrtc@@QEBA?AV?$vector@IV?$allocator@I@std@@@std@@XZ
    MCAPI std::vector<uint> Csrcs() const;

    // symbol: ?FindExtension@RtpPacket@webrtc@@QEBA?AV?$ArrayView@$$CBE$0?BCGH@@rtc@@W4RTPExtensionType@2@@Z
    MCAPI class rtc::ArrayView<uchar const, -4711> FindExtension(::webrtc::RTPExtensionType) const;

    // symbol: ?HasExtension@RtpPacket@webrtc@@QEBA_NW4RTPExtensionType@2@@Z
    MCAPI bool HasExtension(::webrtc::RTPExtensionType) const;

    // symbol: ?Parse@RtpPacket@webrtc@@QEAA_NVCopyOnWriteBuffer@rtc@@@Z
    MCAPI bool Parse(class rtc::CopyOnWriteBuffer);

    // symbol: ??0RtpPacket@webrtc@@QEAA@PEBVRtpHeaderExtensionMap@1@@Z
    MCAPI explicit RtpPacket(class webrtc::RtpHeaderExtensionMap const*);

    // symbol: ??0RtpPacket@webrtc@@QEAA@AEBV01@@Z
    MCAPI RtpPacket(class webrtc::RtpPacket const&);

    // symbol: ??0RtpPacket@webrtc@@QEAA@PEBVRtpHeaderExtensionMap@1@_K@Z
    MCAPI RtpPacket(class webrtc::RtpHeaderExtensionMap const*, uint64);

    // symbol: ?SetCsrcs@RtpPacket@webrtc@@QEAAXV?$ArrayView@$$CBI$0?BCGH@@rtc@@@Z
    MCAPI void SetCsrcs(class rtc::ArrayView<uint const, -4711>);

    // symbol: ?SetMarker@RtpPacket@webrtc@@QEAAX_N@Z
    MCAPI void SetMarker(bool);

    // symbol: ?SetPadding@RtpPacket@webrtc@@QEAA_N_K@Z
    MCAPI bool SetPadding(uint64);

    // symbol: ?SetPayloadSize@RtpPacket@webrtc@@QEAAPEAE_K@Z
    MCAPI uchar* SetPayloadSize(uint64);

    // symbol: ?SetPayloadType@RtpPacket@webrtc@@QEAAXE@Z
    MCAPI void SetPayloadType(uchar);

    // symbol: ?SetSequenceNumber@RtpPacket@webrtc@@QEAAXG@Z
    MCAPI void SetSequenceNumber(ushort);

    // symbol: ?SetSsrc@RtpPacket@webrtc@@QEAAXI@Z
    MCAPI void SetSsrc(uint);

    // symbol: ?SetTimestamp@RtpPacket@webrtc@@QEAAXI@Z
    MCAPI void SetTimestamp(uint);

    // symbol: ?data@RtpPacket@webrtc@@QEBAPEBEXZ
    MCAPI uchar const* data() const;

    // symbol: ??4RtpPacket@webrtc@@QEAAAEAV01@AEBV01@@Z
    MCAPI class webrtc::RtpPacket& operator=(class webrtc::RtpPacket const&);

    // symbol: ??1RtpPacket@webrtc@@QEAA@XZ
    MCAPI ~RtpPacket();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?AllocateRawExtension@RtpPacket@webrtc@@AEAA?AV?$ArrayView@E$0?BCGH@@rtc@@H_K@Z
    MCAPI class rtc::ArrayView<uchar, -4711> AllocateRawExtension(int, uint64);

    // symbol: ?FindExtensionInfo@RtpPacket@webrtc@@AEBAPEBUExtensionInfo@12@H@Z
    MCAPI struct webrtc::RtpPacket::ExtensionInfo const* FindExtensionInfo(int) const;

    // symbol: ?FindOrCreateExtensionInfo@RtpPacket@webrtc@@AEAAAEAUExtensionInfo@12@H@Z
    MCAPI struct webrtc::RtpPacket::ExtensionInfo& FindOrCreateExtensionInfo(int);

    // symbol: ?ParseBuffer@RtpPacket@webrtc@@AEAA_NPEBE_K@Z
    MCAPI bool ParseBuffer(uchar const*, uint64);

    // symbol: ?PromoteToTwoByteHeaderExtension@RtpPacket@webrtc@@AEAAXXZ
    MCAPI void PromoteToTwoByteHeaderExtension();

    // symbol: ?SetExtensionLengthMaybeAddZeroPadding@RtpPacket@webrtc@@AEAAG_K@Z
    MCAPI ushort SetExtensionLengthMaybeAddZeroPadding(uint64);

    // symbol: ?WriteAt@RtpPacket@webrtc@@AEAAPEAE_K@Z
    MCAPI uchar* WriteAt(uint64);

    // symbol: ?WriteAt@RtpPacket@webrtc@@AEAAX_KE@Z
    MCAPI void WriteAt(uint64, uchar);

    // NOLINTEND
};

}; // namespace webrtc
