#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/live_events/ExperienceJoinRequestInfo.h"
#include "mc/client/world/RecentlyPlayedTarget.h"

namespace World {

struct RecentlyPlayedResolvedTarget {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 488, ::World::RecentlyPlayedTarget>                mTarget;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mDisplayName;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                mCachedImagePath;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mPlayableId;
    ::ll::TypedStorage<8, 128, ::std::optional<::ExperienceJoinRequestInfo>> mExperienceJoinRequest;
    // NOLINTEND
};

} // namespace World
