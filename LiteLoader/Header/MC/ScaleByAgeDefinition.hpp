// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScaleByAgeDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCALEBYAGEDEFINITION
public:
    class ScaleByAgeDefinition& operator=(class ScaleByAgeDefinition const &) = delete;
    ScaleByAgeDefinition(class ScaleByAgeDefinition const &) = delete;
#endif

public:
    MCAPI ScaleByAgeDefinition();
    MCAPI void initialize(class EntityContext &, class ScaleByAgeComponent &);
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ScaleByAgeDefinition>> &);

protected:

private:

};