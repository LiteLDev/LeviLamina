#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

namespace OreUI {

class ContentLogCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::ContentLogCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::string, int>> mLog;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void log(::std::string const& message, int verbosity);
    // NOLINTEND
};

} // namespace OreUI
