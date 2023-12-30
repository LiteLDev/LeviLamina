#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/CryptStringImpl.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class CryptStringImpl; }
// clang-format on

namespace rtc {

class EmptyCryptStringImpl : public ::rtc::CryptStringImpl {
public:
    // prevent constructor by default
    EmptyCryptStringImpl& operator=(EmptyCryptStringImpl const&);
    EmptyCryptStringImpl(EmptyCryptStringImpl const&);
    EmptyCryptStringImpl();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1EmptyCryptStringImpl@rtc@@UEAA@XZ
    virtual ~EmptyCryptStringImpl() = default;

    // vIndex: 1, symbol: ?GetLength@EmptyCryptStringImpl@rtc@@UEBA_KXZ
    virtual uint64 GetLength() const;

    // vIndex: 2, symbol: ?CopyTo@EmptyCryptStringImpl@rtc@@UEBAXPEAD_N@Z
    virtual void CopyTo(char*, bool) const;

    // vIndex: 3, symbol:
    // ?UrlEncode@EmptyCryptStringImpl@rtc@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string UrlEncode() const;

    // vIndex: 4, symbol: ?Copy@EmptyCryptStringImpl@rtc@@UEBAPEAVCryptStringImpl@2@XZ
    virtual class rtc::CryptStringImpl* Copy() const;

    // vIndex: 5, symbol: ?CopyRawTo@EmptyCryptStringImpl@rtc@@UEBAXPEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual void CopyRawTo(std::vector<uchar>*) const;

    // NOLINTEND
};

}; // namespace rtc
