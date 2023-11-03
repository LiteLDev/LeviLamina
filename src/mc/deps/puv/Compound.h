#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Puv::v1_20_50::BlockDescriptor {

struct Compound {
public:
    // prevent constructor by default
    Compound(Compound const&);
    Compound();

public:
    // NOLINTBEGIN
    // symbol: ?fromInt@Compound@BlockDescriptor@v1_20_50@Puv@@QEAAXH@Z
    MCAPI void fromInt(int);

    // symbol:
    // ?fromString@Compound@BlockDescriptor@v1_20_50@Puv@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void fromString(std::string);

    // symbol: ??4Compound@BlockDescriptor@v1_20_50@Puv@@QEAAAEAU0123@AEBU0123@@Z
    MCAPI struct Puv::v1_20_50::BlockDescriptor::Compound&
    operator=(struct Puv::v1_20_50::BlockDescriptor::Compound const&);

    // symbol: ??1Compound@BlockDescriptor@v1_20_50@Puv@@QEAA@XZ
    MCAPI ~Compound();

    // symbol: ?bindType@Compound@BlockDescriptor@v1_20_50@Puv@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};

}; // namespace Puv::v1_20_50::BlockDescriptor
