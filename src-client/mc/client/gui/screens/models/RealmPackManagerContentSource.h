#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/PackManagerContentSourceImpl.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IContentSourceRepository;
struct ContentItem;
struct PackManagerContentSourceArgs;
namespace Realms { struct Content; }
// clang-format on

struct RealmPackManagerContentSource : public ::PackManagerContentSourceImpl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, int64>                             mRealmId;
    ::ll::TypedStorage<8, 24, ::std::vector<::Realms::Content>> mAppliedContent;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmPackManagerContentSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void generateItems(::std::vector<::std::shared_ptr<::ContentItem>>& content) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RealmPackManagerContentSource(
        ::PackManagerContentSourceArgs&&                          args,
        ::Bedrock::NotNullNonOwnerPtr<::IContentSourceRepository> contentSourceRepository,
        int64                                                     realmId
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::PackManagerContentSourceArgs&&                          args,
        ::Bedrock::NotNullNonOwnerPtr<::IContentSourceRepository> contentSourceRepository,
        int64                                                     realmId
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $generateItems(::std::vector<::std::shared_ptr<::ContentItem>>& content);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
