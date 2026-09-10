#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/menus/StorageContentCommonProperties.h"
#include "mc/client/storagemanager/ContentType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
namespace OreUI { class IResourceAllowList; }
namespace StorageManager { class WorldConverter; }
// clang-format on

namespace OreUI {

class OldWorldsQuery : public ::OreUI::QueryBase<::OreUI::OldWorldsQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::StorageManager::WorldConverter>>        mStorageWorldConverter;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mOldWorldsFetchedSubscription;
    ::ll::TypedStorage<8, 296, ::OreUI::StorageContentCommonProperties>                   mCommon;
    // NOLINTEND

public:
    // prevent constructor by default
    OldWorldsQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OldWorldsQuery() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI OldWorldsQuery(::OreUI::GameDependencies const& game, ::std::string const& type);

    MCAPI void _updateOldWorlds(::StorageManager::ContentType contentType);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game, ::std::string const& type);
    // NOLINTEND
};

} // namespace OreUI
