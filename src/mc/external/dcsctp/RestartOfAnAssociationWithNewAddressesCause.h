#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class RestartOfAnAssociationWithNewAddressesCause {
public:
    // prevent constructor by default
    RestartOfAnAssociationWithNewAddressesCause& operator=(RestartOfAnAssociationWithNewAddressesCause const&);
    RestartOfAnAssociationWithNewAddressesCause(RestartOfAnAssociationWithNewAddressesCause const&);
    RestartOfAnAssociationWithNewAddressesCause();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::dcsctp::RestartOfAnAssociationWithNewAddressesCause>
        Parse(::rtc::ArrayView<uchar const>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
