#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
// clang-format on

namespace cereal {

class StringConstraint {

public:
    // prevent constructor by default
    StringConstraint& operator=(StringConstraint const&) = delete;

public:
    /**
     * @vftbl 0
     * @symbol ?doValidate\@StringConstraint\@cereal\@\@EEBA_NAEBVmeta_any\@entt\@\@AEAVSerializerContext\@2\@\@Z
     */
    virtual bool doValidate(class entt::meta_any const&, class cereal::SerializerContext&) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CEREAL_STRINGCONSTRAINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~StringConstraint(); // NOLINT
#endif
    /**
     * @symbol ??0StringConstraint\@cereal\@\@QEAA\@XZ
     */
    MCAPI StringConstraint(); // NOLINT
    /**
     * @symbol ??0StringConstraint\@cereal\@\@QEAA\@AEBV01\@\@Z
     */
    MCAPI StringConstraint(class cereal::StringConstraint const&); // NOLINT
    /**
     * @symbol ??0StringConstraint\@cereal\@\@QEAA\@$$QEAV01\@\@Z
     */
    MCAPI StringConstraint(class cereal::StringConstraint&&); // NOLINT
    /**
     * @symbol ?maxSize\@StringConstraint\@cereal\@\@QEAAAEAV12\@_K\@Z
     */
    MCAPI class cereal::StringConstraint& maxSize(unsigned __int64); // NOLINT
    /**
     * @symbol
     * ?regex\@StringConstraint\@cereal\@\@QEAAAEAV12\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class cereal::StringConstraint& regex(std::string); // NOLINT
    /**
     * @symbol ?rejectEmpty\@StringConstraint\@cereal\@\@QEAAAEAV12\@XZ
     */
    MCAPI class cereal::StringConstraint& rejectEmpty(); // NOLINT
};

}; // namespace cereal
