#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RtpExtension {
public:
    // RtpExtension inner types define
    enum class Filter {};

public:
    // prevent constructor by default
    RtpExtension(RtpExtension const&);

public:
    // NOLINTBEGIN
    // symbol: ??0RtpExtension@webrtc@@QEAA@XZ
    MCAPI RtpExtension();

    // symbol: ??0RtpExtension@webrtc@@QEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@H@Z
    MCAPI RtpExtension(std::string_view, int);

    // symbol: ??0RtpExtension@webrtc@@QEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@H_N@Z
    MCAPI RtpExtension(std::string_view, int, bool);

    // symbol: ?ToString@RtpExtension@webrtc@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string ToString() const;

    // symbol: ??4RtpExtension@webrtc@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct webrtc::RtpExtension& operator=(struct webrtc::RtpExtension const&);

    // symbol: ??1RtpExtension@webrtc@@QEAA@XZ
    MCAPI ~RtpExtension();

    // symbol:
    // ?DeduplicateHeaderExtensions@RtpExtension@webrtc@@SA?BV?$vector@URtpExtension@webrtc@@V?$allocator@URtpExtension@webrtc@@@std@@@std@@AEBV34@W4Filter@12@@Z
    MCAPI static std::vector<struct webrtc::RtpExtension> const
    DeduplicateHeaderExtensions(std::vector<struct webrtc::RtpExtension> const&, ::webrtc::RtpExtension::Filter);

    // symbol:
    // ?FindHeaderExtensionByUri@RtpExtension@webrtc@@SAPEBU12@AEBV?$vector@URtpExtension@webrtc@@V?$allocator@URtpExtension@webrtc@@@std@@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@4@W4Filter@12@@Z
    MCAPI static struct webrtc::RtpExtension const* FindHeaderExtensionByUri(
        std::vector<struct webrtc::RtpExtension> const&,
        std::string_view,
        ::webrtc::RtpExtension::Filter
    );

    // symbol:
    // ?FindHeaderExtensionByUriAndEncryption@RtpExtension@webrtc@@SAPEBU12@AEBV?$vector@URtpExtension@webrtc@@V?$allocator@URtpExtension@webrtc@@@std@@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@4@_N@Z
    MCAPI static struct webrtc::RtpExtension const*
    FindHeaderExtensionByUriAndEncryption(std::vector<struct webrtc::RtpExtension> const&, std::string_view, bool);

    // symbol: ?IsEncryptionSupported@RtpExtension@webrtc@@SA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI static bool IsEncryptionSupported(std::string_view);

    // symbol: ?kAbsSendTimeUri@RtpExtension@webrtc@@2QBDB
    MCAPI static char const kAbsSendTimeUri[];

    // symbol: ?kAbsoluteCaptureTimeUri@RtpExtension@webrtc@@2QBDB
    MCAPI static char const kAbsoluteCaptureTimeUri[];

    // symbol: ?kDependencyDescriptorUri@RtpExtension@webrtc@@2QBDB
    MCAPI static char const kDependencyDescriptorUri[];

    // symbol: ?kEncryptHeaderExtensionsUri@RtpExtension@webrtc@@2QBDB
    MCAPI static char const kEncryptHeaderExtensionsUri[];

    // symbol: ?kGenericFrameDescriptorUri00@RtpExtension@webrtc@@2QBDB
    MCAPI static char const kGenericFrameDescriptorUri00[];

    // symbol: ?kMidUri@RtpExtension@webrtc@@2QBDB
    MCAPI static char const kMidUri[];

    // symbol: ?kRepairedRidUri@RtpExtension@webrtc@@2QBDB
    MCAPI static char const kRepairedRidUri[];

    // symbol: ?kRidUri@RtpExtension@webrtc@@2QBDB
    MCAPI static char const kRidUri[];

    // symbol: ?kTimestampOffsetUri@RtpExtension@webrtc@@2QBDB
    MCAPI static char const kTimestampOffsetUri[];

    // symbol: ?kTransportSequenceNumberUri@RtpExtension@webrtc@@2QBDB
    MCAPI static char const kTransportSequenceNumberUri[];

    // symbol: ?kTransportSequenceNumberV2Uri@RtpExtension@webrtc@@2QBDB
    MCAPI static char const kTransportSequenceNumberV2Uri[];

    // symbol: ?kVideoRotationUri@RtpExtension@webrtc@@2QBDB
    MCAPI static char const kVideoRotationUri[];

    // NOLINTEND
};

}; // namespace webrtc
