#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/OptionProperty.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
// clang-format on

namespace OreUI {

class SafeZoneQuery : public ::OreUI::QueryBase<::OreUI::SafeZoneQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 120, ::OreUI::OptionProperty<float>> mSafeZoneX;
    ::ll::TypedStorage<8, 120, ::OreUI::OptionProperty<float>> mSafeZoneY;
    ::ll::TypedStorage<8, 120, ::OreUI::OptionProperty<float>> mScreenPositionX;
    ::ll::TypedStorage<8, 120, ::OreUI::OptionProperty<float>> mScreenPositionY;
    // NOLINTEND

public:
    // prevent constructor by default
    SafeZoneQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SafeZoneQuery() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SafeZoneQuery(::OreUI::ClientDependencies const& data);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& data);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPropertyObject();

    MCNAPI static void** $vftableForIQuery();
    // NOLINTEND
};

} // namespace OreUI
