#pragma once

#include <memory>
#include <optional>

#include "../Core/mce.h"
#include "../Math/BlockPos.h"
#include "../Math/Vec3.h"
#include "../dll.h"
#include "CommandPermissionLevel.h"

enum class CommandOriginType : char {
    Player           = 0,
    Block            = 1,
    MinecartBlock    = 2,
    DevConsole       = 3,
    Test             = 4,
    AutomationPlayer = 5,
    ClientAutomation = 6,
    DedicatedServer  = 7,
    Actor            = 8,
    Virtual          = 9,
    GameArgument     = 10,
    ActorServer      = 11,
    Precompiled      = 12,
    GameMaster       = 13,
    Script           = 14,
};

struct CommandOriginData;
class Level;
class Dimension;
class Actor;
enum class AbilitiesIndex;
class NetworkIdentifier;
namespace Json {
class Value;
}

class CommandOrigin {
public:
    virtual ~CommandOrigin() {
    }
    virtual std::string const&             getRequestId() const        = 0;
    virtual std::string                    getName() const             = 0;
    virtual BlockPos                       getBlockPosition() const    = 0;
    virtual Vec3                           getWorldPosition() const    = 0;
    virtual Level*                         getLevel() const            = 0;
    virtual Dimension*                     getDimension() const        = 0;
    virtual Actor*                         getEntity() const           = 0;
    virtual CommandPermissionLevel         getPermissionsLevel() const = 0;
    virtual std::unique_ptr<CommandOrigin> clone() const               = 0;
    virtual std::optional<BlockPos>        getCursorHitBlockPos() const;
    virtual std::optional<Vec3>            getCursorHitPos() const;
    virtual bool                           hasChatPerms() const;
    virtual bool                           hasTellPerms() const;
    virtual bool                           canUseAbility(AbilitiesIndex) const;
    virtual bool                           isWorldBuilder() const;
    virtual bool                           canUseCommandsWithoutCheatsEnabled() const;
    virtual bool                           isSelectorExpansionAllowed() const;
    virtual NetworkIdentifier const&       getSourceId() const;
    virtual unsigned char                  getSourceSubId() const;
    virtual CommandOrigin const&           getOutputReceiver() const;
    virtual struct CommandOriginIdentity   getIdentity() const;
    virtual CommandOriginType              getOriginType() const = 0;
    virtual CommandOriginData              toCommandOriginData() const;
    virtual mce::UUID const&               getUUID() const;
    virtual void                           handleCommandOutputCallback(Json::Value&&) const;

protected:
    MCAPI virtual void _setUUID(mce::UUID const&);
};