#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/InGameType.h"
#include "mc/client/world/WorldSystemModules.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class TrialManager;
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
namespace World { class WorldEditor; }
namespace World { class WorldPlayerListTracker; }
namespace World { class WorldResourcePackHandler; }
namespace World { class WorldStorageHandler; }
namespace World { class WorldTransferer; }
// clang-format on

namespace World {

class WorldSystem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 168, ::World::WorldSystemModules> mModules;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldSystem();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit WorldSystem(::World::WorldSystemModules&& modules);

    MCFOLD ::World::ExternalServerWorldList& getExternalServerWorldList();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::World::FeaturedWorldTemplateManager> getFeaturedWorldTemplateManager();

    MCFOLD ::World::FriendServerWorldList& getFriendServerWorldList();

    MCFOLD ::World::InfiniteWorldConverter& getInfiniteWorldConverter();

    MCFOLD ::World::LanServerWorldList& getLanServerWorldList();

    MCFOLD ::std::shared_ptr<::World::LocalWorldList> getLocalWorldList();

    MCFOLD ::World::LocalWorldStarter& getLocalWorldStarter();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::World::MarketplacePassWorldTemplateManager>
    getMarketplacePassWorldTemplateManager();

    MCFOLD ::World::NetworkWorldJoiner& getNetworkWorldJoiner();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::World::OwnedWorldTemplateManager> getOwnedWorldTemplateManager();

    MCFOLD ::World::ThirdPartyWorldList& getThirdPartyWorldList();

    MCFOLD ::World::IWorldCloudSyncer& getWorldCloudSyncer();

    MCFOLD ::World::WorldEditor& getWorldEditor();

    MCFOLD ::World::WorldPlayerListTracker& getWorldPlayerListTracker();

    MCFOLD ::World::WorldResourcePackHandler& getWorldResourcePackHandler();

    MCFOLD ::World::WorldStorageHandler const& getWorldStorageHandler() const;

    MCFOLD ::World::WorldTransferer& getWorldTransferer();

    MCAPI void update(
        double              timestampMs,
        ::TrialManager*     trialManager,
        ::World::InGameType inGameType,
        bool                tickFriendsSystemIngame
    );

    MCAPI ~WorldSystem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::World::WorldSystemModules&& modules);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace World
