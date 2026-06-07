#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/Component.h"
#include "mc/client/settings/ComponentState.h"

namespace Settings {

class GroupInfoComponent : public ::Settings::Component<::Settings::GroupInfoComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<bool()>> mFlushCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    GroupInfoComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GroupInfoComponent() /*override*/ = default;

    virtual ::Settings::ComponentState getDefaultState() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    GroupInfoComponent(::std::string_view id, ::std::string_view name, ::std::optional<::std::string> description);

    MCAPI bool flush();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string_view id, ::std::string_view name, ::std::optional<::std::string> description);
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
