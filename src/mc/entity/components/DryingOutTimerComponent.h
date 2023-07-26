#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class DryingOutTimerComponent {
public:
    // DryingOutTimerComponent inner types declare
    // clang-format off
    class DryingOutTimerDefinition;
    // clang-format on

    // DryingOutTimerComponent inner types define
    class DryingOutTimerDefinition {

    public:
        // prevent constructor by default
        DryingOutTimerDefinition& operator=(DryingOutTimerDefinition const&) = delete;
        DryingOutTimerDefinition(DryingOutTimerDefinition const&)            = delete;
        DryingOutTimerDefinition()                                           = delete;

    public:
        /**
         * @symbol
         * ?initialize\@DryingOutTimerDefinition\@DryingOutTimerComponent\@\@QEBAXAEAVEntityContext\@\@AEAV2\@\@Z
         */
        MCAPI void initialize(class EntityContext&, class DryingOutTimerComponent&) const; // NOLINT
        /**
         * @symbol
         * ?buildSchema\@DryingOutTimerDefinition\@DryingOutTimerComponent\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VDryingOutTimerDefinition\@DryingOutTimerComponent\@\@\@JsonUtil\@\@\@std\@\@\@Z
         */
        MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
                                          class JsonUtil::EmptyClass,
                                          class DryingOutTimerComponent::DryingOutTimerDefinition>>&); // NOLINT
    };

public:
    // prevent constructor by default
    DryingOutTimerComponent& operator=(DryingOutTimerComponent const&) = delete;
    DryingOutTimerComponent(DryingOutTimerComponent const&)            = delete;
    DryingOutTimerComponent()                                          = delete;

public:
    /**
     * @symbol ??0DryingOutTimerComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI DryingOutTimerComponent(class DryingOutTimerComponent&&); // NOLINT
    /**
     * @symbol ?addAdditionalSaveData\@DryingOutTimerComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const; // NOLINT
    /**
     * @symbol ?canBeAffectedByWaterBottle\@DryingOutTimerComponent\@\@QEBA_NXZ
     */
    MCAPI bool canBeAffectedByWaterBottle() const; // NOLINT
    /**
     * @symbol ??4DryingOutTimerComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class DryingOutTimerComponent& operator=(class DryingOutTimerComponent&&); // NOLINT
    /**
     * @symbol
     * ?readAdditionalSaveData\@DryingOutTimerComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @symbol ?refillTimeWithWaterBottle\@DryingOutTimerComponent\@\@QEAAXXZ
     */
    MCAPI void refillTimeWithWaterBottle(); // NOLINT
    /**
     * @symbol ??1DryingOutTimerComponent\@\@QEAA\@XZ
     */
    MCAPI ~DryingOutTimerComponent(); // NOLINT
};
