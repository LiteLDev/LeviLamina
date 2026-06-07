#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/realms/PlayerRoleActions.h"
#include "mc/deps/core/utility/optional_ref.h"

// auto generated forward declare list
// clang-format off
struct LevelSummary;
namespace Realms { class WorldCache; }
namespace Realms { struct World; }
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
    // prevent constructor by default
    SelectWorldModel();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SelectWorldModel(
        ::std::shared_ptr<::World::LocalWorldList> worldList,
        ::std::shared_ptr<::Realms::WorldCache>    realmsCache
    );

    MCAPI void getCachedRealmsWorlds(
        ::std::function<bool(::Realms::World const&, ::Realms::PlayerRoleActions)> canUserDoRealmAction
    );

    MCAPI int getLocalWorldCount() const;

    MCAPI ::optional_ref<::LevelSummary const> getLocalWorldInfo(int index) const;

    MCAPI int getRealmsWorldCount() const;

    MCAPI ::optional_ref<::Realms::World const> getRealmsWorldInfo(int index) const;

    MCAPI ~SelectWorldModel();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::shared_ptr<::World::LocalWorldList> worldList, ::std::shared_ptr<::Realms::WorldCache> realmsCache);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
