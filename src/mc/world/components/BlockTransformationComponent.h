#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockTransformationComponent {
public:
    // BlockTransformationComponent inner types declare
    // clang-format off
    struct RotationType;
    // clang-format on

    // BlockTransformationComponent inner types define
    struct RotationType {

    public:
        // prevent constructor by default
        RotationType& operator=(RotationType const&) = delete;
        RotationType(RotationType const&)            = delete;
        RotationType()                               = delete;

    public:
        /**
         * @symbol ?rotationTypeFromVec3\@RotationType\@BlockTransformationComponent\@\@QEAAXAEBVVec3\@\@\@Z
         */
        MCAPI void rotationTypeFromVec3(class Vec3 const&); // NOLINT
        /**
         * @symbol ?bindType\@RotationType\@BlockTransformationComponent\@\@SAXXZ
         */
        MCAPI static void bindType(); // NOLINT
    };

public:
    // prevent constructor by default
    BlockTransformationComponent& operator=(BlockTransformationComponent const&) = delete;
    BlockTransformationComponent(BlockTransformationComponent const&)            = delete;
    BlockTransformationComponent()                                               = delete;

public:
    /**
     * @symbol ??0BlockTransformationComponent\@\@QEAA\@AEBVVec3\@\@AEBURotationType\@0\@0\@Z
     */
    MCAPI
    BlockTransformationComponent(class Vec3 const&, struct BlockTransformationComponent::RotationType const&, class Vec3 const&); // NOLINT
    /**
     * @symbol ??0BlockTransformationComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI BlockTransformationComponent(class BlockTransformationComponent&&); // NOLINT
    /**
     * @symbol ?getTransformationMatrix\@BlockTransformationComponent\@\@QEBAAEBVMatrix\@\@XZ
     */
    MCAPI class Matrix const& getTransformationMatrix() const; // NOLINT
    /**
     * @symbol ?setRotation\@BlockTransformationComponent\@\@QEAAXAEBURotationType\@1\@\@Z
     */
    MCAPI void setRotation(struct BlockTransformationComponent::RotationType const&); // NOLINT
};
