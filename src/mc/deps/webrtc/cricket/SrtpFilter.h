#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/SdpType.h"
#include "mc/deps/webrtc/cricket/ContentSource.h"

// auto generated forward declare list
// clang-format off
namespace cricket { struct CryptoParams; }
// clang-format on

namespace cricket {

class SrtpFilter {
public:
    // prevent constructor by default
    SrtpFilter& operator=(SrtpFilter const&);
    SrtpFilter(SrtpFilter const&);

public:
    // NOLINTBEGIN
    // symbol:
    // ?Process@SrtpFilter@cricket@@QEAA_NAEBV?$vector@UCryptoParams@cricket@@V?$allocator@UCryptoParams@cricket@@@std@@@std@@W4SdpType@webrtc@@W4ContentSource@2@@Z
    MCAPI bool Process(std::vector<struct cricket::CryptoParams> const&, ::webrtc::SdpType, ::cricket::ContentSource);

    // symbol: ?ResetParams@SrtpFilter@cricket@@QEAA_NXZ
    MCAPI bool ResetParams();

    // symbol:
    // ?SetAnswer@SrtpFilter@cricket@@QEAA_NAEBV?$vector@UCryptoParams@cricket@@V?$allocator@UCryptoParams@cricket@@@std@@@std@@W4ContentSource@2@@Z
    MCAPI bool SetAnswer(std::vector<struct cricket::CryptoParams> const&, ::cricket::ContentSource);

    // symbol:
    // ?SetOffer@SrtpFilter@cricket@@QEAA_NAEBV?$vector@UCryptoParams@cricket@@V?$allocator@UCryptoParams@cricket@@@std@@@std@@W4ContentSource@2@@Z
    MCAPI bool SetOffer(std::vector<struct cricket::CryptoParams> const&, ::cricket::ContentSource);

    // symbol:
    // ?SetProvisionalAnswer@SrtpFilter@cricket@@QEAA_NAEBV?$vector@UCryptoParams@cricket@@V?$allocator@UCryptoParams@cricket@@@std@@@std@@W4ContentSource@2@@Z
    MCAPI bool SetProvisionalAnswer(std::vector<struct cricket::CryptoParams> const&, ::cricket::ContentSource);

    // symbol: ??0SrtpFilter@cricket@@QEAA@XZ
    MCAPI SrtpFilter();

    // symbol: ??1SrtpFilter@cricket@@QEAA@XZ
    MCAPI ~SrtpFilter();

    // symbol:
    // ?ParseKeyParams@SrtpFilter@cricket@@SA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAE_K@Z
    MCAPI static bool ParseKeyParams(std::string const&, uchar*, uint64);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?DoSetAnswer@SrtpFilter@cricket@@IEAA_NAEBV?$vector@UCryptoParams@cricket@@V?$allocator@UCryptoParams@cricket@@@std@@@std@@W4ContentSource@2@_N@Z
    MCAPI bool DoSetAnswer(std::vector<struct cricket::CryptoParams> const&, ::cricket::ContentSource, bool);

    // symbol: ?ExpectAnswer@SrtpFilter@cricket@@IEAA_NW4ContentSource@2@@Z
    MCAPI bool ExpectAnswer(::cricket::ContentSource);

    // symbol: ?ExpectOffer@SrtpFilter@cricket@@IEAA_NW4ContentSource@2@@Z
    MCAPI bool ExpectOffer(::cricket::ContentSource);

    // symbol:
    // ?NegotiateParams@SrtpFilter@cricket@@IEAA_NAEBV?$vector@UCryptoParams@cricket@@V?$allocator@UCryptoParams@cricket@@@std@@@std@@PEAUCryptoParams@2@@Z
    MCAPI bool NegotiateParams(std::vector<struct cricket::CryptoParams> const&, struct cricket::CryptoParams*);

    // symbol:
    // ?StoreParams@SrtpFilter@cricket@@IEAA_NAEBV?$vector@UCryptoParams@cricket@@V?$allocator@UCryptoParams@cricket@@@std@@@std@@W4ContentSource@2@@Z
    MCAPI bool StoreParams(std::vector<struct cricket::CryptoParams> const&, ::cricket::ContentSource);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?ApplyRecvParams@SrtpFilter@cricket@@AEAA_NAEBUCryptoParams@2@@Z
    MCAPI bool ApplyRecvParams(struct cricket::CryptoParams const&);

    // symbol: ?ApplySendParams@SrtpFilter@cricket@@AEAA_NAEBUCryptoParams@2@@Z
    MCAPI bool ApplySendParams(struct cricket::CryptoParams const&);

    // NOLINTEND
};

}; // namespace cricket
