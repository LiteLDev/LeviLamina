#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/ProducerComponent.h"

// auto generated forward declare list
// clang-format off
class CircuitSceneGraph;
class CircuitTrackingInfo;
// clang-format on

class DirectionalProducerComponent : public ::ProducerComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk3b898d;
    // NOLINTEND

public:
    // prevent constructor by default
    DirectionalProducerComponent& operator=(DirectionalProducerComponent const&);
    DirectionalProducerComponent(DirectionalProducerComponent const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 12
    virtual bool
    allowConnection(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, bool& bDirectlyPowered) /*override*/;

    // vIndex: 0
    virtual ~DirectionalProducerComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DirectionalProducerComponent();

    MCAPI void setAllowedConnections(::std::bitset<6> allowedConnections);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $allowConnection(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, bool& bDirectlyPowered);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
