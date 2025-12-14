#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/AdvanceFrameResult.h"
#include "mc/entity/utilities/IMovementCorrection.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class EntityContext;
namespace MovementDataExtractionUtility { class SnapshotAccessor; }
// clang-format on

namespace History {

struct GameTypeReplay : public ::IMovementCorrection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::GameType> mPlayerGameType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::AdvanceFrameResult
    getAdvanceFrameResult(::MovementDataExtractionUtility::SnapshotAccessor const&) /*override*/;

    virtual void advanceFrame(::EntityContext& entity) const /*override*/;

    virtual void advanceLiveFrame(::Actor& actor, ::std::optional<uint64>) /*override*/;

    virtual ::std::bitset<2> getCorrectionTypeBitset() const /*override*/;

    virtual ~GameTypeReplay() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::AdvanceFrameResult $getAdvanceFrameResult(::MovementDataExtractionUtility::SnapshotAccessor const&);

    MCAPI void $advanceFrame(::EntityContext& entity) const;

    MCAPI void $advanceLiveFrame(::Actor& actor, ::std::optional<uint64>);

    MCFOLD ::std::bitset<2> $getCorrectionTypeBitset() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace History
