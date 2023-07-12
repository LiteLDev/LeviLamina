/**
 * @file  BlockTransformationComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class BlockTransformationComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKTRANSFORMATIONCOMPONENT
public:
    class BlockTransformationComponent& operator=(class BlockTransformationComponent const &) = delete;
    BlockTransformationComponent(class BlockTransformationComponent const &) = delete;
    BlockTransformationComponent() = delete;
#endif

public:
    /**
     * @symbol ??0BlockTransformationComponent\@\@QEAA\@AEBVVec3\@\@AEBURotationType\@0\@0\@Z
     */
    MCAPI BlockTransformationComponent(class Vec3 const &, struct BlockTransformationComponent::RotationType const &, class Vec3 const &);
    /**
     * @symbol ??0BlockTransformationComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI BlockTransformationComponent(class BlockTransformationComponent &&);
    /**
     * @symbol ?getTransformationMatrix\@BlockTransformationComponent\@\@QEBAAEBVMatrix\@\@XZ
     */
    MCAPI class Matrix const & getTransformationMatrix() const;
    /**
     * @symbol ?setRotation\@BlockTransformationComponent\@\@QEAAXAEBURotationType\@1\@\@Z
     */
    MCAPI void setRotation(struct BlockTransformationComponent::RotationType const &);

};
