#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CircuitComponentType : uint64 {
    Undefined              = 0,
    GroupMask              = 0,
    BaseCircuitComponent   = 0,
    BaseRailTransporter    = 0,
    ConsumerComponent      = 0,
    PoweredBlockComponent  = 0,
    ProducerComponent      = 0,
    TransporterComponent   = 0,
    CapacitorComponent     = 0,
    PistonConsumer         = 0,
    ComparatorCapacitor    = 0,
    PulseCapacitor         = 0,
    RedstoneTorchCapacitor = 0,
    RepeaterCapacitor      = 0,
};
