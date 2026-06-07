#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"
#include "mc/client/storagemanager/ContentType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
namespace OreUI { class IResourceAllowList; }
namespace OreUI { class StorageContentItem; }
namespace StorageManager { class ContentItemProvider; }
// clang-format on

namespace OreUI {

class StorageContentQuery : public ::OreUI::QueryBase<::OreUI::StorageContentQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::StorageManager::ContentItemProvider>>   mStorageContentItemProvider;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mStorageCollectionReloadSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mContentItemSelectionSubscription;
    ::ll::TypedStorage<
        8,
        48,
        ::brstd::flat_map<
            uint64,
            ::std::reference_wrapper<::OreUI::StorageContentItem>,
            ::std::less<uint64>,
            ::std::vector<uint64>,
            ::std::vector<::std::reference_wrapper<::OreUI::StorageContentItem>>>>
                                                            mContentItemMap;
    ::ll::TypedStorage<1, 1, ::StorageManager::ContentType> mType;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<uint64>>   mNumberOfSelectedItems;
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::PropertyVector<::OreUI::StorageContentItem, ::std::allocator<::OreUI::StorageContentItem>>>
        mContentItemList;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageContentQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StorageContentQuery() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StorageContentQuery(::OreUI::GameDependencies const& game, ::std::string const& type);

    MCAPI void _select(::std::optional<uint64> id, bool selected, uint64 numOfSelectedItems);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game, ::std::string const& type);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIQuery();

    MCNAPI static void** $vftableForPropertyObject();
    // NOLINTEND
};

} // namespace OreUI
