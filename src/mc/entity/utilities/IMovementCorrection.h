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

#ifdef LL_PLAT_S
    virtual ::AdvanceFrameResult
    getAdvanceFrameResult(::MovementDataExtractionUtility::SnapshotAccessor const& snapshot);
#else // LL_PLAT_C
    virtual ::AdvanceFrameResult getAdvanceFrameResult(::MovementDataExtractionUtility::SnapshotAccessor const& entity);
#endif

    virtual void advanceLiveFrame(::Actor&, ::std::optional<uint64>) = 0;

    virtual ::std::bitset<2> getCorrectionTypeBitset() const = 0;

#ifdef LL_PLAT_S
    virtual void advanceFrame(::EntityContext& rewindEntity) const = 0;
#else // LL_PLAT_C
    virtual void advanceFrame(::EntityContext& entity) const = 0;
#endif

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::AdvanceFrameResult $getAdvanceFrameResult(::MovementDataExtractionUtility::SnapshotAccessor const& entity);
#endif


    // NOLINTEND
};
