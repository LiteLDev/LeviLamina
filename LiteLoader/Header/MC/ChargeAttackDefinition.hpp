// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ChargeAttackDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHARGEATTACKDEFINITION
public:
    class ChargeAttackDefinition& operator=(class ChargeAttackDefinition const&) = delete;
    ChargeAttackDefinition(class ChargeAttackDefinition const&) = delete;
#endif

public:
    /*0*/ virtual ~ChargeAttackDefinition();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void __unk_vfn_1();
    MCAPI ChargeAttackDefinition();
    MCAPI void initialize(class EntityContext&, class ChargeAttackGoal&);
    MCAPI static void buildSchema(std::string const&, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ChargeAttackDefinition> >&);

protected:

private:

};