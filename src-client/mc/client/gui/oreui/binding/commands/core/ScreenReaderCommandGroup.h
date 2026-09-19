#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"
#include "mc/util/ProfanityFilterContext.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class ITTSEventManager;
// clang-format on

namespace OreUI {

class ScreenReaderCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::ScreenReaderCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::ITTSEventManager>>    mTTSEventManager;
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::AppPlatform>> mAppPlatform;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>>   mClear;
    ::ll::TypedStorage<
        8,
        168,
        ::OreUI::Detail::CallableImpl<void, ::std::string, ::ProfanityFilterContext, bool, bool, bool, bool>>
        mRead;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _clear() const;

    MCAPI void _read(
        ::std::string const&     text,
        ::ProfanityFilterContext context,
        bool                     interruptable,
        bool                     required,
        bool                     background,
        bool                     playWhenEnabled
    ) const;
    // NOLINTEND
};

} // namespace OreUI
