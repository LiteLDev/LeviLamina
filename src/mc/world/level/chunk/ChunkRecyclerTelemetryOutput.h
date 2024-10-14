#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ChunkRecyclerTelemetryOutput {
public:
    // prevent constructor by default
    ChunkRecyclerTelemetryOutput& operator=(ChunkRecyclerTelemetryOutput const&);
    ChunkRecyclerTelemetryOutput(ChunkRecyclerTelemetryOutput const&);
    ChunkRecyclerTelemetryOutput();

public:
    // NOLINTBEGIN
    MCAPI ~ChunkRecyclerTelemetryOutput();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
