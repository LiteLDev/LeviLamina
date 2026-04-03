#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class AdminLogData; }
namespace OreUI { class GameDependencies; }
namespace Realms { struct AdminLogManager; }
// clang-format on

namespace OreUI {

class AdminLogQuery : public ::OreUI::QueryBase<::OreUI::AdminLogQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::AdminLogManager>> mAdminLogManager;
    ::ll::TypedStorage<8, 120, ::OreUI::PropertyVector<::OreUI::AdminLogData, ::std::allocator<::OreUI::AdminLogData>>>
                                                               mAdminLogDataList;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mAdminLogsChangedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    AdminLogQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AdminLogQuery() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit AdminLogQuery(::OreUI::GameDependencies const& game);

    MCAPI void _updateProperties();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIQuery();

    MCNAPI static void** $vftableForPropertyObject();
    // NOLINTEND
};

} // namespace OreUI
