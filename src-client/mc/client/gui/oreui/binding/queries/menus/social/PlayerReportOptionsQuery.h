#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"
#include "mc/client/gui/oreui/binding/queries/menus/social/PlayerReportOptionsStatus.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class PlayerReportHandler;
namespace OreUI { class ClientDependencies; }
namespace OreUI { class PlayerReportOption; }
namespace OreUI { class PlayerReportReasonOptionsByArea; }
// clang-format on

namespace OreUI {

class PlayerReportOptionsQuery : public ::OreUI::QueryBase<::OreUI::PlayerReportOptionsQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::PlayerReportHandler>> mPlayerReportHandler;
    ::ll::
        TypedStorage<8, 176, ::OreUI::Property<::OreUI::PlayerReportOptionsStatus, ::OreUI::PlayerReportOptionsStatus>>
            mStatus;
    ::ll::TypedStorage<8, 120, ::OreUI::PropertyVector<::OreUI::PlayerReportOption, ::OreUI::PlayerReportOption>>
        mReportAreaOptions;
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::PropertyVector<::OreUI::PlayerReportReasonOptionsByArea, ::OreUI::PlayerReportReasonOptionsByArea>>
                                                               mReportReasonOptionsByArea;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mReportOptionsChangedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerReportOptionsQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PlayerReportOptionsQuery(::OreUI::ClientDependencies const& client);

    MCAPI void _updateProperties();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client);
    // NOLINTEND
};

} // namespace OreUI
