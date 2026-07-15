#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/vanilla_components/MovementAttributesComponent.h"
#include "mc/entity/components/MovementAttributeAccess.h"
#include "mc/entity/components/MovementAttributeCorrectionMode.h"
#include "mc/entity/utilities/AdvanceFrameResult.h"
#include "mc/entity/utilities/IMovementCorrection.h"

// auto generated forward declare list
// clang-format off
class Actor;
class EntityContext;
class UpdateAttributesPacket;
namespace MovementDataExtractionUtility { class SnapshotAccessor; }
// clang-format on

namespace History {

class AttributeReplay : public ::IMovementCorrection {
public:
    // AttributeReplay inner types declare
    // clang-format off
    struct MovementAttributeInfo;
    // clang-format on

    // AttributeReplay inner types define
    struct MovementAttributeInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::optional<float> MovementAttributesComponent::*>
                                                                    mMovementAttributeComponentMemberPtr;
        ::ll::TypedStorage<1, 1, ::MovementAttributeAccess>         mAccess;
        ::ll::TypedStorage<1, 1, ::MovementAttributeCorrectionMode> mCorrectionMode;
        ::ll::TypedStorage<1, 1, bool>                              mSkipUpdate;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::UpdateAttributesPacket>> mPacket;
    ::ll::TypedStorage<4, 72, ::MovementAttributesComponent>               mMovementAttributes;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint64, ::History::AttributeReplay::MovementAttributeInfo>>
        mMovementAttributesInfo;
    // NOLINTEND

public:
    // prevent constructor by default
    AttributeReplay();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::AdvanceFrameResult
    getAdvanceFrameResult(::MovementDataExtractionUtility::SnapshotAccessor const&) /*override*/;

    virtual void advanceFrame(::EntityContext&) const /*override*/;

    virtual void advanceLiveFrame(::Actor&, ::std::optional<uint64>) /*override*/;

    virtual ::std::bitset<2> getCorrectionTypeBitset() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit AttributeReplay(::std::shared_ptr<::UpdateAttributesPacket> packet);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::UpdateAttributesPacket> packet);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace History
