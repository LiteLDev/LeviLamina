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
namespace Realms { class RealmsSavesManager; }
// clang-format on

namespace OreUI {

class RealmsSavesCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::RealmsSavesCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Realms::RealmsSavesManager>> mRealmsSavesManager;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                                                mTaskGroup;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, int64, int>>            mFetchBackupList;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, int64, int>>            mFetchActiveWorldSize;
    ::ll::TypedStorage<
        8,
        136,
        ::OreUI::Detail::CallableImpl<void, int64, int, ::std::string, ::std::vector<::std::string>>>
        mSaveBackup;
    ::ll::TypedStorage<
        8,
        136,
        ::OreUI::Detail::CallableImpl<void, int64, int, ::std::string, ::std::string, ::std::vector<::std::string>>>
                                                                                               mSaveAutoBackup;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, int64, int, ::std::string>> mRestoreBackup;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, int64, int, ::std::string>> mDeleteBackup;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, int64, int, ::std::string, ::std::string>>
        mRenameBackup;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsSavesCommandGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsSavesCommandGroup() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmsSavesCommandGroup(::OreUI::GameDependencies const& game);
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
};

} // namespace OreUI
