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
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
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
    // prevent constructor by default
    ScreenReaderCommandGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScreenReaderCommandGroup(::OreUI::ClientDependencies const& client, ::OreUI::GameDependencies const& game);

    MCNAPI void _clear() const;

    MCNAPI void _read(
        ::std::string const&     text,
        ::ProfanityFilterContext context,
        bool                     interruptable,
        bool                     required,
        bool                     background,
        bool                     playWhenEnabled
    ) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::ClientDependencies const& client, ::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
