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

    MCAPI static void bindTypes(struct cereal::ReflectionCtx& ctx);

    MCAPI static void from(struct BlockGeometryDescription& desc, struct BlockGeometrySerializer::Proxy proxy);

    MCAPI static struct BlockGeometrySerializer::Proxy to(struct BlockGeometryDescription const& desc);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct BlockGeometrySerializer::Proxy const&);

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace BlockGeometrySerializer
