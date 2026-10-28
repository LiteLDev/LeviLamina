#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EAS {

class BiomeComponentConnectorRegistry {
public:
    // BiomeComponentConnectorRegistry inner types declare
    // clang-format off
    struct ConnectorEntry;
    // clang-format on

    // BiomeComponentConnectorRegistry inner types define
    struct ConnectorEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnka3802d;
        // NOLINTEND

    public:
        // prevent constructor by default
        ConnectorEntry& operator=(ConnectorEntry const&);
        ConnectorEntry(ConnectorEntry const&);
        ConnectorEntry();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkacb403;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeComponentConnectorRegistry& operator=(BiomeComponentConnectorRegistry const&);
    BiomeComponentConnectorRegistry(BiomeComponentConnectorRegistry const&);
    BiomeComponentConnectorRegistry();
};

} // namespace EAS
