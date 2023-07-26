#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
// clang-format on

namespace cereal {

class NumericConstraint {

public:
    // prevent constructor by default
    NumericConstraint& operator=(NumericConstraint const&) = delete;
    NumericConstraint(NumericConstraint const&)            = delete;
    NumericConstraint()                                    = delete;

public:
    /**
     * @vftbl 0
     * @symbol ?doValidate\@NumericConstraint\@cereal\@\@EEBA_NAEBVmeta_any\@entt\@\@AEAVSerializerContext\@2\@\@Z
     */
    virtual bool doValidate(class entt::meta_any const&, class cereal::SerializerContext&) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CEREAL_NUMERICCONSTRAINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NumericConstraint(); // NOLINT
#endif
    /**
     * @symbol ?max\@NumericConstraint\@cereal\@\@QEAAAEAV12\@N\@Z
     */
    MCAPI class cereal::NumericConstraint& max(double); // NOLINT
    /**
     * @symbol ?min\@NumericConstraint\@cereal\@\@QEAAAEAV12\@N\@Z
     */
    MCAPI class cereal::NumericConstraint& min(double); // NOLINT
    /**
     * @symbol ?range\@NumericConstraint\@cereal\@\@QEAAAEAV12\@NN\@Z
     */
    MCAPI class cereal::NumericConstraint& range(double, double); // NOLINT
};

}; // namespace cereal
