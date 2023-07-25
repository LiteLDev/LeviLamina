#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/internal/BasicSchema.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
namespace cereal { struct SerializerTraits; }
namespace cereal::internal { struct Result; }
// clang-format on

namespace cereal::internal {

class DeprecatedSchema : public ::cereal::internal::BasicSchema {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CEREAL_INTERNAL_DEPRECATEDSCHEMA
public:
    DeprecatedSchema& operator=(DeprecatedSchema const&) = delete;
    DeprecatedSchema(DeprecatedSchema const&)            = delete;
    DeprecatedSchema()                                   = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol
     * ?doValidate\@DeprecatedSchema\@internal\@cereal\@\@MEBA?AUResult\@23\@AEAUSchemaReader\@3\@AEAVmeta_any\@entt\@\@AEBUSerializerTraits\@3\@AEAVSerializerContext\@3\@\@Z
     */
    virtual struct cereal::internal::Result
    doValidate(struct cereal::SchemaReader&, class entt::meta_any&, struct cereal::SerializerTraits const&, class cereal::SerializerContext&)
        const;
    /**
     * @vftbl 1
     * @symbol
     * ?doLoad\@DeprecatedSchema\@internal\@cereal\@\@MEBA?AUResult\@23\@AEAUSchemaReader\@3\@AEAVmeta_any\@entt\@\@AEBUSerializerTraits\@3\@AEBV67\@AEAVSerializerContext\@3\@\@Z
     */
    virtual struct cereal::internal::Result
    doLoad(struct cereal::SchemaReader&, class entt::meta_any&, struct cereal::SerializerTraits const&, class entt::meta_any const&, class cereal::SerializerContext&)
        const;
};

}; // namespace cereal::internal
