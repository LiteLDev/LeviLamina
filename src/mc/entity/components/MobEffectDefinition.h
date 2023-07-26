#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class MobEffectDefinition {

public:
    // prevent constructor by default
    MobEffectDefinition& operator=(MobEffectDefinition const&) = delete;
    MobEffectDefinition(MobEffectDefinition const&)            = delete;

public:
    /**
     * @symbol ??0MobEffectDefinition\@\@QEAA\@XZ
     */
    MCAPI MobEffectDefinition(); // NOLINT
    /**
     * @symbol ?initialize\@MobEffectDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVMobEffectComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class MobEffectComponent&) const; // NOLINT
    /**
     * @symbol ?setCooldownTimeInTicks\@MobEffectDefinition\@\@QEAAXAEBH\@Z
     */
    MCAPI void setCooldownTimeInTicks(int const&); // NOLINT
    /**
     * @symbol ?setEffectTimeInTicks\@MobEffectDefinition\@\@QEAAXAEBH\@Z
     */
    MCAPI void setEffectTimeInTicks(int const&); // NOLINT
    /**
     * @symbol
     * ?setMobEffectByName\@MobEffectDefinition\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setMobEffectByName(std::string const&); // NOLINT
    /**
     * @symbol
     * ?buildSchema\@MobEffectDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VMobEffectDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
                                      class JsonUtil::EmptyClass,
                                      class MobEffectDefinition>>&); // NOLINT
};
