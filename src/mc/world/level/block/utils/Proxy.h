#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
struct BlockGeometryDescription;
// clang-format on

namespace BlockGeometrySerializer {

struct Proxy {
public:
    // prevent constructor by default
    Proxy& operator=(Proxy const&);
    Proxy();

public:
    // NOLINTBEGIN
    // symbol: ??0Proxy@BlockGeometrySerializer@@QEAA@AEBU01@@Z
    MCAPI Proxy(struct BlockGeometrySerializer::Proxy const&);

    // symbol: ??1Proxy@BlockGeometrySerializer@@QEAA@XZ
    MCAPI ~Proxy();

    // symbol: ?bindTypes@Proxy@BlockGeometrySerializer@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindTypes(struct cereal::ReflectionCtx&);

    // symbol: ?from@Proxy@BlockGeometrySerializer@@SAXAEAUBlockGeometryDescription@@U12@@Z
    MCAPI static void from(struct BlockGeometryDescription&, struct BlockGeometrySerializer::Proxy);

    // symbol: ?to@Proxy@BlockGeometrySerializer@@SA?AU12@AEBUBlockGeometryDescription@@@Z
    MCAPI static struct BlockGeometrySerializer::Proxy to(struct BlockGeometryDescription const&);

    // NOLINTEND
};

}; // namespace BlockGeometrySerializer
