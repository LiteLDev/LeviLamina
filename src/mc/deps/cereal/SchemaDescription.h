#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace cereal {

struct SchemaDescription {
public:
    // prevent constructor by default
    SchemaDescription();

public:
    // NOLINTBEGIN
    // symbol: ??0SchemaDescription@cereal@@QEAA@$$QEAU01@@Z
    MCAPI SchemaDescription(struct cereal::SchemaDescription&&);

    // symbol: ??0SchemaDescription@cereal@@QEAA@AEBU01@@Z
    MCAPI SchemaDescription(struct cereal::SchemaDescription const&);

    // symbol: ??4SchemaDescription@cereal@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct cereal::SchemaDescription& operator=(struct cereal::SchemaDescription&&);

    // symbol: ??4SchemaDescription@cereal@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct cereal::SchemaDescription& operator=(struct cereal::SchemaDescription const&);

    // symbol: ??1SchemaDescription@cereal@@QEAA@XZ
    MCAPI ~SchemaDescription();

    // symbol: ?bindTypes@SchemaDescription@cereal@@SAXAEAUReflectionCtx@2@@Z
    MCAPI static void bindTypes(struct cereal::ReflectionCtx&);

    // NOLINTEND
};

}; // namespace cereal
