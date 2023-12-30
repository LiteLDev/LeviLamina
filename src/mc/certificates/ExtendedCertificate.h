#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class ExtendedCertificate {
public:
    // prevent constructor by default
    ExtendedCertificate& operator=(ExtendedCertificate const&);
    ExtendedCertificate(ExtendedCertificate const&);
    ExtendedCertificate();

public:
    // NOLINTBEGIN
    // symbol: ?getIdentity@ExtendedCertificate@@SA?AVUUID@mce@@AEBVCertificate@@@Z
    MCAPI static class mce::UUID getIdentity(class Certificate const& cert);

    // symbol:
    // ?getIdentityName@ExtendedCertificate@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCertificate@@@Z
    MCAPI static std::string getIdentityName(class Certificate const&);

    // symbol:
    // ?getXuid@ExtendedCertificate@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCertificate@@_N@Z
    MCAPI static std::string getXuid(class Certificate const&, bool);

    // NOLINTEND
};
