#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/util/ClipboardProxy.h"

// auto generated forward declare list
// clang-format off
namespace ApplicationSignal { class ClipboardCopy; }
namespace ApplicationSignal { class ClipboardPasteRequest; }
// clang-format on

namespace OreUI {

class ClipboardFacet : public ::OreUI::FacetBase<::OreUI::ClipboardFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        8,
        ::ClipboardProxy<::ApplicationSignal::ClipboardCopy, ::ApplicationSignal::ClipboardPasteRequest>&>
                                   mClipboardManager;
    ::ll::TypedStorage<1, 1, bool> mIsDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    ClipboardFacet& operator=(ClipboardFacet const&);
    ClipboardFacet(ClipboardFacet const&);
    ClipboardFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;

    virtual ~ClipboardFacet() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void copyToClipboard(::std::string const& text);

    MCAPI bool isClipboardCopySupported();
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
