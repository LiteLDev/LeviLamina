#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

struct SchemaWriter {
public:
    // prevent constructor by default
    SchemaWriter& operator=(SchemaWriter const&) = delete;
    SchemaWriter(SchemaWriter const&)            = delete;
    SchemaWriter()                               = delete;

public:
    // NOLINTBEGIN
    // symbol: ?isSequenceWriter@SchemaWriter@cereal@@UEBA_NXZ
    MCVAPI bool isSequenceWriter() const;

    // NOLINTEND
};

}; // namespace cereal
