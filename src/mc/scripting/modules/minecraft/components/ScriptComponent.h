#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/WeakLifetimeScope.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope const> mScope;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string> const> mId;
    // NOLINTEND

public:
    // prevent constructor by default
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
    MCAPI ScriptComponent(::Scripting::WeakLifetimeScope const& scope, ::std::optional<::std::string> id);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Scripting::WeakLifetimeScope const& scope, ::std::optional<::std::string> id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string const& $getTypeId_V1() const;

    MCFOLD ::std::string const& $getTypeId_V2() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
