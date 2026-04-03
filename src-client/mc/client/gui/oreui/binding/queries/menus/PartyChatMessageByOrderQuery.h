#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/menus/ChatMessageObject.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class PartyChatMessageByOrderQuery : public ::OreUI::QueryBase<::OreUI::PartyChatMessageByOrderQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 1176, ::OreUI::ChatMessageObject> mMessage;
    // NOLINTEND

public:
    // prevent constructor by default
    PartyChatMessageByOrderQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PartyChatMessageByOrderQuery() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PartyChatMessageByOrderQuery(::OreUI::GameDependencies const& game, uint order);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game, uint order);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPropertyObject();

    MCNAPI static void** $vftableForIQuery();
    // NOLINTEND
};

} // namespace OreUI
