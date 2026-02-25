#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/experimental/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/experimental/methods/CallableImpl.h"

namespace OreUI::Experimental {

class LanguageCommandGroup
: public ::OreUI::Experimental::CommandGroupBase<::OreUI::Experimental::LanguageCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        136,
        ::OreUI::Experimental::Detail::CallableImpl<::std::string, ::std::string, ::std::vector<::std::string>>>
        mTranslate;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LanguageCommandGroup() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI::Experimental
