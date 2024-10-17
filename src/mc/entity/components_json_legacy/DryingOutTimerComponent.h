#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

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
        DryingOutTimerDefinition& operator=(DryingOutTimerDefinition const&);
        DryingOutTimerDefinition(DryingOutTimerDefinition const&);
        DryingOutTimerDefinition();

    public:
        // NOLINTBEGIN
        MCAPI void initialize(class EntityContext& entity, class DryingOutTimerComponent& dryingOutComponent) const;

        MCAPI static void buildSchema(std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
                                          class JsonUtil::EmptyClass,
                                          class DryingOutTimerComponent::DryingOutTimerDefinition>>& root);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    DryingOutTimerComponent& operator=(DryingOutTimerComponent const&);
    DryingOutTimerComponent(DryingOutTimerComponent const&);
    DryingOutTimerComponent();

public:
    // NOLINTBEGIN
    MCAPI DryingOutTimerComponent(class DryingOutTimerComponent&&);

    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    MCAPI bool canBeAffectedByWaterBottle() const;

    MCAPI class DryingOutTimerComponent& operator=(class DryingOutTimerComponent&&);

    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const& tag, class DataLoadHelper&);

    MCAPI void refillTimeWithWaterBottle();

    MCAPI ~DryingOutTimerComponent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class DryingOutTimerComponent&&);

    MCAPI void dtor$();

    // NOLINTEND
};
