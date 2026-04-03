#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
namespace OreUI { class InvocationStatus; }
namespace Realms { class AdminLogManager; }
// clang-format on

namespace OreUI {

class AdminLogCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::AdminLogCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::AdminLogManager>>        mAdminLogManager;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, ::std::string>> mFetchAdminLogs;
    // NOLINTEND

public:
    // prevent constructor by default
    AdminLogCommandGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AdminLogCommandGroup() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit AdminLogCommandGroup(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void fetchAdminLogsImpl(
        ::Realms::AdminLogManager& adminLogManager,
        ::OreUI::InvocationStatus  commandStatus,
        ::std::string const&       realmId
    );
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
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
