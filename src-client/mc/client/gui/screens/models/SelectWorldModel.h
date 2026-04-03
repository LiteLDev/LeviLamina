#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/realms/PlayerRoleActions.h"

// auto generated forward declare list
// clang-format off
namespace Realms { struct World; }
namespace Realms { struct WorldCache; }
namespace World { class LocalWorldList; }
// clang-format on

class SelectWorldModel {
public:
    // SelectWorldModel inner types define
    using RealmsWorldList = ::std::vector<::std::reference_wrapper<::Realms::World>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::World::LocalWorldList>>               mWorldList;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::WorldCache>>                  mRealmsCache;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::reference_wrapper<::Realms::World>>> mRealmsWorlds;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void getCachedRealmsWorlds(
        ::std::function<bool(::Realms::World const&, ::Realms::PlayerRoleActions)> canUserDoRealmAction
    );

    MCAPI ~SelectWorldModel();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
