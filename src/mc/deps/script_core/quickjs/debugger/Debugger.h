#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/IDebuggerController.h"

// auto generated forward declare list
// clang-format off
struct JSContext;
// clang-format on

namespace Scripting::QuickJS {

class Debugger : public ::Scripting::IDebuggerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkae28c9;
    ::ll::UntypedStorage<8, 8>  mUnke101ac;
    ::ll::UntypedStorage<8, 64> mUnk84399a;
    ::ll::UntypedStorage<8, 64> mUnk7c3698;
    ::ll::UntypedStorage<8, 64> mUnkbbe543;
    ::ll::UntypedStorage<8, 8>  mUnkfa6a1c;
    // NOLINTEND

public:
    // prevent constructor by default
    Debugger& operator=(Debugger const&);
    Debugger(Debugger const&);
    Debugger();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Debugger() /*override*/ = default;

    virtual bool attach(bool, ::std::optional<::std::string>, ::std::function<void(::std::string_view)>) /*override*/;

    virtual void detach() /*override*/;

    virtual bool closed() const /*override*/;

    virtual void pumpMessages() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Scripting::QuickJS
