#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"
#include "mc/deps/core/platform/FileStorageDirectory.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
namespace OreUI { class ClientDependencies; }
// clang-format on

namespace OreUI {

class StorageCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::StorageCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::IOptionRegistry>>                   mOptions;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, ::FileStorageDirectory>> mChangeStorage;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageCommandGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit StorageCommandGroup(::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
