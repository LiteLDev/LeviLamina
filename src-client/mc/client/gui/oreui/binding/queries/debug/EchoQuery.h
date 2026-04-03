#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"

namespace OreUI::Debug {

class EchoQuery : public ::OreUI::QueryBase<::OreUI::Debug::EchoQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int64>> mNumber;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EchoQuery() /*override*/ = default;
    // NOLINTEND
};

} // namespace OreUI::Debug
