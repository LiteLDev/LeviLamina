#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/systems/Dependencies.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct SystemInfo {
    std::string  mName;
    Dependencies mDependencies;
    void*        mGenerateDetailedInfo;

public:
    // NOLINTBEGIN
    // symbol: ??0SystemInfo@@QEAA@XZ
    MCAPI SystemInfo();

    // symbol: ??0SystemInfo@@QEAA@$$QEAU0@@Z
    MCAPI SystemInfo(struct SystemInfo&&);

    // symbol: ??0SystemInfo@@QEAA@AEBU0@@Z
    MCAPI SystemInfo(struct SystemInfo const&);

    // symbol: ??4SystemInfo@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct SystemInfo& operator=(struct SystemInfo&&);

    // symbol: ??4SystemInfo@@QEAAAEAU0@AEBU0@@Z
    MCAPI struct SystemInfo& operator=(struct SystemInfo const&);

    // symbol: ??1SystemInfo@@QEAA@XZ
    MCAPI ~SystemInfo();

    // symbol: ?bindType@SystemInfo@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};
