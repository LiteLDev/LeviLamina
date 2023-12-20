#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/internal/BasicSchema.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
namespace cereal { struct ReflectionCtx; }
namespace cereal { struct SchemaDescription; }
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
namespace cereal { struct SerializerTraits; }
namespace cereal::internal { class BasicSchema; }
// clang-format on

namespace cereal::internal {

class BasicTagSequenceSchema : public ::cereal::internal::BasicSchema {
public:
    // prevent constructor by default
    BasicTagSequenceSchema& operator=(BasicTagSequenceSchema const&);
    BasicTagSequenceSchema(BasicTagSequenceSchema const&);
    BasicTagSequenceSchema();

public:
    // NOLINTBEGIN
    // vIndex: 4, symbol: ?makeDescription@BasicTagSequenceSchema@internal@cereal@@EEBA?AUSchemaDescription@3@XZ
    virtual struct cereal::SchemaDescription makeDescription() const;

    // vIndex: 5, symbol: ??1BasicTagSequenceSchema@internal@cereal@@UEAA@XZ
    virtual ~BasicTagSequenceSchema();

    // symbol:
    // ??0BasicTagSequenceSchema@internal@cereal@@QEAA@AEBUReflectionCtx@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
    MCAPI BasicTagSequenceSchema(struct cereal::ReflectionCtx const&, std::string const&, std::string const&);

    // NOLINTEND
};

}; // namespace cereal::internal
