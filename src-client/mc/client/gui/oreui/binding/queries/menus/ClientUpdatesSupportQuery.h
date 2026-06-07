#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class ClientUpdatesSupportQuery : public ::OreUI::QueryBase<::OreUI::ClientUpdatesSupportQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>> mIsLaunchStoreForClientUpdatesSupported;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientUpdatesSupportQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ClientUpdatesSupportQuery(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPropertyObject();

    MCNAPI static void** $vftableForIQuery();
    // NOLINTEND
};

} // namespace OreUI
