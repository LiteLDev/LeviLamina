#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class ThemeSettingsThemeColorUpdatedPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::ThemeSettingsThemeColorUpdatedPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk81c7fb;
    ::ll::UntypedStorage<4, 4>  mUnk325b30;
    ::ll::UntypedStorage<4, 16> mUnk577ff8;
    // NOLINTEND

public:
    // prevent constructor by default
    ThemeSettingsThemeColorUpdatedPayload& operator=(ThemeSettingsThemeColorUpdatedPayload const&);
    ThemeSettingsThemeColorUpdatedPayload(ThemeSettingsThemeColorUpdatedPayload const&);
    ThemeSettingsThemeColorUpdatedPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ThemeSettingsThemeColorUpdatedPayload() /*override*/;
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

} // namespace Editor::Network
