#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
namespace OreUI { class InvocationStatus; }
namespace Realms { class IRealmsMembers; }
namespace Realms { struct RealmId; }
// clang-format on

namespace OreUI {

class RealmsMembersCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::RealmsMembersCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Realms::IRealmsMembers>> mRealmsMembers;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                                            mTaskGroup;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, int64, ::std::string, ::std::vector<::std::string>>>
        mAddRealmMembers;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsMembersCommandGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsMembersCommandGroup() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmsMembersCommandGroup(::OreUI::GameDependencies const& game);

    MCAPI void _addMembersImpl(
        ::OreUI::InvocationStatus           status,
        ::Realms::RealmId                   realmId,
        ::std::string const&                initiatorXuid,
        ::std::vector<::std::string> const& xuidsToAdd
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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
