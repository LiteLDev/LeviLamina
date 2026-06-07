#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/camera/aimassist/camera_aim_assist_actor_priority/PriorityKey.h"

// auto generated forward declare list
// clang-format off
namespace CameraAimAssistActorPriority { struct PriorityData; }
// clang-format on

struct CameraAimAssistActorPriorityClientComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::map<::CameraAimAssistActorPriority::PriorityKey, int>> mEntityPriorities;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI int getEntityPriority(int presetId, int categoryId, int actorId) const;

    MCAPI bool isExcluded(int presetId, int actorId) const;

    MCAPI void setEntityPriorities(::std::vector<::CameraAimAssistActorPriority::PriorityData> const& priorityData);
#endif
    // NOLINTEND
};
