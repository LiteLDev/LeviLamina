#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/ContentSource.h"

namespace cricket {

class RtcpMuxFilter {
public:
    // prevent constructor by default
    RtcpMuxFilter& operator=(RtcpMuxFilter const&);
    RtcpMuxFilter(RtcpMuxFilter const&);

public:
    // NOLINTBEGIN
    // symbol: ?IsActive@RtcpMuxFilter@cricket@@QEBA_NXZ
    MCAPI bool IsActive() const;

    // symbol: ?IsFullyActive@RtcpMuxFilter@cricket@@QEBA_NXZ
    MCAPI bool IsFullyActive() const;

    // symbol: ?IsProvisionallyActive@RtcpMuxFilter@cricket@@QEBA_NXZ
    MCAPI bool IsProvisionallyActive() const;

    // symbol: ??0RtcpMuxFilter@cricket@@QEAA@XZ
    MCAPI RtcpMuxFilter();

    // symbol: ?SetAnswer@RtcpMuxFilter@cricket@@QEAA_N_NW4ContentSource@2@@Z
    MCAPI bool SetAnswer(bool, ::cricket::ContentSource);

    // symbol: ?SetOffer@RtcpMuxFilter@cricket@@QEAA_N_NW4ContentSource@2@@Z
    MCAPI bool SetOffer(bool, ::cricket::ContentSource);

    // symbol: ?SetProvisionalAnswer@RtcpMuxFilter@cricket@@QEAA_N_NW4ContentSource@2@@Z
    MCAPI bool SetProvisionalAnswer(bool, ::cricket::ContentSource);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?ExpectAnswer@RtcpMuxFilter@cricket@@AEAA_NW4ContentSource@2@@Z
    MCAPI bool ExpectAnswer(::cricket::ContentSource);

    // symbol: ?ExpectOffer@RtcpMuxFilter@cricket@@AEAA_N_NW4ContentSource@2@@Z
    MCAPI bool ExpectOffer(bool, ::cricket::ContentSource);

    // NOLINTEND
};

}; // namespace cricket
