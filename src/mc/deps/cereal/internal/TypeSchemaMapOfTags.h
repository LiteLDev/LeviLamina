#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/internal/BasicSchema.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
namespace cereal { struct SchemaDescription; }
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
namespace cereal { struct SerializerTraits; }
namespace cereal::internal { class BasicSchema; }
// clang-format on

namespace cereal::internal {

class TypeSchemaMapOfTags : public ::cereal::internal::BasicSchema {
public:
    // prevent constructor by default
    TypeSchemaMapOfTags& operator=(TypeSchemaMapOfTags const&);
    TypeSchemaMapOfTags(TypeSchemaMapOfTags const&);
    TypeSchemaMapOfTags();

public:
    // NOLINTBEGIN
    // vIndex: 4, symbol: __gen_??1TypeSchemaMapOfTags@internal@cereal@@UEAA@XZ
    virtual ~TypeSchemaMapOfTags() = default;

    // NOLINTEND
};

}; // namespace cereal::internal
