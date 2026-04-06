#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/Component.h"
#include "mc/client/settings/ComponentState.h"

namespace Settings {

class TextComponent : public ::Settings::Component<::Settings::TextComponent> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TextComponent() /*override*/ = default;

    virtual ::Settings::ComponentState getDefaultState() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Settings::ComponentState $getDefaultState() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Settings
