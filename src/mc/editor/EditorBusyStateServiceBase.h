#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/services/IEditorService.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
// clang-format on

namespace Editor::Services {

class EditorBusyStateServiceBase : public ::Editor::Services::IEditorService {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 120> mUnka3c9cc;
    ::ll::UntypedStorage<8, 16>  mUnka08aa6;
    ::ll::UntypedStorage<8, 16>  mUnke93210;
    ::ll::UntypedStorage<1, 1>   mUnkf75508;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorBusyStateServiceBase& operator=(EditorBusyStateServiceBase const&);
    EditorBusyStateServiceBase(EditorBusyStateServiceBase const&);
    EditorBusyStateServiceBase();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorBusyStateServiceBase() /*override*/;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual bool _writeCursor(bool shown) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EditorBusyStateServiceBase(
        ::Editor::ServiceProviderCollection&                       providers,
        ::std::function<::std::chrono::steady_clock::time_point()> now
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Editor::ServiceProviderCollection&                       providers,
        ::std::function<::std::chrono::steady_clock::time_point()> now
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $ready();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Services
