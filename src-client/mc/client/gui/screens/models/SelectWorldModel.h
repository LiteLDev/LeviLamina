#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Realms { struct World; }
namespace Realms { struct WorldCache; }
namespace World { struct LocalWorldList; }
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
    MCAPI void getCachedRealmsWorlds(::std::string playerXUID);

    MCAPI ~SelectWorldModel();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
