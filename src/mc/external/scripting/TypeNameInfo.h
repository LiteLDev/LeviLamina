#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct TypeNameInfo {
public:
    // prevent constructor by default
    TypeNameInfo& operator=(TypeNameInfo const&);
    TypeNameInfo(TypeNameInfo const&);
    TypeNameInfo();

public:
    // NOLINTBEGIN
    // symbol: ??0TypeNameInfo@Scripting@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0_N@Z
    MCAPI TypeNameInfo(std::string, std::string, bool);

    // symbol: ??1TypeNameInfo@Scripting@@QEAA@XZ
    MCAPI ~TypeNameInfo();

    // NOLINTEND
};

}; // namespace Scripting
