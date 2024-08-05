#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

struct SchemaReader {
public:
    // SchemaReader inner types declare
    // clang-format off
    struct ScopedPop;
    // clang-format on

    // SchemaReader inner types define
    struct ScopedPop {
    public:
        // prevent constructor by default
        ScopedPop& operator=(ScopedPop const&);
        ScopedPop(ScopedPop const&);
        ScopedPop();

    public:
        // NOLINTBEGIN
        MCAPI ~ScopedPop();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    SchemaReader& operator=(SchemaReader const&);
    SchemaReader(SchemaReader const&);
    SchemaReader();

public:
    // NOLINTBEGIN
    MCVAPI bool isSequenceReader() const;

    MCAPI struct cereal::SchemaReader::ScopedPop scopedPop();

    // NOLINTEND
};

}; // namespace cereal
