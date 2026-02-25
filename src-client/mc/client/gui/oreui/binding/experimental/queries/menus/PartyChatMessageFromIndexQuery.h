#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/experimental/QueryBase.h"
#include "mc/client/gui/oreui/binding/experimental/properties/menus/ChatMessageObject.h"

namespace OreUI::Experimental {

class PartyChatMessageFromIndexQuery
: public ::OreUI::Experimental::QueryBase<::OreUI::Experimental::PartyChatMessageFromIndexQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 984, ::OreUI::Experimental::ChatMessageObject> mMessage;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PartyChatMessageFromIndexQuery() /*override*/ = default;
    // NOLINTEND
};

} // namespace OreUI::Experimental
