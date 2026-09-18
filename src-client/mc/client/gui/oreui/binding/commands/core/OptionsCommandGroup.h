#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
// clang-format on

namespace OreUI {

class OptionsCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::OptionsCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IOptionRegistry&>                                                  mOptions;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::string, float>>         mSetFloatOption;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::string, bool>>          mSetBoolOption;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::string, int>>           mSetIntOption;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::string, ::std::string>> mSetStringOption;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::string>>                mResetOption;
    // NOLINTEND

public:
    // prevent constructor by default
    OptionsCommandGroup& operator=(OptionsCommandGroup const&);
    OptionsCommandGroup(OptionsCommandGroup const&);
    OptionsCommandGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _resetOption(::std::string const& name);

    MCAPI void _setBoolOption(::std::string const& name, bool value);

    MCAPI void _setFloatOption(::std::string const& name, float value);

    MCAPI void _setIntOption(::std::string const& name, int value);

    MCAPI void _setStringOption(::std::string const& name, ::std::string const& value);
    // NOLINTEND
};

} // namespace OreUI
