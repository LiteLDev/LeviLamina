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
    // symbol: ?bindTypes@TransformationProxy@BlockTransformationSerializer@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindTypes(struct cereal::ReflectionCtx&);

    // symbol: ?from@TransformationProxy@BlockTransformationSerializer@@SAXAEAUBlockTransformationDescription@@U12@@Z
    MCAPI static void
    from(struct BlockTransformationDescription&, struct BlockTransformationSerializer::TransformationProxy);

    // NOLINTEND
};

}; // namespace BlockTransformationSerializer
