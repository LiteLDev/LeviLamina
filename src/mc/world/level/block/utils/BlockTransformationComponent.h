#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/utils/BlockComponentBase.h"

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
        MCAPI void rotationTypeFromVec3(class Vec3 const&);

        // symbol: ?bindType@RotationType@BlockTransformationComponent@@SAXXZ
        MCAPI static void bindType();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    BlockTransformationComponent& operator=(BlockTransformationComponent const&);
    BlockTransformationComponent(BlockTransformationComponent const&);
    BlockTransformationComponent();

public:
    // NOLINTBEGIN
    // symbol: ??0BlockTransformationComponent@@QEAA@AEBVVec3@@AEBURotationType@0@0@Z
    MCAPI
    BlockTransformationComponent(class Vec3 const&, struct BlockTransformationComponent::RotationType const&, class Vec3 const&);

    // symbol: ??0BlockTransformationComponent@@QEAA@$$QEAV0@@Z
    MCAPI BlockTransformationComponent(class BlockTransformationComponent&&);

    // symbol: ?getTransformationMatrix@BlockTransformationComponent@@QEBAAEBVMatrix@@XZ
    MCAPI class Matrix const& getTransformationMatrix() const;

    // symbol: ?setRotation@BlockTransformationComponent@@QEAAXAEBURotationType@1@@Z
    MCAPI void setRotation(struct BlockTransformationComponent::RotationType const&);

    // NOLINTEND
};
