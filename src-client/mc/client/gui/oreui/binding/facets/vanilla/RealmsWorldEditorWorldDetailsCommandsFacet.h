#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsWorldEditor; }
// clang-format on

namespace OreUI {

class RealmsWorldEditorWorldDetailsCommandsFacet
: public ::OreUI::FacetBase_DEPRECATED<::OreUI::RealmsWorldEditorWorldDetailsCommandsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::Realms::RealmsWorldEditor>> mRealmsWorldEditor;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsWorldEditorWorldDetailsCommandsFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void saveRealmDetails(::std::string const& realmId) const;

    MCNAPI void setRealmCheatsEnabled(bool cheatsEnabled) const;

    MCNAPI void setRealmDaylightCycle(int daylightCycle) const;

    MCNAPI void setRealmWorldDifficulty(int difficulty) const;

    MCNAPI void setRealmWorldGameType(int gameType) const;

    MCNAPI void setRealmWorldIsHardcore(bool isHardcore) const;

    MCNAPI void setRealmWorldName(::std::string const& name) const;

    MCNAPI void setRealmsAreTexturePacksRequired(bool areTexturesRequired) const;

    MCNAPI void setRealmsDescription(::std::string const& description) const;

    MCNAPI void setRealmsName(::std::string const& name) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
