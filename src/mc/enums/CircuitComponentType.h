#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CircuitComponentType : int64_t {
    Unknown                = 0x0,
    Undefined              = 0x1,
    Mask                   = 0xFFFF0000,
    BaseCircuitComponent   = 0x80000000,
    BaseRailTransporter    = 0x10000,
    ConsumerComponent      = 0x20000,
    PistonConsumer         = 0x20001,
    PoweredBlockComponent  = 0x40000,
    ProducerComponent      = 0x80000,
    TransporterComponent   = 0x100000,
    CapacitorComponent     = 0x200000,
    ComparatorCapacitor    = 0x200001,
    PulseCapacitor         = 0x200002,
    RedstoneTorchCapacitor = 0x200003,
    RepeaterCapacitor      = 0x200004,
};
