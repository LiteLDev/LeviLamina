#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct BlockTransformationDescription;
// clang-format on

namespace BlockTransformationSerializer {

struct TransformationProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk2161ac;
    ::ll::UntypedStorage<4, 12> mUnk90e008;
    ::ll::UntypedStorage<4, 12> mUnk281b69;
    ::ll::UntypedStorage<4, 12> mUnk6ff7b0;
    ::ll::UntypedStorage<4, 12> mUnkde9247;
    // NOLINTEND

public:
    // prevent constructor by default
    TransformationProxy& operator=(TransformationProxy const&);
    TransformationProxy(TransformationProxy const&);
    TransformationProxy();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    from(::BlockTransformationDescription& desc, ::BlockTransformationSerializer::TransformationProxy proxy);
    // NOLINTEND
};

} // namespace BlockTransformationSerializer
