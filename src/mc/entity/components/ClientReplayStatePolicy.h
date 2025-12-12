#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/entity/components/IReplayStatePolicy.h"
#include "mc/entity/components/ReplayStateConfig.h"
#include "mc/entity/utilities/AdvanceFrameResult.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class EntityContext;
class PlayerAuthInputPacket;
struct MovementCorrection;
// clang-format on

class ClientReplayStatePolicy : public ::IReplayStatePolicy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::std::optional<::DimensionType>> mLastDimension;
    ::ll::TypedStorage<4, 20, ::ReplayStateConfig>             mConfig;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isReplayNeeded(::AdvanceFrameResult result) const /*override*/;

    virtual ::MovementCorrection
    shouldCorrectMovement(::EntityContext&, ::PlayerAuthInputPacket const&, uint64, uchar, bool) /*override*/;

    virtual void notifyOfExternalCorrection(uint64) /*override*/;

    virtual ~ClientReplayStatePolicy() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isReplayNeeded(::AdvanceFrameResult result) const;

    MCAPI ::MovementCorrection
    $shouldCorrectMovement(::EntityContext&, ::PlayerAuthInputPacket const&, uint64, uchar, bool);

    MCFOLD void $notifyOfExternalCorrection(uint64);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
