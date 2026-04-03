#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

namespace OreUI {

class LanguageCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::LanguageCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::
        TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<::std::string, ::std::string, ::std::vector<::std::string>>>
                                                                                    mTranslate;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<::std::string, int64>> mFormatDate;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<::std::string, int64>> mGetHowLongAgoAsString;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LanguageCommandGroup() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LanguageCommandGroup();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
