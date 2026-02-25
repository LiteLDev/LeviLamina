#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { struct LanWorld; }
namespace World { class LanServerWorldList; }
// clang-format on

namespace OreUI {

class LanWorldListFacet : public ::OreUI::FacetBase<::OreUI::LanWorldListFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                              mIsDirty;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::LanWorld>> mLanWorlds;
    ::ll::TypedStorage<8, 8, ::World::LanServerWorldList&>      mLanServerWorldList;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>  mOnChangeSubscriber;
    // NOLINTEND

public:
    // prevent constructor by default
    LanWorldListFacet& operator=(LanWorldListFacet const&);
    LanWorldListFacet(LanWorldListFacet const&);
    LanWorldListFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LanWorldListFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit LanWorldListFacet(::World::LanServerWorldList& lanServerWorldList);

    MCFOLD ::std::vector<::OreUI::LanWorld>& getLanWorlds();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::World::LanServerWorldList& lanServerWorldList);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
