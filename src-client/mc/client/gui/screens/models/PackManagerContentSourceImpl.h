#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentSourceType.h"
#include "mc/client/gui/screens/models/PackManagerContentSource.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IContentSourceRepository;
class ResourcePackManager;
struct ContentItem;
struct IEntitlementManager;
struct IUIDefRepository;
struct PackContentItem;
struct PackInstanceId;
struct PackManagerContentSourceArgs;
// clang-format on

struct PackManagerContentSourceImpl : public ::PackManagerContentSource {
public:
    // PackManagerContentSourceImpl inner types define
    using ConstPackContentItemPtr = ::std::shared_ptr<::PackContentItem const>;

    using PackContentItemPtr = ::std::shared_ptr<::PackContentItem>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IContentSourceRepository>> mContentSourceRepository;
    // NOLINTEND

public:
    // prevent constructor by default
    PackManagerContentSourceImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PackManagerContentSourceImpl() /*override*/;

    virtual void save() /*override*/;

    virtual void saveAllPacks() /*override*/;

    virtual void deleteContentFiles(::std::vector<::std::shared_ptr<::ContentItem const>> const& items) /*override*/;

    virtual void postDeleteContent(::std::vector<::std::shared_ptr<::ContentItem const>> const& items) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PackManagerContentSourceImpl(
        ::ContentSourceType                                       sourceType,
        ::PackManagerContentSourceArgs&&                          args,
        ::Bedrock::NotNullNonOwnerPtr<::IContentSourceRepository> contentSourceRepository
    );

    MCAPI ::std::vector<::std::shared_ptr<::PackContentItem>> _getAllSelectedItems() const;

    MCAPI void _save(bool shouldSaveAll);

    MCAPI void getSortedSelectedContent(
        ::std::vector<::PackInstanceId>&                     modelManagerIdentities,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager> entitlementManager
    );

    MCAPI void
    repopulateReports(::Bedrock::NotNullNonOwnerPtr<::IUIDefRepository> uiDefRepo, ::ResourcePackManager& packManager);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ContentSourceType                                       sourceType,
        ::PackManagerContentSourceArgs&&                          args,
        ::Bedrock::NotNullNonOwnerPtr<::IContentSourceRepository> contentSourceRepository
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $save();

    MCAPI void $saveAllPacks();

    MCAPI void $deleteContentFiles(::std::vector<::std::shared_ptr<::ContentItem const>> const& items);

    MCAPI void $postDeleteContent(::std::vector<::std::shared_ptr<::ContentItem const>> const& items);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
