#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class Level;
class Minecraft;
// clang-format on

namespace OreUI {

class ActiveLevelHardcoreModeFacet : public ::OreUI::FacetBase<::OreUI::ActiveLevelHardcoreModeFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                             mIsDirty;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>            mIsHardcore;
    ::ll::TypedStorage<8, 8, ::Level const*>                   mCurrentLevel;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mLevelSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mIsHardcoreSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    ActiveLevelHardcoreModeFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;

    virtual ~ActiveLevelHardcoreModeFacet() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ActiveLevelHardcoreModeFacet(::Bedrock::NotNullNonOwnerPtr<::Minecraft const> minecraft);

    MCAPI void _onLevelChanged(::Level const* const level);

    MCAPI ::std::optional<bool> const& getIsHardcore() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::Minecraft const> minecraft);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
