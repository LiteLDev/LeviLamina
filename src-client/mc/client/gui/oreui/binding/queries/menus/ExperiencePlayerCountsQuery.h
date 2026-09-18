#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/FetchStatus.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class GatheringManager;
namespace OreUI { class ExperiencePlayerCountObject; }
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class ExperiencePlayerCountsQuery : public ::OreUI::QueryBase<::OreUI::ExperiencePlayerCountsQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::OreUI::FetchStatus, ::OreUI::FetchStatus>> mFetchStatus;
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::PropertyVector<::OreUI::ExperiencePlayerCountObject, ::OreUI::ExperiencePlayerCountObject>>
                                                                                 mPlayerCounts;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::GatheringManager>> mGatheringManager;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                                      mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    ExperiencePlayerCountsQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ExperiencePlayerCountsQuery() /*override*/ = default;

    virtual void update(double) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ExperiencePlayerCountsQuery(::OreUI::GameDependencies const& game);

    MCAPI void _fetchPlayerCounts();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $update(double);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIQuery();

    MCNAPI static void** $vftableForPropertyObject();
    // NOLINTEND
};

} // namespace OreUI
