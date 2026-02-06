#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/PackManagerContentSourceImpl.h"
#include "mc/client/network/realms/RealmId.h"

// auto generated forward declare list
// clang-format off
struct ContentItem;
namespace Realms { struct Content; }
// clang-format on

namespace Realms {

class RealmsWorldPackManagerContentSource : public ::PackManagerContentSourceImpl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Realms::RealmId const>                 mRealmId;
    ::ll::TypedStorage<8, 24, ::std::vector<::Realms::Content> const> mServiceAppliedContent;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void load() /*override*/;

    virtual void generateItems(::std::vector<::std::shared_ptr<::ContentItem>>& content) /*override*/;

    virtual ~RealmsWorldPackManagerContentSource() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $load();

    MCAPI void $generateItems(::std::vector<::std::shared_ptr<::ContentItem>>& content);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Realms
