#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BaseGoalDefinition {
public:
    // prevent constructor by default
    BaseGoalDefinition& operator=(BaseGoalDefinition const&);
    BaseGoalDefinition(BaseGoalDefinition const&);
    BaseGoalDefinition();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BaseGoalDefinition();

    // vIndex: 1
    virtual bool validateMobType(class Mob&) const;

    // vIndex: 2
    virtual bool validate(class Mob&) const;

    MCAPI void initialize(class EntityContext&, class Goal& goal) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::unordered_map<std::string, int> mControlFlagMap;

    // NOLINTEND
};
