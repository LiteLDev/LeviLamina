#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsWorldEditor; }
// clang-format on

namespace OreUI {

class RealmsWorldEditorWorldDetailsCommandsFacet
: public ::OreUI::FacetBase<::OreUI::RealmsWorldEditorWorldDetailsCommandsFacet> {
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
    MCAPI void saveRealmDetails(::std::string const& realmId) const;

    MCAPI void setRealmsAreTexturePacksRequired(bool areTexturesRequired) const;

    MCAPI void setRealmsDescription(::std::string const& description) const;

    MCAPI void setRealmsName(::std::string const& name) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
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
