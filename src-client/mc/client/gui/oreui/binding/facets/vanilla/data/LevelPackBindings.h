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
};

} // namespace OreUI
