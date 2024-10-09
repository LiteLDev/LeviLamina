#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

struct SchemaWriter {
public:
    // prevent constructor by default
    SchemaWriter& operator=(SchemaWriter const&);
    SchemaWriter(SchemaWriter const&);
    SchemaWriter();

public:
    // NOLINTBEGIN
    MCVAPI bool isSequenceWriter() const;

    // NOLINTEND
};

}; // namespace cereal
