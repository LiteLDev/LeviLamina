#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/PackCollection.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IEntitlementManager;
class LevelDataWrapper;
namespace OreUI { class IResourceAllowList; }
namespace World { struct PackDetails; }
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
    // member functions
    // NOLINTBEGIN
    MCNAPI void _addPackIconPathToAllowList(
        ::World::PackCollection&                                   packCollection,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );

    MCNAPI ::std::vector<::World::PackDetails> const& getActiveBehaviorPacks() const;

    MCNAPI ::std::vector<::World::PackDetails> const& getActiveTexturePacks() const;

    MCNAPI ::std::vector<::World::PackDetails> const& getAvailableBehaviorPacks() const;

    MCNAPI ::std::vector<::World::PackDetails> const& getAvailableTexturePacks() const;

    MCNAPI ::std::vector<::World::PackDetails> const& getGlobalTexturePacks() const;

    MCNAPI ::std::vector<::World::PackDetails> const& getRealmsTexturePacks() const;

    MCNAPI ::std::vector<::World::PackDetails> const& getUnownedTexturePacks() const;

    MCNAPI bool isRealmsPlusSubscriptionActive();

    MCNAPI bool isRealmsPlusSupported() const;
    // NOLINTEND
};

} // namespace OreUI
