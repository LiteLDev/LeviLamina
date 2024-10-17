#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
struct BlockTransformationDescription;
// clang-format on

namespace BlockTransformationSerializer {

struct TransformationProxy {
public:
    // prevent constructor by default
    TransformationProxy& operator=(TransformationProxy const&);
    TransformationProxy(TransformationProxy const&);
    TransformationProxy();

public:
    // NOLINTBEGIN
    MCAPI static void bindTypes(struct cereal::ReflectionCtx& ctx);

    MCAPI static void
    from(struct BlockTransformationDescription& desc, struct BlockTransformationSerializer::TransformationProxy proxy);

    // NOLINTEND
};

}; // namespace BlockTransformationSerializer
