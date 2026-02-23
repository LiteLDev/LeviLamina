#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/phys/HitResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ClientHitDetectCoordinator;
class IClientInstance;
class LocalPlayer;
// clang-format on

class HitDetectSystem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                         mPickRange;
    ::ll::TypedStorage<4, 4, float>                         mInteractRange;
    ::ll::TypedStorage<1, 1, bool>                          mEvaluated;
    ::ll::TypedStorage<8, 136, ::HitResult>                 mViewHitResult;
    ::ll::TypedStorage<8, 136, ::HitResult>                 mViewLastHitResult;
    ::ll::TypedStorage<8, 136, ::HitResult>                 mViewLiquidHitResult;
    ::ll::TypedStorage<8, 136, ::HitResult>                 mViewLastLiquidHitResult;
    ::ll::TypedStorage<8, 136, ::HitResult>                 mPickHitResult;
    ::ll::TypedStorage<8, 136, ::HitResult>                 mPickLastHitResult;
    ::ll::TypedStorage<8, 136, ::HitResult>                 mPickLiquidHitResult;
    ::ll::TypedStorage<8, 136, ::HitResult>                 mPickLastLiquidHitResult;
    ::ll::TypedStorage<8, 8, ::ClientHitDetectCoordinator&> mEventCoordinator;
    // NOLINTEND

public:
    // prevent constructor by default
    HitDetectSystem& operator=(HitDetectSystem const&);
    HitDetectSystem(HitDetectSystem const&);
    HitDetectSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HitDetectSystem();

    virtual void reset();

    virtual void tick();

    virtual void evaluate(::IClientInstance& client, float a);

    virtual void _evaluateType(
        ::IClientInstance& client,
        float              a,
        ::Actor&           cameraEntity,
        ::LocalPlayer&     player,
        bool               isPicking,
        ::HitResult&       hitResult,
        ::HitResult&       liquidHitResult
    );
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit HitDetectSystem(::ClientHitDetectCoordinator& eventCoordinator);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ClientHitDetectCoordinator& eventCoordinator);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $reset();

    MCAPI void $tick();

    MCAPI void $evaluate(::IClientInstance& client, float a);

    MCAPI void $_evaluateType(
        ::IClientInstance& client,
        float              a,
        ::Actor&           cameraEntity,
        ::LocalPlayer&     player,
        bool               isPicking,
        ::HitResult&       hitResult,
        ::HitResult&       liquidHitResult
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
