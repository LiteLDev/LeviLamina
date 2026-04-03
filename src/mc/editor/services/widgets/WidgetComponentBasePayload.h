#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/services/widgets/WidgetCommonBasePayload.h"

namespace Editor::Network {

class WidgetComponentBasePayload : public ::Editor::Network::WidgetCommonBasePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkf29c21;
    ::ll::UntypedStorage<8, 32> mUnk2f0131;
    ::ll::UntypedStorage<4, 12> mUnke462d2;
    ::ll::UntypedStorage<1, 1>  mUnka46064;
    ::ll::UntypedStorage<1, 1>  mUnk63992d;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetComponentBasePayload(WidgetComponentBasePayload const&);
    WidgetComponentBasePayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::Network::WidgetComponentBasePayload& operator=(::Editor::Network::WidgetComponentBasePayload&&);

    MCNAPI ::Editor::Network::WidgetComponentBasePayload&
    operator=(::Editor::Network::WidgetComponentBasePayload const&);

    MCNAPI ~WidgetComponentBasePayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Network
