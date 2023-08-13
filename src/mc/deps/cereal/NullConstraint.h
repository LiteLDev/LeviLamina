#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/Constraint.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
// clang-format on

namespace cereal {

class NullConstraint : public ::cereal::Constraint {

public:
    // prevent constructor by default
    NullConstraint& operator=(NullConstraint const&) = delete;
    NullConstraint(NullConstraint const&)            = delete;
    NullConstraint()                                 = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};

}; // namespace cereal
