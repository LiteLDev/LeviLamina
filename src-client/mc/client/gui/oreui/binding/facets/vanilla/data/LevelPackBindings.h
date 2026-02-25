#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/PackCollection.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class LevelDataWrapper;
struct IEntitlementManager;
namespace OreUI { class IResourceAllowList; }
namespace World { struct PackDetails; }
namespace World { struct WorldPacksData; }
// clang-format on

namespace OreUI {

struct LevelPackBindings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                        mIsDirty;
    ::ll::TypedStorage<8, 8, ::LevelDataWrapper*>                                         mWorldData;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>>       mEntitlementManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<1, 1, bool>                                                        mIsTrialMode;
    ::ll::TypedStorage<8, 128, ::World::PackCollection>                                   mTexturePacks;
    ::ll::TypedStorage<8, 128, ::World::PackCollection>                                   mBehaviorPacks;
    ::ll::TypedStorage<1, 1, bool> mIsRealmsPlusSubscriptionActive;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelPackBindings();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LevelPackBindings(
        ::World::WorldPacksData const&                             worldPacks,
        ::LevelDataWrapper&                                        worldData,
        bool                                                       isTrialMode,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>       entitlementManager,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );

    MCAPI void _addPackIconPathToAllowList(
        ::World::PackCollection&                                   packCollection,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );

    MCFOLD ::std::vector<::World::PackDetails> const& getActiveBehaviorPacks() const;

    MCFOLD ::std::vector<::World::PackDetails> const& getActiveTexturePacks() const;

    MCFOLD ::std::vector<::World::PackDetails> const& getAvailableBehaviorPacks() const;

    MCFOLD ::std::vector<::World::PackDetails> const& getAvailableTexturePacks() const;

    MCFOLD ::std::vector<::World::PackDetails> const& getGlobalTexturePacks() const;

    MCFOLD ::std::vector<::World::PackDetails> const& getRealmsTexturePacks() const;

    MCFOLD ::std::vector<::World::PackDetails> const& getUnownedTexturePacks() const;

    MCAPI bool isRealmsPlusSubscriptionActive();

    MCAPI bool isRealmsPlusSupported() const;

    MCAPI void setData(
        ::World::WorldPacksData const&                             worldPacks,
        ::LevelDataWrapper&                                        worldData,
        bool                                                       isTrialMode,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>       entitlementManager,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );

    MCAPI ~LevelPackBindings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::World::WorldPacksData const&                             worldPacks,
        ::LevelDataWrapper&                                        worldData,
        bool                                                       isTrialMode,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>       entitlementManager,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
