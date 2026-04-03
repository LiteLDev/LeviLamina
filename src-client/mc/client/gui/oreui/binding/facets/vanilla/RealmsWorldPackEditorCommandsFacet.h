#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/gui/screens/models/ContentType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsWorldPackEditor; }
// clang-format on

namespace OreUI {

class RealmsWorldPackEditorCommandsFacet : public ::OreUI::FacetBase<::OreUI::RealmsWorldPackEditorCommandsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Realms::RealmsWorldPackEditor>> mRealmsWorldPackEditor;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsWorldPackEditorCommandsFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void activatePack(::std::string const& packIdVersion, ::ContentType packType, bool ignoreWarnings) const;

    MCAPI void changePackPriority(
        ::std::string const& packIdVersion,
        ::ContentType        packType,
        int                  fromPosition,
        int                  toPosition
    ) const;

    MCAPI void clearChangePackPriorityError() const;

    MCFOLD void clearPackApplicationError() const;

    MCFOLD void clearPendingPackAction() const;

    MCAPI void clearRealmsWorldPackEditor() const;

    MCAPI void clearSavePackSettingsState() const;

    MCAPI void continuePendingPackAction() const;

    MCAPI void deactivatePack(::std::string const& packIdVersion, ::ContentType packType, bool ignoreWarnings) const;

    MCAPI void savePackSettings() const;
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
