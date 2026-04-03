#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"
#include "mc/util/ProfanityFilterContext.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
struct ITTSEventManager;
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
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void>>   mClear;
    ::ll::TypedStorage<
        8,
        136,
        ::OreUI::Detail::
            CallableImpl<void, ::std::string, ::ProfanityFilterContext, bool, ::std::string, bool, bool, bool>>
        mRead;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenReaderCommandGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScreenReaderCommandGroup() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScreenReaderCommandGroup(::OreUI::ClientDependencies const& client, ::OreUI::GameDependencies const& game);

    MCAPI void _clear() const;

    MCAPI void _read(
        ::std::string const&     text,
        ::ProfanityFilterContext context,
        bool                     interruptable,
        ::std::string const&     id,
        bool                     required,
        bool                     background,
        bool                     playWhenEnabled
    ) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client, ::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
