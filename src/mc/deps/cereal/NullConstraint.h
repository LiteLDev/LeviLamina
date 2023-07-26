#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
// clang-format on

namespace cereal {

class NullConstraint {

public:
    // prevent constructor by default
    NullConstraint& operator=(NullConstraint const&) = delete;
    NullConstraint(NullConstraint const&)            = delete;
    NullConstraint()                                 = delete;

public:
    /**
     * @vftbl 0
     * @symbol ?doValidate\@NullConstraint\@cereal\@\@EEBA_NAEBVmeta_any\@entt\@\@AEAVSerializerContext\@2\@\@Z
     */
    virtual bool doValidate(class entt::meta_any const&, class cereal::SerializerContext&) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CEREAL_NULLCONSTRAINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NullConstraint(); // NOLINT
#endif
};

}; // namespace cereal
