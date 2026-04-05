#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/RealmEventId.h"

// auto generated forward declare list
// clang-format off
class LevelStorage;
// clang-format on

class RealmsStoriesData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk28ab59;
    ::ll::UntypedStorage<8, 16> mUnk61f101;
    ::ll::UntypedStorage<8, 8>  mUnk6e3afa;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsStoriesData& operator=(RealmsStoriesData const&);
    RealmsStoriesData(RealmsStoriesData const&);
    RealmsStoriesData();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI explicit RealmsStoriesData(::LevelStorage& levelStorage);
#endif

    MCNAPI void setPlayerRealmEventPublished(::RealmEventId eventId, ::std::string const& xuid);

    MCNAPI void setWorldRealmEventPublished(::RealmEventId eventId);

    MCNAPI bool wasPlayerRealmEventPublished(::RealmEventId eventId, ::std::string const& xuid) const;

#ifdef LL_PLAT_S
    MCNAPI ~RealmsStoriesData();
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& REALMS_STORIES_PREFIX();

    MCNAPI static ::std::map<::RealmEventId, ::std::string> const& mRealmEventInternalNames();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void* $ctor(::LevelStorage& levelStorage);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};
