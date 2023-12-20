#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { struct IceParameters; }
// clang-format on

namespace cricket {

class IceCredentialsIterator {
public:
    // prevent constructor by default
    IceCredentialsIterator& operator=(IceCredentialsIterator const&);
    IceCredentialsIterator(IceCredentialsIterator const&);
    IceCredentialsIterator();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1IceCredentialsIterator@cricket@@UEAA@XZ
    virtual ~IceCredentialsIterator();

    // symbol: ?GetIceCredentials@IceCredentialsIterator@cricket@@QEAA?AUIceParameters@2@XZ
    MCAPI struct cricket::IceParameters GetIceCredentials();

    // symbol:
    // ??0IceCredentialsIterator@cricket@@QEAA@AEBV?$vector@UIceParameters@cricket@@V?$allocator@UIceParameters@cricket@@@std@@@std@@@Z
    MCAPI explicit IceCredentialsIterator(std::vector<struct cricket::IceParameters> const&);

    // symbol: ?CreateRandomIceCredentials@IceCredentialsIterator@cricket@@SA?AUIceParameters@2@XZ
    MCAPI static struct cricket::IceParameters CreateRandomIceCredentials();

    // NOLINTEND
};

}; // namespace cricket
