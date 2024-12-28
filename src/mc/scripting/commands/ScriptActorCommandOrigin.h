#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/commands/ScriptCommandOrigin.h"
#include "mc/server/commands/CommandPermissionLevel.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CommandOrigin;
// clang-format on

class ScriptActorCommandOrigin : public ::ScriptCommandOrigin {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk3b91a7;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorCommandOrigin& operator=(ScriptActorCommandOrigin const&);
    ScriptActorCommandOrigin(ScriptActorCommandOrigin const&);
    ScriptActorCommandOrigin();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptActorCommandOrigin() /*override*/;

    // vIndex: 8
    virtual ::Actor* getEntity() const /*override*/;

    // vIndex: 10
    virtual ::std::unique_ptr<::CommandOrigin> clone() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptActorCommandOrigin(
        ::Actor const&                              actor,
        ::std::function<void(int, ::std::string&&)> outputCallback,
        ::std::optional<::CommandPermissionLevel>   permissionLevel
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Actor const&                              actor,
        ::std::function<void(int, ::std::string&&)> outputCallback,
        ::std::optional<::CommandPermissionLevel>   permissionLevel
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Actor* $getEntity() const;

    MCAPI ::std::unique_ptr<::CommandOrigin> $clone() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
