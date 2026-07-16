#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ClientLevel;
namespace Social { class MultiplayerServiceManager; }
// clang-format on

namespace OreUI {

class InGameFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::InGameFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                               mIsInGame;
    ::ll::TypedStorage<1, 1, bool>                               mIsHosting;
    ::ll::TypedStorage<1, 1, bool>                               mIsInMultiplayerSession;
    ::ll::TypedStorage<8, 32, ::std::string>                     mCurrentLevelId;
    ::ll::TypedStorage<8, 64, ::std::function<::ClientLevel*()>> mGetCurrentLevel;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager>>
        mMultiplayerServiceManager;
    // NOLINTEND

public:
    // prevent constructor by default
    InGameFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InGameFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI InGameFacet(
        ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager> multiplayerServiceManager,
        ::std::function<::ClientLevel*()>                                  getCurrentLevel
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager> multiplayerServiceManager,
        ::std::function<::ClientLevel*()>                                  getCurrentLevel
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
