#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/BlockComponentBase.h"

class BlockTransformationComponent : public ::BlockComponentBase {
public:
    // BlockTransformationComponent inner types declare
    // clang-format off
    struct RotationType;
    // clang-format on

    // BlockTransformationComponent inner types define
    struct RotationType {
    public:
        // prevent constructor by default
        RotationType& operator=(RotationType const&);
        RotationType(RotationType const&);
        RotationType();

    public:
        // NOLINTBEGIN
        // symbol: ?rotationTypeFromVec3@RotationType@BlockTransformationComponent@@QEAAXAEBVVec3@@@Z
        MCAPI void rotationTypeFromVec3(class Vec3 const& arr);

        // NOLINTEND
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
