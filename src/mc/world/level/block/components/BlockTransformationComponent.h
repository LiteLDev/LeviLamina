#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/BlockComponentBase.h"

class BlockTransformationComponent : public ::BlockComponentBase {
public:
    // BlockTransformationComponent inner types declare
    // clang-format off
    struct RotationType;
    struct ScaleType;
    // clang-format on

    // BlockTransformationComponent inner types define
    struct RotationType {
    public:
        // prevent constructor by default
        RotationType& operator=(RotationType const&);
        RotationType(RotationType const&);
        RotationType();
    };

    struct ScaleType {
    public:
        // prevent constructor by default
        ScaleType& operator=(ScaleType const&);
        ScaleType(ScaleType const&);
        ScaleType();
    };

public:
    // prevent constructor by default
    BlockTransformationComponent& operator=(BlockTransformationComponent const&);
    BlockTransformationComponent(BlockTransformationComponent const&);
    BlockTransformationComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockTransformationComponent@@UEAA@XZ
    virtual ~BlockTransformationComponent() = default;

    // NOLINTEND
};
