#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
namespace StorageManager { class ContentItemProvider; }
// clang-format on

namespace OreUI {

class StorageManagerCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::StorageManagerCommandGroup> {
public:
    // StorageManagerCommandGroup inner types define
    using ListType = ::std::string;

    using ContentId = ::std::string;

    using SelectValue = bool;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::StorageManager::ContentItemProvider>()>>
        mStorageContentItemProviderFunc;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, ::std::string, ::std::string, bool>> mSetSelected;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, ::std::string, bool>>                mSetAllSelected;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, ::std::string>> mDeleteSelectedItems;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageManagerCommandGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StorageManagerCommandGroup() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit StorageManagerCommandGroup(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND
};

} // namespace OreUI
