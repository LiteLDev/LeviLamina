#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/realms/GenericStatus.h"

// auto generated forward declare list
// clang-format off
class RealmsAPI;
namespace Realms { struct RealmId; }
namespace Realms { struct World; }
// clang-format on

namespace Realms {

class WorldCache : public ::std::enable_shared_from_this<::Realms::WorldCache> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk75c003;
    ::ll::UntypedStorage<8, 24> mUnk70535d;
    ::ll::UntypedStorage<8, 72> mUnkf36b3e;
    ::ll::UntypedStorage<8, 16> mUnkedd084;
    ::ll::UntypedStorage<1, 1>  mUnk52558d;
    ::ll::UntypedStorage<1, 1>  mUnk9866d4;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldCache& operator=(WorldCache const&);
    WorldCache(WorldCache const&);
    WorldCache();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C explicit WorldCache(::std::weak_ptr<::RealmsAPI> api);

    MCNAPI_C void _fetchWorldsOrUseCache(
        bool                                                                            userWaiting,
        ::std::function<void(::Realms::GenericStatus, ::std::vector<::Realms::World>&)> callback,
        bool                                                                            ofUnpairedParentRealms
    );

    MCNAPI_C void clear();

    MCNAPI_C void fetchWorldOrUseCache(
        ::Realms::RealmId                                                worldId,
        bool                                                             userWaiting,
        ::std::function<void(::Realms::GenericStatus, ::Realms::World&)> callback
    );

    MCNAPI_C void fetchWorldsOrUseCache(
        bool                                                                            userWaiting,
        ::std::function<void(::Realms::GenericStatus, ::std::vector<::Realms::World>&)> callback
    );

    MCNAPI_C void setToDirty(::Realms::RealmId worldId, bool alsoDirtyOverall);

    MCNAPI_C ~WorldCache();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::std::weak_ptr<::RealmsAPI> api);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace Realms
