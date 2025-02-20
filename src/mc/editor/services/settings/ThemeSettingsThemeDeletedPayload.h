#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class ThemeSettingsThemeDeletedPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::ThemeSettingsThemeDeletedPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkfbe353;
    // NOLINTEND

public:
    // prevent constructor by default
    ThemeSettingsThemeDeletedPayload& operator=(ThemeSettingsThemeDeletedPayload const&);
    ThemeSettingsThemeDeletedPayload(ThemeSettingsThemeDeletedPayload const&);
    ThemeSettingsThemeDeletedPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ThemeSettingsThemeDeletedPayload() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
