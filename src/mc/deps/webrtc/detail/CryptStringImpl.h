#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class CryptStringImpl {
public:
    // prevent constructor by default
    CryptStringImpl& operator=(CryptStringImpl const&);
    CryptStringImpl(CryptStringImpl const&);
    CryptStringImpl();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CryptStringImpl@rtc@@UEAA@XZ
    virtual ~CryptStringImpl() = default;

    // vIndex: 1, symbol: ?GetLength@EmptyCryptStringImpl@rtc@@UEBA_KXZ
    virtual uint64 GetLength() const = 0;

    // vIndex: 2, symbol: ?CopyTo@EmptyCryptStringImpl@rtc@@UEBAXPEAD_N@Z
    virtual void CopyTo(char*, bool) const = 0;

    // vIndex: 3, symbol:
    // ?UrlEncode@EmptyCryptStringImpl@rtc@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string UrlEncode() const = 0;

    // vIndex: 4, symbol: ?Copy@EmptyCryptStringImpl@rtc@@UEBAPEAVCryptStringImpl@2@XZ
    virtual class rtc::CryptStringImpl* Copy() const = 0;

    // vIndex: 5, symbol: ?CopyRawTo@EmptyCryptStringImpl@rtc@@UEBAXPEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual void CopyRawTo(std::vector<uchar>*) const = 0;

    // NOLINTEND
};

}; // namespace rtc
