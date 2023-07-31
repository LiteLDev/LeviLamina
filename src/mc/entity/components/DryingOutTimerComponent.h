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
        // NOLINTBEGIN
        /**
         * @symbol
         * ?initialize\@DryingOutTimerDefinition\@DryingOutTimerComponent\@\@QEBAXAEAVEntityContext\@\@AEAV2\@\@Z
         */
        MCAPI void initialize(class EntityContext&, class DryingOutTimerComponent&) const;
        /**
         * @symbol
         * ?buildSchema\@DryingOutTimerDefinition\@DryingOutTimerComponent\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VDryingOutTimerDefinition\@DryingOutTimerComponent\@\@\@JsonUtil\@\@\@std\@\@\@Z
         */
        MCAPI static void buildSchema(std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
                                          class JsonUtil::EmptyClass,
                                          class DryingOutTimerComponent::DryingOutTimerDefinition>>&);
        // NOLINTEND
    };

public:
    // prevent constructor by default
    DryingOutTimerComponent& operator=(DryingOutTimerComponent const&) = delete;
    DryingOutTimerComponent(DryingOutTimerComponent const&)            = delete;
    DryingOutTimerComponent()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0DryingOutTimerComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI DryingOutTimerComponent(class DryingOutTimerComponent&&);
    /**
     * @symbol ?addAdditionalSaveData\@DryingOutTimerComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const;
    /**
     * @symbol ?canBeAffectedByWaterBottle\@DryingOutTimerComponent\@\@QEBA_NXZ
     */
    MCAPI bool canBeAffectedByWaterBottle() const;
    /**
     * @symbol ??4DryingOutTimerComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class DryingOutTimerComponent& operator=(class DryingOutTimerComponent&&);
    /**
     * @symbol
     * ?readAdditionalSaveData\@DryingOutTimerComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&);
    /**
     * @symbol ?refillTimeWithWaterBottle\@DryingOutTimerComponent\@\@QEAAXXZ
     */
    MCAPI void refillTimeWithWaterBottle();
    /**
     * @symbol ??1DryingOutTimerComponent\@\@QEAA\@XZ
     */
    MCAPI ~DryingOutTimerComponent();
    // NOLINTEND
};
