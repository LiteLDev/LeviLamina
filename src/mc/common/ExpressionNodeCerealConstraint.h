#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
// clang-format on

class ExpressionNodeCerealConstraint {

public:
    // prevent constructor by default
    ExpressionNodeCerealConstraint& operator=(ExpressionNodeCerealConstraint const&) = delete;
    ExpressionNodeCerealConstraint(ExpressionNodeCerealConstraint const&)            = delete;
    ExpressionNodeCerealConstraint()                                                 = delete;

public:
    /**
     * @vftbl 0
     * @symbol
     * ?doValidate\@ExpressionNodeCerealConstraint\@\@EEBA_NAEBVmeta_any\@entt\@\@AEAVSerializerContext\@cereal\@\@\@Z
     */
    virtual bool doValidate(class entt::meta_any const&, class cereal::SerializerContext&) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_EXPRESSIONNODECEREALCONSTRAINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ExpressionNodeCerealConstraint(); // NOLINT
#endif
    /**
     * @symbol ?disallowSideEffects\@ExpressionNodeCerealConstraint\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class ExpressionNodeCerealConstraint& disallowSideEffects(bool); // NOLINT
    /**
     * @symbol
     * ?onlyAllowQueries\@ExpressionNodeCerealConstraint\@\@QEAAAEAV1\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI class ExpressionNodeCerealConstraint& onlyAllowQueries(std::vector<std::string> const&); // NOLINT
};
