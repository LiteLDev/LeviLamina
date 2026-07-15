#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandOriginType.h"
#include "mc/server/commands/CommandPermissionLevel.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class Dimension;
class Level;
class Vec2;
class Vec3;
// clang-format on

class ScriptDebuggerCommandOrigin : public ::CommandOrigin {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk2a0cc2;
    ::ll::UntypedStorage<1, 1>  mUnkb047b6;
    ::ll::UntypedStorage<4, 4>  mUnkfef23a;
    ::ll::UntypedStorage<8, 64> mUnk494336;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDebuggerCommandOrigin& operator=(ScriptDebuggerCommandOrigin const&);
    ScriptDebuggerCommandOrigin(ScriptDebuggerCommandOrigin const&);
    ScriptDebuggerCommandOrigin();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptDebuggerCommandOrigin() /*override*/ = default;

    virtual ::std::string const& getRequestId() const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual ::BlockPos getBlockPosition() const /*override*/;

    virtual ::Vec3 getWorldPosition() const /*override*/;

    virtual ::std::optional<::Vec2> getRotation() const /*override*/;

    virtual ::Level* getLevel() const /*override*/;

    virtual ::Dimension* getDimension() const /*override*/;

    virtual ::Actor* getEntity() const /*override*/;

    virtual ::CommandPermissionLevel getPermissionsLevel() const /*override*/;

    virtual ::std::unique_ptr<::CommandOrigin> clone() const /*override*/;

    virtual bool canUseCommandsWithoutCheatsEnabled() const /*override*/;

    virtual bool isSelectorExpansionAllowed() const /*override*/;

    virtual ::CommandOriginType getOriginType() const /*override*/;

    virtual void handleCommandOutputCallback(int, ::std::string&&) const /*override*/;

    virtual bool isValid() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
