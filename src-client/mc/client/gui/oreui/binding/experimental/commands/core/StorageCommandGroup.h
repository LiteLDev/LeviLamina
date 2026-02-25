#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/experimental/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/experimental/methods/CallableImpl.h"
#include "mc/deps/core/platform/FileStorageDirectory.h"

// auto generated forward declare list
// clang-format off
class IOptions;
// clang-format on

namespace OreUI::Experimental {

class StorageCommandGroup : public ::OreUI::Experimental::CommandGroupBase<::OreUI::Experimental::StorageCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::IOptions>> mOptions;
    ::ll::TypedStorage<8, 136, ::OreUI::Experimental::Detail::CallableImpl<void, ::FileStorageDirectory>>
        mChangeStorage;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StorageCommandGroup() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI::Experimental
