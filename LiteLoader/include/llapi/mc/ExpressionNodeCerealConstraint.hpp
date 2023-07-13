/**
 * @file  ExpressionNodeCerealConstraint.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class ExpressionNodeCerealConstraint {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPRESSIONNODECEREALCONSTRAINT
public:
    class ExpressionNodeCerealConstraint& operator=(class ExpressionNodeCerealConstraint const &) = delete;
    ExpressionNodeCerealConstraint(class ExpressionNodeCerealConstraint const &) = delete;
    ExpressionNodeCerealConstraint() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol ?doValidate\@ExpressionNodeCerealConstraint\@\@EEBA_NAEBVmeta_any\@entt\@\@AEAVSerializerContext\@cereal\@\@\@Z
     */
    virtual bool doValidate(class entt::meta_any const &, class cereal::SerializerContext &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_EXPRESSIONNODECEREALCONSTRAINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ExpressionNodeCerealConstraint();
#endif
    /**
     * @symbol ?disallowSideEffects\@ExpressionNodeCerealConstraint\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class ExpressionNodeCerealConstraint & disallowSideEffects(bool);
    /**
     * @symbol ?onlyAllowQueries\@ExpressionNodeCerealConstraint\@\@QEAAAEAV1\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI class ExpressionNodeCerealConstraint & onlyAllowQueries(std::vector<std::string> const &);

};
