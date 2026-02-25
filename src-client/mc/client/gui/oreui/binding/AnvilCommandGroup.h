#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/experimental/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/experimental/methods/CallableImpl.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace GameplayUI { struct GameplayUIContext; }
namespace OreUI::Experimental { class ClientDependencies; }
namespace OreUI::Experimental { class GameDependencies; }
// clang-format on

namespace OreUI::Experimental {

class AnvilCommandGroup : public ::OreUI::Experimental::CommandGroupBase<::OreUI::Experimental::AnvilCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::GameplayUI::GameplayUIContext>>    mContext;
    ::ll::TypedStorage<8, 136, ::OreUI::Experimental::Detail::CallableImpl<void, ::std::string>> mSetPreviewItemName;
    // NOLINTEND

public:
    // prevent constructor by default
    AnvilCommandGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AnvilCommandGroup() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AnvilCommandGroup(
        ::OreUI::Experimental::GameDependencies const&   game,
        ::OreUI::Experimental::ClientDependencies const& client
    );

    MCAPI void setPreviewItemName(::std::string name);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::OreUI::Experimental::GameDependencies const& game, ::OreUI::Experimental::ClientDependencies const& client);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI::Experimental
