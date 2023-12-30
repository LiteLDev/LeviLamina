#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/MessageDigest.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class MessageDigest; }
struct evp_md_st;
// clang-format on

namespace rtc {

class OpenSSLDigest : public ::rtc::MessageDigest {
public:
    // prevent constructor by default
    OpenSSLDigest& operator=(OpenSSLDigest const&);
    OpenSSLDigest(OpenSSLDigest const&);
    OpenSSLDigest();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1OpenSSLDigest@rtc@@UEAA@XZ
    virtual ~OpenSSLDigest();

    // vIndex: 1, symbol: ?Size@OpenSSLDigest@rtc@@UEBA_KXZ
    virtual uint64 Size() const;

    // vIndex: 2, symbol: ?Update@OpenSSLDigest@rtc@@UEAAXPEBX_K@Z
    virtual void Update(void const*, uint64);

    // vIndex: 3, symbol: ?Finish@OpenSSLDigest@rtc@@UEAA_KPEAX_K@Z
    virtual uint64 Finish(void*, uint64);

    // symbol: ??0OpenSSLDigest@rtc@@QEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI explicit OpenSSLDigest(std::string_view);

    // symbol:
    // ?GetDigestEVP@OpenSSLDigest@rtc@@SA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@PEAPEBUevp_md_st@@@Z
    MCAPI static bool GetDigestEVP(std::string_view, struct evp_md_st const**);

    // symbol: ?GetDigestSize@OpenSSLDigest@rtc@@SA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@PEA_K@Z
    MCAPI static bool GetDigestSize(std::string_view, uint64*);

    // NOLINTEND
};

}; // namespace rtc
