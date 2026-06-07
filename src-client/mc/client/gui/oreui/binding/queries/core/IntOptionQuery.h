#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/OptionProperty.h"
#include "mc/options/option_types/OptionID.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
// clang-format on

namespace OreUI {

class IntOptionQuery : public ::OreUI::QueryBase<::OreUI::IntOptionQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 120, ::OreUI::OptionProperty<int64>> mValue;
    // NOLINTEND

public:
    // prevent constructor by default
    IntOptionQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI IntOptionQuery(::OreUI::ClientDependencies const& client, ::OptionID id);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client, ::OptionID id);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIQuery();

    MCNAPI static void** $vftableForPropertyObject();
    // NOLINTEND
};

} // namespace OreUI
