#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace Editor { class ServiceProviderCollection; }
namespace Editor::API { class EditorExtension; }
namespace Editor::Services { class BrushShapeManagerServiceProvider; }
namespace Editor::Services { class ClipboardServiceProvider; }
namespace Editor::Services { class EditorBlockPaletteServiceProvider; }
namespace Editor::Services { class EditorSettingsServiceProvider; }
namespace Editor::Services { class TransactionManagerServiceProvider; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::API {

class EditorExtensionContext : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk3fe323;
    ::ll::UntypedStorage<8, 24> mUnk980b6f;
    ::ll::UntypedStorage<8, 32> mUnk404961;
    ::ll::UntypedStorage<8, 8>  mUnk62a176;
    ::ll::UntypedStorage<8, 32> mUnke0dd26;
    ::ll::UntypedStorage<8, 32> mUnkcbf87c;
    ::ll::UntypedStorage<8, 32> mUnk39a1b2;
    ::ll::UntypedStorage<8, 32> mUnkba0f2a;
    ::ll::UntypedStorage<8, 32> mUnkda10a3;
    ::ll::UntypedStorage<8, 32> mUnk7daadb;
    ::ll::UntypedStorage<8, 32> mUnkedd544;
    ::ll::UntypedStorage<8, 32> mUnk39e4e1;
    ::ll::UntypedStorage<8, 32> mUnk5d75b6;
    ::ll::UntypedStorage<8, 32> mUnke39f9e;
    ::ll::UntypedStorage<8, 32> mUnk700723;
    ::ll::UntypedStorage<8, 32> mUnk382c65;
    ::ll::UntypedStorage<8, 32> mUnk3c9355;
    ::ll::UntypedStorage<8, 32> mUnk1a5b9d;
    ::ll::UntypedStorage<1, 1>  mUnk907821;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorExtensionContext& operator=(EditorExtensionContext const&);
    EditorExtensionContext(EditorExtensionContext const&);
    EditorExtensionContext();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EditorExtensionContext() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EditorExtensionContext(
        ::Player&                                              player,
        ::Editor::ServiceProviderCollection&                   serviceProviders,
        ::Editor::Services::EditorSettingsServiceProvider*     settingsService,
        ::Editor::Services::TransactionManagerServiceProvider* transactionManagerServiceProvider,
        ::Editor::Services::ClipboardServiceProvider*          clipboardService,
        ::Editor::Services::EditorBlockPaletteServiceProvider* blockPaletteService,
        ::Editor::Services::BrushShapeManagerServiceProvider*  brushShapeService,
        ::Scripting::WeakLifetimeScope                         scope,
        ::Editor::API::EditorExtension&                        extension
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Player&                                              player,
        ::Editor::ServiceProviderCollection&                   serviceProviders,
        ::Editor::Services::EditorSettingsServiceProvider*     settingsService,
        ::Editor::Services::TransactionManagerServiceProvider* transactionManagerServiceProvider,
        ::Editor::Services::ClipboardServiceProvider*          clipboardService,
        ::Editor::Services::EditorBlockPaletteServiceProvider* blockPaletteService,
        ::Editor::Services::BrushShapeManagerServiceProvider*  brushShapeService,
        ::Scripting::WeakLifetimeScope                         scope,
        ::Editor::API::EditorExtension&                        extension
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::API
