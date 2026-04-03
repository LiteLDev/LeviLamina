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

class FeatureFlagQuery : public ::OreUI::QueryBase<::OreUI::FeatureFlagQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>     mEnabled;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mFlags;
    // NOLINTEND

public:
    // prevent constructor by default
    FeatureFlagQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FeatureFlagQuery() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FeatureFlagQuery(
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

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPropertyObject();

    MCNAPI static void** $vftableForIQuery();
    // NOLINTEND
};

} // namespace OreUI
