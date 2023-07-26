#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
// clang-format on

namespace cereal {

class Constraint {

public:
    // prevent constructor by default
    Constraint& operator=(Constraint const&) = delete;
    Constraint(Constraint const&)            = delete;
    Constraint()                             = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CEREAL_CONSTRAINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Constraint(); // NOLINT
#endif
    /**
     * @symbol ?validate\@Constraint\@cereal\@\@QEBA_NAEBVmeta_any\@entt\@\@AEAVSerializerContext\@2\@\@Z
     */
    MCAPI bool validate(class entt::meta_any const&, class cereal::SerializerContext&) const; // NOLINT
};

}; // namespace cereal
