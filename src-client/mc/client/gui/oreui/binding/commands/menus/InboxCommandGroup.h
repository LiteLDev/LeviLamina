#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class InboxSurface;
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class InboxCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::InboxCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::InboxSurface>> mInboxSurface;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, ::std::string, ::std::string, ::std::string>>
        mReportClick;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, ::std::string, ::std::string, ::std::string>>
        mReportSubmit;
    // NOLINTEND

public:
    // prevent constructor by default
    InboxCommandGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit InboxCommandGroup(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND
};

} // namespace OreUI
