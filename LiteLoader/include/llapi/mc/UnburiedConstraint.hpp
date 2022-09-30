/**
 * @file  UnburiedConstraint.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @symbol __unk_destructor_0
     */
    virtual ~UnburiedConstraint();
    /**
     * @hash   130031640
     * @vftbl  1
     * @symbol ?isSatisfied@UnburiedConstraint@@UEBA_NAEBVIBlockWorldGenAPI@@AEBVBlockPos@@AEBW4Rotation@@@Z
     */
    virtual bool isSatisfied(class IBlockWorldGenAPI const &, class BlockPos const &, enum class Rotation const &) const;
    /**
     * @hash   1069893060
     * @symbol ??0UnburiedConstraint@@QEAA@AEAVStructureTemplate@@@Z
     */
    MCAPI UnburiedConstraint(class StructureTemplate &);

};