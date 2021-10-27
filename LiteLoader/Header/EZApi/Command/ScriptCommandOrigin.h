#pragma once

#include "../Core/json.h"
#include "../Core/mce.h"
#include "../dll.h"
#include "CommandOrigin.h"

class ServerLevel;
class ScriptEngine;

class ScriptCommandOrigin : public CommandOrigin {
public:
    mce::UUID     uuid;
    ServerLevel*  level;
    unsigned int  id;
    ScriptEngine* engine;
    bool          flag;

    MCAPI ScriptCommandOrigin(ServerLevel&, ScriptEngine&, unsigned int);
    MCAPI std::string const& getRequestId() const override;
    MCAPI std::string getName() const override;
    MCAPI BlockPos    getBlockPosition() const override;
    MCAPI Vec3        getWorldPosition() const override;
    MCAPI Level* getLevel() const override;
    MCAPI Dimension* getDimension() const override;
    MCAPI Actor*                 getEntity() const override;
    MCAPI CommandPermissionLevel getPermissionsLevel() const override;
    MCAPI std::unique_ptr<CommandOrigin> clone() const override;
    MCAPI CommandOriginType              getOriginType() const override;

    MCAPI bool canUseCommandsWithoutCheatsEnabled() const override;
    MCAPI bool isSelectorExpansionAllowed() const override;
    MCAPI void handleCommandOutputCallback(Json::Value&&) const override;
};