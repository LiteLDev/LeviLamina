#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/screens/models/ContentType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsWorldPackEditor; }
// clang-format on

namespace OreUI {

class RealmsWorldPackEditorCommandsFacet
: public ::OreUI::FacetBase_DEPRECATED<::OreUI::RealmsWorldPackEditorCommandsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Realms::RealmsWorldPackEditor>> mRealmsWorldPackEditor;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsWorldPackEditorCommandsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsWorldPackEditorCommandsFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RealmsWorldPackEditorCommandsFacet(
        ::Bedrock::NotNullNonOwnerPtr<::Realms::RealmsWorldPackEditor> realmsWorldPackEditor
    );

    MCNAPI void activatePack(::std::string const& packIdVersion, ::ContentType packType, bool ignoreWarnings) const;

    MCNAPI void changePackPriority(
        ::std::string const& packIdVersion,
        ::ContentType        packType,
        int                  fromPosition,
        int                  toPosition
    ) const;

    MCNAPI void clearChangePackPriorityError() const;

    MCNAPI void clearPackApplicationError() const;

    MCNAPI void clearPendingPackAction() const;

    MCNAPI void clearSavePackSettingsState() const;

    MCNAPI void continuePendingPackAction() const;

    MCNAPI void deactivatePack(::std::string const& packIdVersion, ::ContentType packType, bool ignoreWarnings) const;

    MCNAPI void reloadPacks() const;

    MCNAPI void savePackSettings() const;

    MCNAPI void setEditorEnabled(bool isEditorEnabled) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::Realms::RealmsWorldPackEditor> realmsWorldPackEditor);
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
