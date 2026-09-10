#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/FetchStatus.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class LayoutServiceSystem;
namespace OreUI { class FabObject; }
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class FabQuery : public ::OreUI::QueryBase<::OreUI::FabQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::OreUI::FetchStatus>>             mFetchStatus;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::FabObject>>                 mFab;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::LayoutServiceSystem>> mLayoutServiceSystem;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                                         mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    FabQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FabQuery() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FabQuery(::OreUI::GameDependencies const& game, ::std::string const& fabId);

    MCAPI void _fetchFab(::std::string const& fabId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game, ::std::string const& fabId);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPropertyObject();

    MCNAPI static void** $vftableForIQuery();
    // NOLINTEND
};

} // namespace OreUI
