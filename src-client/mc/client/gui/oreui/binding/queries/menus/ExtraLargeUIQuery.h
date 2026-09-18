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

class ExtraLargeUIQuery : public ::OreUI::QueryBase<::OreUI::ExtraLargeUIQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 120, ::OreUI::OptionProperty<bool>> mEnabled;
    // NOLINTEND

public:
    // prevent constructor by default
    ExtraLargeUIQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ExtraLargeUIQuery(::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPropertyObject();

    MCNAPI static void** $vftableForIQuery();
    // NOLINTEND
};

} // namespace OreUI
