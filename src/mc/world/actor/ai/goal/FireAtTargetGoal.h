#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/enums/ProjectileAnchor.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class FireAtTargetGoal : public ::Goal {
public:
    // FireAtTargetGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // FireAtTargetGoal inner types define
    class Definition : public ::BaseGoalDefinition {
    public:
        // prevent constructor by default
        Definition& operator=(Definition const&);
        Definition(Definition const&);
        Definition();

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: __gen_??1Definition@FireAtTargetGoal@@UEAA@XZ
        virtual ~Definition() = default;

        // symbol: ?initialize@Definition@FireAtTargetGoal@@QEBAXAEAVEntityContext@@AEAV2@@Z
        MCAPI void initialize(class EntityContext&, class FireAtTargetGoal&) const;

        // symbol: ?setOwnerAnchor@Definition@FireAtTargetGoal@@QEAAXAEBH@Z
        MCAPI void setOwnerAnchor(int const&);

        // symbol:
        // ?setProjectileDefinitionByName@Definition@FireAtTargetGoal@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
        MCAPI void setProjectileDefinitionByName(std::string const&);

        // symbol: ?setTargetAnchor@Definition@FireAtTargetGoal@@QEAAXAEBH@Z
        MCAPI void setTargetAnchor(int const&);

        // symbol:
        // ?buildSchema@Definition@FireAtTargetGoal@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VDefinition@FireAtTargetGoal@@@JsonUtil@@@4@@Z
        MCAPI static void
        buildSchema(std::string const&, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class FireAtTargetGoal::Definition>>&);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    FireAtTargetGoal& operator=(FireAtTargetGoal const&);
    FireAtTargetGoal(FireAtTargetGoal const&);
    FireAtTargetGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FireAtTargetGoal@@UEAA@XZ
    virtual ~FireAtTargetGoal() = default;

    // vIndex: 1, symbol: ?canUse@FireAtTargetGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@FireAtTargetGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@FireAtTargetGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@FireAtTargetGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@FireAtTargetGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@FireAtTargetGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string&) const;

    // symbol: ??0FireAtTargetGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit FireAtTargetGoal(class Mob&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getCurrentTime@FireAtTargetGoal@@AEBA_KXZ
    MCAPI uint64 _getCurrentTime() const;

    // symbol: ?_getAnchorAndOffsetPosition@FireAtTargetGoal@@CA?AVVec3@@AEBVActor@@W4ProjectileAnchor@@AEBV2@@Z
    MCAPI static class Vec3 _getAnchorAndOffsetPosition(class Actor const&, ::ProjectileAnchor, class Vec3 const&);

    // NOLINTEND
};
