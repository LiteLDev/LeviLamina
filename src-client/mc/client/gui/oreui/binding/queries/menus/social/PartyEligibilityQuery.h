#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"
#include "mc/client/gui/oreui/binding/queries/menus/social/PartyEligibilityOutcome.h"
#include "mc/deps/core/threading/TaskGroup.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class PartyEligibilityQuery : public ::OreUI::QueryBase<::OreUI::PartyEligibilityQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::OreUI::PartyEligibilityOutcome, ::OreUI::PartyEligibilityOutcome>>
                                                                                      mOutcome;
    ::ll::TypedStorage<8, 120, ::OreUI::PropertyVector<::std::string, ::std::string>> mIneligibleXuids;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                                           mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    PartyEligibilityQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PartyEligibilityQuery() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PartyEligibilityQuery(
        ::OreUI::GameDependencies const& game,
        ::std::string                    experienceId,
        ::std::string                    partyId,
        bool                             isTransfer,
        ::std::string                    worldId
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::OreUI::GameDependencies const& game,
        ::std::string                    experienceId,
        ::std::string                    partyId,
        bool                             isTransfer,
        ::std::string                    worldId
    );
    // NOLINTEND
};

} // namespace OreUI
