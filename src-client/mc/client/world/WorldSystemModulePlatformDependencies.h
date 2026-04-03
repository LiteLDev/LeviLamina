#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IAppPlatform;
namespace World { class IWorldCloudSyncer; }
// clang-format on

namespace World {

struct WorldSystemModulePlatformDependencies {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Bedrock::NonOwnerPointer<::IAppPlatform> const&> mAppPlatform;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::World::IWorldCloudSyncer>&&>   mWorldSync;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldSystemModulePlatformDependencies& operator=(WorldSystemModulePlatformDependencies const&);
    WorldSystemModulePlatformDependencies(WorldSystemModulePlatformDependencies const&);
    WorldSystemModulePlatformDependencies();
};

} // namespace World
