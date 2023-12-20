#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/ArrayView.h"

namespace dcsctp {

class RestartOfAnAssociationWithNewAddressesCause {
public:
    // prevent constructor by default
    RestartOfAnAssociationWithNewAddressesCause& operator=(RestartOfAnAssociationWithNewAddressesCause const&);
    RestartOfAnAssociationWithNewAddressesCause(RestartOfAnAssociationWithNewAddressesCause const&);
    RestartOfAnAssociationWithNewAddressesCause();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RestartOfAnAssociationWithNewAddressesCause@dcsctp@@UEAA@XZ
    virtual ~RestartOfAnAssociationWithNewAddressesCause() = default;

    // vIndex: 1, symbol:
    // ?SerializeTo@RestartOfAnAssociationWithNewAddressesCause@dcsctp@@UEBAXAEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual void SerializeTo(std::vector<uchar>&) const;

    // vIndex: 2, symbol:
    // ?ToString@RestartOfAnAssociationWithNewAddressesCause@dcsctp@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string ToString() const;

    // symbol:
    // ?Parse@RestartOfAnAssociationWithNewAddressesCause@dcsctp@@SA?AV?$optional@VRestartOfAnAssociationWithNewAddressesCause@dcsctp@@@std@@V?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
    MCAPI static std::optional<class dcsctp::RestartOfAnAssociationWithNewAddressesCause>
        Parse(class rtc::ArrayView<uchar const, -4711>);

    // NOLINTEND
};

}; // namespace dcsctp
