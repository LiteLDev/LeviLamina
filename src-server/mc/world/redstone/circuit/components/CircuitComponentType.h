#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CircuitComponentType : uint64 {
    Undefined              = 1,
    GroupMask              = 4294901760,
    BaseCircuitComponent   = 2147483648,
    BaseRailTransporter    = 65536,
    ConsumerComponent      = 131072,
    PoweredBlockComponent  = 262144,
    ProducerComponent      = 524288,
    TransporterComponent   = 1048576,
    CapacitorComponent     = 2097152,
    PistonConsumer         = 131073,
    ComparatorCapacitor    = 2097153,
    PulseCapacitor         = 2097154,
    RedstoneTorchCapacitor = 2097155,
    RepeaterCapacitor      = 2097156,
};
