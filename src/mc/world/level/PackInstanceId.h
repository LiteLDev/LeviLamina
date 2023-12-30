#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/resource/PackIdVersion.h"

struct PackInstanceId {
public:
    PackIdVersion mPackId;
    std::string   mSubpackName;

    // prevent constructor by default
    PackInstanceId& operator=(PackInstanceId const&);
    PackInstanceId(PackInstanceId const&);
    PackInstanceId();

public:
    // NOLINTBEGIN
    // symbol: ??0PackInstanceId@@QEAA@$$QEAU0@@Z
    MCAPI PackInstanceId(struct PackInstanceId&&);

    // symbol:
    // ??0PackInstanceId@@QEAA@AEBUPackIdVersion@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI PackInstanceId(struct PackIdVersion const& packId, std::string const& subpackName);

    // symbol: ??1PackInstanceId@@QEAA@XZ
    MCAPI ~PackInstanceId();

    // NOLINTEND
};
