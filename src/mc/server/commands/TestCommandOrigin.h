#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandOriginType.h"
#include "mc/server/commands/CommandPermissionLevel.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class CompoundTag;
class Dimension;
class Level;
class NetworkIdentifier;
class Vec2;
class Vec3;
struct CommandOriginData;
// clang-format on

class TestCommandOrigin : public ::CommandOrigin {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk940085;
    ::ll::UntypedStorage<8, 8>   mUnk530d09;
    ::ll::UntypedStorage<8, 176> mUnk8271b8;
    ::ll::UntypedStorage<1, 1>   mUnk6bdb4f;
    // NOLINTEND

public:
    // prevent constructor by default
    TestCommandOrigin& operator=(TestCommandOrigin const&);
    TestCommandOrigin(TestCommandOrigin const&);
    TestCommandOrigin();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TestCommandOrigin() /*override*/ = default;

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

    virtual ::NetworkIdentifier const& getSourceId() const /*override*/;

    virtual ::SubClientId getSourceSubId() const /*override*/;

    virtual ::CommandOriginType getOriginType() const /*override*/;

    virtual ::CommandOriginData toCommandOriginData() const /*override*/;

    virtual ::CompoundTag serialize() const /*override*/;

    virtual bool isValid() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
