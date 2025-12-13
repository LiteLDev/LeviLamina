#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"
#include "mc/entity/utilities/GetCollisionShapeEntityProxy.h"

// auto generated forward declare list
// clang-format off
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct ActorGameTypeComponent;
struct ActorTypeComponent;
struct CanStandOnSnowFlagComponent;
struct ExternalDataComponent;
struct FallDistanceComponent;
struct HasLightweightFamilyFlagComponent;
struct MovementAbilitiesComponent;
struct PassengerComponent;
struct VehicleComponent;
// clang-format on

class OwningGetCollisionShapeEntityProxy
: public ::GetCollisionShapeEntityProxy<::StrictExecutionContext<
      ::Filter<::CanStandOnSnowFlagComponent, ::HasLightweightFamilyFlagComponent>,
      ::Read<
          ::AABBShapeComponent,
          ::MovementAbilitiesComponent,
          ::ActorTypeComponent,
          ::FallDistanceComponent,
          ::PassengerComponent,
          ::ActorGameTypeComponent,
          ::ActorDataFlagComponent,
          ::VehicleComponent>,
      ::Write<>,
      ::AddRemove<>,
      ::GlobalRead<::ExternalDataComponent>,
      ::GlobalWrite<>,
      ::EntityFactoryT<>>> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk30af3e;
    // NOLINTEND

public:
    // prevent constructor by default
    OwningGetCollisionShapeEntityProxy& operator=(OwningGetCollisionShapeEntityProxy const&);
    OwningGetCollisionShapeEntityProxy(OwningGetCollisionShapeEntityProxy const&);
    OwningGetCollisionShapeEntityProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OwningGetCollisionShapeEntityProxy() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
