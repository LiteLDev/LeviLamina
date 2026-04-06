#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/IBooleanDataProvider.h"

// auto generated forward declare list
// clang-format off
namespace Settings::RegistryBuilder { class IBuilderContext; }
// clang-format on

namespace Settings {

class MultiplayerGameDataProvider : public ::Settings::IBooleanDataProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Settings::RegistryBuilder::IBuilderContext&> mContext;
    // NOLINTEND

public:
    // prevent constructor by default
    MultiplayerGameDataProvider& operator=(MultiplayerGameDataProvider const&);
    MultiplayerGameDataProvider(MultiplayerGameDataProvider const&);
    MultiplayerGameDataProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool getValue() const /*override*/;

    virtual void setValue(bool) /*override*/;

    virtual bool canModify() const /*override*/;

    virtual ~MultiplayerGameDataProvider() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $getValue() const;

    MCFOLD void $setValue(bool);

    MCFOLD bool $canModify() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Settings
