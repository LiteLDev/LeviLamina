#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
// clang-format on

namespace OreUI {

class TtsCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::TtsCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, bool>> mSetEnabled;
    // NOLINTEND

public:
    // prevent constructor by default
    TtsCommandGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit TtsCommandGroup(::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client);
    // NOLINTEND
};

} // namespace OreUI
