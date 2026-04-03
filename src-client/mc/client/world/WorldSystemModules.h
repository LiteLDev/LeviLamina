#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace World { class ExternalServerWorldList; }
namespace World { class FeaturedWorldTemplateManager; }
namespace World { class FriendServerWorldList; }
namespace World { class IWorldCloudSyncer; }
namespace World { class InfiniteWorldConverter; }
namespace World { class LanServerWorldList; }
namespace World { class LocalWorldList; }
namespace World { class LocalWorldStarter; }
namespace World { class MarketplacePassWorldTemplateManager; }
namespace World { class NetworkWorldJoiner; }
namespace World { class OwnedWorldTemplateManager; }
namespace World { class ThirdPartyWorldList; }
namespace World { class WorldActivitySessionTracker; }
namespace World { class WorldEditor; }
namespace World { class WorldPlayerListTracker; }
namespace World { class WorldResourcePackHandler; }
namespace World { class WorldStorageHandler; }
namespace World { class WorldTransferer; }
namespace World { struct WorldSystemModuleGameDependencies; }
namespace World { struct WorldSystemModulePlatformDependencies; }
// clang-format on

namespace World {

struct WorldSystemModules {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                     mIsEditorMode;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::World::ExternalServerWorldList>>      mExternalServerWorldList;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::World::FriendServerWorldList>>        mFriendServerWorldList;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::World::LocalWorldList>>              mLocalWorldList;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::World::ThirdPartyWorldList>>          mThirdPartyWorldList;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::World::LanServerWorldList>>           mLanServerWorldList;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::World::WorldResourcePackHandler>>     mWorldResourcePackHandler;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::World::WorldStorageHandler>>          mWorldStorageHandler;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::World::WorldEditor>>                  mWorldEditor;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::World::IWorldCloudSyncer>>            mWorldCloudSyncer;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::World::WorldActivitySessionTracker>> mWorldActivitySessionTracker;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::World::LocalWorldStarter>>            mLocalWorldStarter;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::World::NetworkWorldJoiner>>           mNetworkWorldJoiner;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::World::WorldTransferer>>              mWorldTransferer;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::World::InfiniteWorldConverter>>       mWorldSizeConverter;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::World::WorldPlayerListTracker>>       mWorldPlayerListTracker;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::World::FeaturedWorldTemplateManager>> mFeaturedWorldTemplateManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::World::MarketplacePassWorldTemplateManager>>
        mMarketplacePassWorldTemplateManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::World::OwnedWorldTemplateManager>> mOwnedWorldTemplateManager;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldSystemModules& operator=(WorldSystemModules const&);
    WorldSystemModules(WorldSystemModules const&);
    WorldSystemModules();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldSystemModules(::World::WorldSystemModules&&);

    MCAPI ~WorldSystemModules();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::World::WorldSystemModules create(
        ::World::WorldSystemModuleGameDependencies&&     game,
        ::World::WorldSystemModulePlatformDependencies&& platform
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::World::WorldSystemModules&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace World
