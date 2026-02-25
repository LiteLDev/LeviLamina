#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/experimental/QueryBase.h"
#include "mc/client/gui/oreui/binding/experimental/properties/Property.h"

namespace OreUI::Experimental {

class PartyChatUnreadMessagesQuery
: public ::OreUI::Experimental::QueryBase<::OreUI::Experimental::PartyChatUnreadMessagesQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Experimental::Property<bool>> mHasUnreadMessages;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PartyChatUnreadMessagesQuery() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIQuery();

    MCNAPI static void** $vftableForPropertyObject();
    // NOLINTEND
};

} // namespace OreUI::Experimental
