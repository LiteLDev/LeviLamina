#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

struct SchemaDescription {
public:
    // prevent constructor by default
    SchemaDescription& operator=(SchemaDescription const&);
    SchemaDescription(SchemaDescription const&);
    SchemaDescription();

public:
    // NOLINTBEGIN
    // symbol: ??0SchemaDescription@cereal@@QEAA@$$QEAU01@@Z
    MCAPI SchemaDescription(struct cereal::SchemaDescription&&);

    // symbol: ??1SchemaDescription@cereal@@QEAA@XZ
    MCAPI ~SchemaDescription();

    // NOLINTEND
};

}; // namespace cereal
