#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class StaticFeatureFlagQuery : public ::OreUI::QueryBase<::OreUI::StaticFeatureFlagQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>     mEnabled;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mFlags;
    // NOLINTEND

public:
    // prevent constructor by default
    StaticFeatureFlagQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StaticFeatureFlagQuery(
        ::OreUI::ClientDependencies const& client,
        ::OreUI::GameDependencies const&   game,
        ::std::string const&               flag
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::OreUI::ClientDependencies const& client, ::OreUI::GameDependencies const& game, ::std::string const& flag);
    // NOLINTEND
};

} // namespace OreUI
