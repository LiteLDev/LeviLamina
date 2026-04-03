#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/OptionProperty.h"

namespace OreUI {

class FloatOptionQuery : public ::OreUI::QueryBase<::OreUI::FloatOptionQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 120, ::OreUI::OptionProperty<float>> mValue;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FloatOptionQuery() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIQuery();

    MCNAPI static void** $vftableForPropertyObject();
    // NOLINTEND
};

} // namespace OreUI
