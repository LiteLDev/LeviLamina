#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/ArrayView.h"

namespace dcsctp {

class UserInitiatedAbortCause {
public:
    // prevent constructor by default
    UserInitiatedAbortCause& operator=(UserInitiatedAbortCause const&);
    UserInitiatedAbortCause(UserInitiatedAbortCause const&);
    UserInitiatedAbortCause();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1UserInitiatedAbortCause@dcsctp@@UEAA@XZ
    virtual ~UserInitiatedAbortCause();

    // vIndex: 1, symbol: ?SerializeTo@UserInitiatedAbortCause@dcsctp@@UEBAXAEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual void SerializeTo(std::vector<uchar>&) const;

    // vIndex: 2, symbol:
    // ?ToString@UserInitiatedAbortCause@dcsctp@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string ToString() const;

    // symbol:
    // ?Parse@UserInitiatedAbortCause@dcsctp@@SA?AV?$optional@VUserInitiatedAbortCause@dcsctp@@@std@@V?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
    MCAPI static std::optional<class dcsctp::UserInitiatedAbortCause> Parse(class rtc::ArrayView<uchar const, -4711>);

    // NOLINTEND
};

}; // namespace dcsctp
