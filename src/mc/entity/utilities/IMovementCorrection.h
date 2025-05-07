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
    // vIndex: 0
    virtual ~IMovementCorrection() = default;

    // vIndex: 1
    virtual ::AdvanceFrameResult getAdvanceFrameResult(::MovementDataExtractionUtility::SnapshotAccessor const&);

    // vIndex: 2
    virtual void advanceLiveFrame(::Actor&, ::std::optional<uint64>) = 0;

    // vIndex: 3
    virtual ::std::bitset<2> getCorrectionTypeBitset() const = 0;

    // vIndex: 4
    virtual void advanceFrame(::EntityContext&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
