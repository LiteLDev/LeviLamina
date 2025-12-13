#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/AdvanceFrameResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
class EntityContext;
namespace MovementDataExtractionUtility { class SnapshotAccessor; }
// clang-format on

struct IMovementCorrection {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IMovementCorrection() = default;

    virtual ::AdvanceFrameResult getAdvanceFrameResult(::MovementDataExtractionUtility::SnapshotAccessor const&);

    virtual void advanceLiveFrame(::Actor&, ::std::optional<uint64>) = 0;

    virtual ::std::bitset<2> getCorrectionTypeBitset() const = 0;

    virtual void advanceFrame(::EntityContext&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::AdvanceFrameResult $getAdvanceFrameResult(::MovementDataExtractionUtility::SnapshotAccessor const&);
#endif


    // NOLINTEND
};
