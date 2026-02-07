#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/PackManagerContentSourceImpl.h"

// auto generated forward declare list
// clang-format off
struct ContentItem;
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
    // virtual functions
    // NOLINTBEGIN
    virtual void generateItems(::std::vector<::std::shared_ptr<::ContentItem>>& content) /*override*/;

    virtual ~RealmPackManagerContentSource() /*override*/ = default;
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
