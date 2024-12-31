#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"

// auto generated forward declare list
// clang-format off
struct AABBShapeComponent;
struct CurrentlyStandingOnBlockComponent;
struct DimensionTypeComponent;
struct LocalConstBlockSourceFactoryComponent;
struct ShouldPlayStepSoundComponent;
struct StateVectorComponent;
// clang-format on

struct CurrentlyStandingOnBlockSystemImpl
: public ::IStrictTickingSystem<::StrictExecutionContext<
      ::Filter<::ShouldPlayStepSoundComponent>,
      ::Read<::DimensionTypeComponent, ::StateVectorComponent, ::AABBShapeComponent>,
      ::Write<>,
      ::AddRemove<::CurrentlyStandingOnBlockComponent>,
      ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
      ::GlobalWrite<>,
      ::EntityFactoryT<>>> {
public:
    // prevent constructor by default
    CurrentlyStandingOnBlockSystemImpl& operator=(CurrentlyStandingOnBlockSystemImpl const&);
    CurrentlyStandingOnBlockSystemImpl(CurrentlyStandingOnBlockSystemImpl const&);
    CurrentlyStandingOnBlockSystemImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 5
    virtual void tick(::StrictExecutionContext<
                      ::Filter<::ShouldPlayStepSoundComponent>,
                      ::Read<::DimensionTypeComponent, ::StateVectorComponent, ::AABBShapeComponent>,
                      ::Write<>,
                      ::AddRemove<::CurrentlyStandingOnBlockComponent>,
                      ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
                      ::GlobalWrite<>,
                      ::EntityFactoryT<>>&) /*override*/;

    // vIndex: 0
    virtual ~CurrentlyStandingOnBlockSystemImpl() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
