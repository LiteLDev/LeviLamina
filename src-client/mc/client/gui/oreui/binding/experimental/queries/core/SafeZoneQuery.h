#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/experimental/QueryBase.h"
#include "mc/client/gui/oreui/binding/experimental/properties/OptionProperty.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Experimental { class ClientDependencies; }
// clang-format on

namespace OreUI::Experimental {

class SafeZoneQuery : public ::OreUI::Experimental::QueryBase<::OreUI::Experimental::SafeZoneQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 120, ::OreUI::Experimental::OptionProperty<float>> mSafeZoneX;
    ::ll::TypedStorage<8, 120, ::OreUI::Experimental::OptionProperty<float>> mSafeZoneY;
    ::ll::TypedStorage<8, 120, ::OreUI::Experimental::OptionProperty<float>> mScreenPositionX;
    ::ll::TypedStorage<8, 120, ::OreUI::Experimental::OptionProperty<float>> mScreenPositionY;
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
    MCAPI explicit SafeZoneQuery(::OreUI::Experimental::ClientDependencies const& data);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::Experimental::ClientDependencies const& data);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPropertyObject();

    MCNAPI static void** $vftableForIQuery();
    // NOLINTEND
};

} // namespace OreUI::Experimental
