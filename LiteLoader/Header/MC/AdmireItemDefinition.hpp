// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class AdmireItemDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ADMIREITEMDEFINITION
public:
    class AdmireItemDefinition& operator=(class AdmireItemDefinition const &) = delete;
    AdmireItemDefinition(class AdmireItemDefinition const &) = delete;
    AdmireItemDefinition() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ADMIREITEMDEFINITION
public:
#endif
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class AdmireItemDefinition>> &);



};