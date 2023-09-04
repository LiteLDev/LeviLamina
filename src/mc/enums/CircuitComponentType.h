#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CircuitComponentType : int64 {
    Unknown               = 0,
    Undefined             = 1,
    Mask                  = 0xFFFF0000,
    BaseCircuitComponent  = 1ull << 31,
    BaseRailTransporter   = 1ull << 16,
    ConsumerComponent     = 1ull << 17,
    PoweredBlockComponent = 1ull << 18,
    ProducerComponent     = 1ull << 19,
    TransporterComponent  = 1ull << 20,
    CapacitorComponent    = 1ull << 21,

    PistonConsumer = 1 | ConsumerComponent,

    ComparatorCapacitor    = 1 | CapacitorComponent,
    PulseCapacitor         = 2 | CapacitorComponent,
    RedstoneTorchCapacitor = 3 | CapacitorComponent,
    RepeaterCapacitor      = 4 | CapacitorComponent,
};
