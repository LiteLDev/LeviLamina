#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
// clang-format on

namespace OreUI {

class XboxLiveUserQuery : public ::OreUI::QueryBase<::OreUI::XboxLiveUserQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>> mGamertag;
    // NOLINTEND

public:
    // prevent constructor by default
    XboxLiveUserQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit XboxLiveUserQuery(::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client);
    // NOLINTEND
};

} // namespace OreUI
