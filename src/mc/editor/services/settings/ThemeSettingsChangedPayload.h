#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class ThemeSettingsChangedPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::ThemeSettingsChangedPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 176> mUnkd67276;
    // NOLINTEND

public:
    // prevent constructor by default
    ThemeSettingsChangedPayload& operator=(ThemeSettingsChangedPayload const&);
    ThemeSettingsChangedPayload(ThemeSettingsChangedPayload const&);
    ThemeSettingsChangedPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ThemeSettingsChangedPayload() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
