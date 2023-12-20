#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/DecodeTargetIndication.h"
#include "mc/deps/webrtc/VideoCodecType.h"
#include "mc/deps/webrtc/VideoContentType.h"
#include "mc/deps/webrtc/VideoFrameType.h"
#include "mc/deps/webrtc/VideoRotation.h"
#include "mc/deps/webrtc/detail/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct RTPVideoHeaderH264; }
namespace webrtc { struct RTPVideoHeaderVP8; }
namespace webrtc { struct RTPVideoHeaderVP9; }
// clang-format on

namespace webrtc {

class VideoFrameMetadata {
public:
    // prevent constructor by default
    VideoFrameMetadata& operator=(VideoFrameMetadata const&);
    VideoFrameMetadata(VideoFrameMetadata const&);

public:
    // NOLINTBEGIN
    // symbol: ?GetCodec@VideoFrameMetadata@webrtc@@QEBA?AW4VideoCodecType@2@XZ
    MCAPI ::webrtc::VideoCodecType GetCodec() const;

    // symbol: ?GetContentType@VideoFrameMetadata@webrtc@@QEBA?AW4VideoContentType@2@XZ
    MCAPI ::webrtc::VideoContentType GetContentType() const;

    // symbol:
    // ?GetDecodeTargetIndications@VideoFrameMetadata@webrtc@@QEBA?AV?$ArrayView@$$CBW4DecodeTargetIndication@webrtc@@$0?BCGH@@rtc@@XZ
    MCAPI class rtc::ArrayView<::webrtc::DecodeTargetIndication const, -4711> GetDecodeTargetIndications() const;

    // symbol: ?GetFrameDependencies@VideoFrameMetadata@webrtc@@QEBA?AV?$ArrayView@$$CB_J$0?BCGH@@rtc@@XZ
    MCAPI class rtc::ArrayView<int64 const, -4711> GetFrameDependencies() const;

    // symbol: ?GetFrameId@VideoFrameMetadata@webrtc@@QEBA?AV?$optional@_J@std@@XZ
    MCAPI std::optional<int64> GetFrameId() const;

    // symbol: ?GetFrameType@VideoFrameMetadata@webrtc@@QEBA?AW4VideoFrameType@2@XZ
    MCAPI ::webrtc::VideoFrameType GetFrameType() const;

    // symbol: ?GetHeight@VideoFrameMetadata@webrtc@@QEBAGXZ
    MCAPI ushort GetHeight() const;

    // symbol: ?GetIsLastFrameInPicture@VideoFrameMetadata@webrtc@@QEBA_NXZ
    MCAPI bool GetIsLastFrameInPicture() const;

    // symbol:
    // ?GetRTPVideoHeaderCodecSpecifics@VideoFrameMetadata@webrtc@@QEBAAEBV?$variant@Umonostate@std@@URTPVideoHeaderVP8@webrtc@@URTPVideoHeaderVP9@4@URTPVideoHeaderH264@4@@std@@XZ
    MCAPI std::variant<
        std::monostate,
        struct webrtc::RTPVideoHeaderVP8,
        struct webrtc::RTPVideoHeaderVP9,
        struct webrtc::RTPVideoHeaderH264> const&
    GetRTPVideoHeaderCodecSpecifics() const;

    // symbol: ?GetRotation@VideoFrameMetadata@webrtc@@QEBA?AW4VideoRotation@2@XZ
    MCAPI ::webrtc::VideoRotation GetRotation() const;

    // symbol: ?GetSimulcastIdx@VideoFrameMetadata@webrtc@@QEBAEXZ
    MCAPI uchar GetSimulcastIdx() const;

    // symbol: ?GetSpatialIndex@VideoFrameMetadata@webrtc@@QEBAHXZ
    MCAPI int GetSpatialIndex() const;

    // symbol: ?GetTemporalIndex@VideoFrameMetadata@webrtc@@QEBAHXZ
    MCAPI int GetTemporalIndex() const;

    // symbol: ?GetWidth@VideoFrameMetadata@webrtc@@QEBAGXZ
    MCAPI ushort GetWidth() const;

    // symbol: ?SetCodec@VideoFrameMetadata@webrtc@@QEAAXW4VideoCodecType@2@@Z
    MCAPI void SetCodec(::webrtc::VideoCodecType);

    // symbol: ?SetContentType@VideoFrameMetadata@webrtc@@QEAAXW4VideoContentType@2@@Z
    MCAPI void SetContentType(::webrtc::VideoContentType);

    // symbol:
    // ?SetDecodeTargetIndications@VideoFrameMetadata@webrtc@@QEAAXV?$ArrayView@$$CBW4DecodeTargetIndication@webrtc@@$0?BCGH@@rtc@@@Z
    MCAPI void SetDecodeTargetIndications(class rtc::ArrayView<::webrtc::DecodeTargetIndication const, -4711>);

    // symbol: ?SetFrameDependencies@VideoFrameMetadata@webrtc@@QEAAXV?$ArrayView@$$CB_J$0?BCGH@@rtc@@@Z
    MCAPI void SetFrameDependencies(class rtc::ArrayView<int64 const, -4711>);

    // symbol: ?SetFrameId@VideoFrameMetadata@webrtc@@QEAAXV?$optional@_J@std@@@Z
    MCAPI void SetFrameId(std::optional<int64>);

    // symbol: ?SetFrameType@VideoFrameMetadata@webrtc@@QEAAXW4VideoFrameType@2@@Z
    MCAPI void SetFrameType(::webrtc::VideoFrameType);

    // symbol: ?SetHeight@VideoFrameMetadata@webrtc@@QEAAXG@Z
    MCAPI void SetHeight(ushort);

    // symbol: ?SetIsLastFrameInPicture@VideoFrameMetadata@webrtc@@QEAAX_N@Z
    MCAPI void SetIsLastFrameInPicture(bool);

    // symbol:
    // ?SetRTPVideoHeaderCodecSpecifics@VideoFrameMetadata@webrtc@@QEAAXV?$variant@Umonostate@std@@URTPVideoHeaderVP8@webrtc@@URTPVideoHeaderVP9@4@URTPVideoHeaderH264@4@@std@@@Z
    MCAPI void SetRTPVideoHeaderCodecSpecifics(std::variant<
                                               std::monostate,
                                               struct webrtc::RTPVideoHeaderVP8,
                                               struct webrtc::RTPVideoHeaderVP9,
                                               struct webrtc::RTPVideoHeaderH264>);

    // symbol: ?SetRotation@VideoFrameMetadata@webrtc@@QEAAXW4VideoRotation@2@@Z
    MCAPI void SetRotation(::webrtc::VideoRotation);

    // symbol: ?SetSimulcastIdx@VideoFrameMetadata@webrtc@@QEAAXE@Z
    MCAPI void SetSimulcastIdx(uchar);

    // symbol: ?SetSpatialIndex@VideoFrameMetadata@webrtc@@QEAAXH@Z
    MCAPI void SetSpatialIndex(int);

    // symbol: ?SetTemporalIndex@VideoFrameMetadata@webrtc@@QEAAXH@Z
    MCAPI void SetTemporalIndex(int);

    // symbol: ?SetWidth@VideoFrameMetadata@webrtc@@QEAAXG@Z
    MCAPI void SetWidth(ushort);

    // symbol: ??0VideoFrameMetadata@webrtc@@QEAA@XZ
    MCAPI VideoFrameMetadata();

    // symbol: ??1VideoFrameMetadata@webrtc@@QEAA@XZ
    MCAPI ~VideoFrameMetadata();

    // NOLINTEND
};

}; // namespace webrtc
