/**
 * @file  UnburiedConstraint.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class UnburiedConstraint.
 *
 */
class UnburiedConstraint {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UNBURIEDCONSTRAINT
public:
    class UnburiedConstraint& operator=(class UnburiedConstraint const &) = delete;
    UnburiedConstraint(class UnburiedConstraint const &) = delete;
    UnburiedConstraint() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~UnburiedConstraint();
    /**
     * @vftbl  1
     * @symbol  ?isSatisfied\@UnburiedConstraint\@\@UEBA_NAEBVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEBW4Rotation\@\@\@Z
     */
    virtual bool isSatisfied(class IBlockWorldGenAPI const &, class BlockPos const &, enum class Rotation const &) const;
    /**
     * @symbol  ??0UnburiedConstraint\@\@QEAA\@AEAVStructureTemplate\@\@\@Z
     */
    MCAPI UnburiedConstraint(class StructureTemplate &);

};