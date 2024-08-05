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
    MCAPI Proxy(struct BlockGeometrySerializer::Proxy const&);

    MCAPI ~Proxy();

    MCAPI static void bindTypes(struct cereal::ReflectionCtx&);

    MCAPI static void from(struct BlockGeometryDescription&, struct BlockGeometrySerializer::Proxy);

    MCAPI static struct BlockGeometrySerializer::Proxy to(struct BlockGeometryDescription const&);

    // NOLINTEND
};

}; // namespace BlockGeometrySerializer
