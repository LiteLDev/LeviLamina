#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class ThemeSettingsNewThemeCreatedPayload : public ::Editor::Network::NetworkPayload<::Editor::Network::ThemeSettingsNewThemeCreatedPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk9449c4;
    ::ll::UntypedStorage<8, 40> mUnka8bf8d;
    ::ll::UntypedStorage<8, 40> mUnk772634;
    // NOLINTEND

public:
    // prevent constructor by default
    ThemeSettingsNewThemeCreatedPayload(ThemeSettingsNewThemeCreatedPayload const&);
    ThemeSettingsNewThemeCreatedPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ThemeSettingsNewThemeCreatedPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::Network::ThemeSettingsNewThemeCreatedPayload& operator=(::Editor::Network::ThemeSettingsNewThemeCreatedPayload&&);

    MCNAPI ::Editor::Network::ThemeSettingsNewThemeCreatedPayload& operator=(::Editor::Network::ThemeSettingsNewThemeCreatedPayload const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
