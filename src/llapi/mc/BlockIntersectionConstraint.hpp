/**
 * @file  BlockIntersectionConstraint.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockIntersectionConstraint.
 *
 */
class BlockIntersectionConstraint {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKINTERSECTIONCONSTRAINT
public:
    class BlockIntersectionConstraint& operator=(class BlockIntersectionConstraint const &) = delete;
    BlockIntersectionConstraint(class BlockIntersectionConstraint const &) = delete;
    BlockIntersectionConstraint() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BlockIntersectionConstraint();
    /**
     * @vftbl  1
     * @symbol  ?isSatisfied\@BlockIntersectionConstraint\@\@UEBA_NAEBVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEBW4Rotation\@\@\@Z
     */
    virtual bool isSatisfied(class IBlockWorldGenAPI const &, class BlockPos const &, enum class Rotation const &) const;
    /**
     * @symbol  ??0BlockIntersectionConstraint\@\@QEAA\@AEAVStructureTemplate\@\@\@Z
     */
    MCAPI BlockIntersectionConstraint(class StructureTemplate &);

};