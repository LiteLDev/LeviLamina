#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
// clang-format on

namespace cereal {

class NullConstraint {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CEREAL_NULLCONSTRAINT
public:
    NullConstraint& operator=(NullConstraint const&) = delete;
    NullConstraint(NullConstraint const&)            = delete;
    NullConstraint()                                 = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol ?doValidate\@NullConstraint\@cereal\@\@EEBA_NAEBVmeta_any\@entt\@\@AEAVSerializerContext\@2\@\@Z
     */
    virtual bool doValidate(class entt::meta_any const&, class cereal::SerializerContext&) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CEREAL_NULLCONSTRAINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NullConstraint();
#endif
};

}; // namespace cereal
