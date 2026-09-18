#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"
#include "mc/deps/core/platform/FileStorageDirectory.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
// clang-format on

namespace OreUI {

class StorageCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::StorageCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::IOptionRegistry>>                   mOptions;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::FileStorageDirectory>> mChangeStorage;
    // NOLINTEND
};

} // namespace OreUI
