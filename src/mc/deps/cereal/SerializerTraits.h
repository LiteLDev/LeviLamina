#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
// clang-format on

namespace cereal {

struct SerializerTraits {

public:
    // prevent constructor by default
    SerializerTraits& operator=(SerializerTraits const&) = delete;

public:
    /**
     * @symbol ??0SerializerTraits\@cereal\@\@QEAA\@AEBU01\@\@Z
     */
    MCAPI SerializerTraits(struct cereal::SerializerTraits const&); // NOLINT
    /**
     * @symbol ??0SerializerTraits\@cereal\@\@QEAA\@$$QEAU01\@\@Z
     */
    MCAPI SerializerTraits(struct cereal::SerializerTraits&&); // NOLINT
    /**
     * @symbol ??0SerializerTraits\@cereal\@\@QEAA\@XZ
     */
    MCAPI SerializerTraits(); // NOLINT
    /**
     * @symbol
     * ?name\@SerializerTraits\@cereal\@\@QEAAAEAU12\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI struct cereal::SerializerTraits& name(std::string); // NOLINT
    /**
     * @symbol
     * ?setEnumDocumentation\@SerializerTraits\@cereal\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setEnumDocumentation(std::string); // NOLINT
    /**
     * @symbol
     * ?validate\@SerializerTraits\@cereal\@\@QEAAAEAU12\@V?$function\@$$A6A_NAEAVmeta_any\@entt\@\@AEAVSerializerContext\@cereal\@\@\@Z\@std\@\@\@Z
     */
    MCAPI struct cereal::SerializerTraits&
        validate(class std::function<bool(class entt::meta_any&, class cereal::SerializerContext&)>); // NOLINT
    /**
     * @symbol ??1SerializerTraits\@cereal\@\@QEAA\@XZ
     */
    MCAPI ~SerializerTraits(); // NOLINT

    // private:
    /**
     * @symbol ?performValidation\@SerializerTraits\@cereal\@\@AEBA_NVmeta_any\@entt\@\@AEAVSerializerContext\@2\@\@Z
     */
    MCAPI bool performValidation(class entt::meta_any, class cereal::SerializerContext&) const; // NOLINT
};

}; // namespace cereal
