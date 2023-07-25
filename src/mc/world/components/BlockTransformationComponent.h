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

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKTRANSFORMATIONCOMPONENT_ROTATIONTYPE
    public:
        RotationType& operator=(RotationType const&) = delete;
        RotationType(RotationType const&)            = delete;
        RotationType()                               = delete;
#endif

    public:
        /**
         * @symbol ?rotationTypeFromVec3\@RotationType\@BlockTransformationComponent\@\@QEAAXAEBVVec3\@\@\@Z
         */
        MCAPI void rotationTypeFromVec3(class Vec3 const&);
        /**
         * @symbol ?bindType\@RotationType\@BlockTransformationComponent\@\@SAXXZ
         */
        MCAPI static void bindType();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKTRANSFORMATIONCOMPONENT
public:
    BlockTransformationComponent& operator=(BlockTransformationComponent const&) = delete;
    BlockTransformationComponent(BlockTransformationComponent const&)            = delete;
    BlockTransformationComponent()                                               = delete;
#endif

public:
    /**
     * @symbol ??0BlockTransformationComponent\@\@QEAA\@AEBVVec3\@\@AEBURotationType\@0\@0\@Z
     */
    MCAPI
    BlockTransformationComponent(class Vec3 const&, struct BlockTransformationComponent::RotationType const&, class Vec3 const&);
    /**
     * @symbol ??0BlockTransformationComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI BlockTransformationComponent(class BlockTransformationComponent&&);
    /**
     * @symbol ?getTransformationMatrix\@BlockTransformationComponent\@\@QEBAAEBVMatrix\@\@XZ
     */
    MCAPI class Matrix const& getTransformationMatrix() const;
    /**
     * @symbol ?setRotation\@BlockTransformationComponent\@\@QEAAXAEBURotationType\@1\@\@Z
     */
    MCAPI void setRotation(struct BlockTransformationComponent::RotationType const&);
};
