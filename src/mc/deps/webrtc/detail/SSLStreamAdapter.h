#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class StreamInterface; }
// clang-format on

namespace rtc {

class SSLStreamAdapter {
public:
    // prevent constructor by default
    SSLStreamAdapter& operator=(SSLStreamAdapter const&);
    SSLStreamAdapter(SSLStreamAdapter const&);
    SSLStreamAdapter();

public:
    // NOLINTBEGIN
    // symbol:
    // ?ExportKeyingMaterial@SSLStreamAdapter@rtc@@UEAA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@PEBE_K_NPEAE2@Z
    MCVAPI bool ExportKeyingMaterial(std::string_view, uchar const*, uint64, bool, uchar*, uint64);

    // symbol: ?GetDtlsSrtpCryptoSuite@SSLStreamAdapter@rtc@@UEAA_NPEAH@Z
    MCVAPI bool GetDtlsSrtpCryptoSuite(int*);

    // symbol: ?GetSslCipherSuite@SSLStreamAdapter@rtc@@UEAA_NPEAH@Z
    MCVAPI bool GetSslCipherSuite(int*);

    // symbol: ?SetDtlsSrtpCryptoSuites@SSLStreamAdapter@rtc@@UEAA_NAEBV?$vector@HV?$allocator@H@std@@@std@@@Z
    MCVAPI bool SetDtlsSrtpCryptoSuites(std::vector<int> const&);

    // symbol: ??1SSLStreamAdapter@rtc@@UEAA@XZ
    MCVAPI ~SSLStreamAdapter();

    // symbol:
    // ?Create@SSLStreamAdapter@rtc@@SA?AV?$unique_ptr@VSSLStreamAdapter@rtc@@U?$default_delete@VSSLStreamAdapter@rtc@@@std@@@std@@V?$unique_ptr@VStreamInterface@rtc@@U?$default_delete@VStreamInterface@rtc@@@std@@@4@@Z
    MCAPI static std::unique_ptr<class rtc::SSLStreamAdapter> Create(std::unique_ptr<class rtc::StreamInterface>);

    // symbol:
    // ?SslCipherSuiteToName@SSLStreamAdapter@rtc@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI static std::string SslCipherSuiteToName(int);

    // NOLINTEND
};

}; // namespace rtc
