#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/RidDirection.h"

namespace cricket {

struct RidDescription {
public:
    // NOLINTBEGIN
    // symbol: ??0RidDescription@cricket@@QEAA@XZ
    MCAPI RidDescription();

    // symbol: ??0RidDescription@cricket@@QEAA@AEBU01@@Z
    MCAPI RidDescription(struct cricket::RidDescription const&);

    // symbol:
    // ??0RidDescription@cricket@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4RidDirection@1@@Z
    MCAPI RidDescription(std::string const&, ::cricket::RidDirection);

    // symbol: ??4RidDescription@cricket@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct cricket::RidDescription& operator=(struct cricket::RidDescription const&);

    // symbol: ??1RidDescription@cricket@@QEAA@XZ
    MCAPI ~RidDescription();

    // NOLINTEND
};

}; // namespace cricket
