#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/ArrayView.h"

namespace rtc {

class SimpleStringBuilder {
public:
    // prevent constructor by default
    SimpleStringBuilder& operator=(SimpleStringBuilder const&);
    SimpleStringBuilder(SimpleStringBuilder const&);
    SimpleStringBuilder();

public:
    // NOLINTBEGIN
    // symbol: ?AppendFormat@SimpleStringBuilder@rtc@@QEAAAEAV12@PEBDZZ
    MCAPI class rtc::SimpleStringBuilder& AppendFormat(char const*, ...);

    // symbol: ??0SimpleStringBuilder@rtc@@QEAA@V?$ArrayView@D$0?BCGH@@1@@Z
    MCAPI explicit SimpleStringBuilder(class rtc::ArrayView<char, -4711>);

    // symbol: ??6SimpleStringBuilder@rtc@@QEAAAEAV01@_J@Z
    MCAPI class rtc::SimpleStringBuilder& operator<<(int64);

    // symbol: ??6SimpleStringBuilder@rtc@@QEAAAEAV01@D@Z
    MCAPI class rtc::SimpleStringBuilder& operator<<(char);

    // symbol: ??6SimpleStringBuilder@rtc@@QEAAAEAV01@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI class rtc::SimpleStringBuilder& operator<<(std::string_view);

    // symbol: ??6SimpleStringBuilder@rtc@@QEAAAEAV01@H@Z
    MCAPI class rtc::SimpleStringBuilder& operator<<(int);

    // symbol: ??6SimpleStringBuilder@rtc@@QEAAAEAV01@_K@Z
    MCAPI class rtc::SimpleStringBuilder& operator<<(uint64);

    // symbol: ??6SimpleStringBuilder@rtc@@QEAAAEAV01@I@Z
    MCAPI class rtc::SimpleStringBuilder& operator<<(uint);

    // NOLINTEND
};

}; // namespace rtc
