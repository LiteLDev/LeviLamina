/**
 * @file  SemVersionConstraint.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SemVersionConstraint.
 *
 */
class SemVersionConstraint {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SEMVERSIONCONSTRAINT
public:
    class SemVersionConstraint& operator=(class SemVersionConstraint const &) = delete;
    SemVersionConstraint(class SemVersionConstraint const &) = delete;
    SemVersionConstraint() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  ?doValidate\@SemVersionConstraint\@\@EEBA_NAEBVmeta_any\@entt\@\@AEAVSerializerContext\@\@\@Z
     */
    virtual bool doValidate(class entt::meta_any const &, class SerializerContext &) const;
    /**
     * @symbol  ?min\@SemVersionConstraint\@\@QEAAAEAV1\@AEBVSemVersion\@\@\@Z
     */
    MCAPI class SemVersionConstraint & min(class SemVersion const &);

};