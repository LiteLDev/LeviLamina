#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkad83bc;
    ::ll::UntypedStorage<8, 40> mUnkf28bfb;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptComponent& operator=(ScriptComponent const&);
    ScriptComponent(ScriptComponent const&);
    ScriptComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptComponent();

    virtual ::std::string const& getTypeId_V1() const;

    virtual ::std::string const& getTypeId_V2() const;

    virtual bool _isValid() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptComponent(::Scripting::WeakLifetimeScope const& scope, ::std::optional<::std::string> id);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::WeakLifetimeScope const& scope, ::std::optional<::std::string> id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string const& $getTypeId_V1() const;

    MCNAPI ::std::string const& $getTypeId_V2() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
