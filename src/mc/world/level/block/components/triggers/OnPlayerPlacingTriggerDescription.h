#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class OnPlayerPlacingTriggerDescription {
public:
    // prevent constructor by default
    OnPlayerPlacingTriggerDescription& operator=(OnPlayerPlacingTriggerDescription const&);
    OnPlayerPlacingTriggerDescription(OnPlayerPlacingTriggerDescription const&);
    OnPlayerPlacingTriggerDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OnPlayerPlacingTriggerDescription() = default;

    // vIndex: 1
    virtual std::string const& getName() const;

    // vIndex: 2
    virtual void initializeComponent(class EntityContext& entity) const;

    // vIndex: 3
    virtual void initializeComponent(class BlockComponentStorage&) const;

    // vIndex: 4
    virtual void initializeComponentFromCode(class EntityContext&) const;

    // vIndex: 5
    virtual void initializeComponentFromCode(class BlockComponentStorage&) const;

    // vIndex: 6
    virtual void buildSchema(
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockComponentGroupDescription>>&
                                           componentSchema,
        class BlockComponentFactory const& factory
    ) const;

    // vIndex: 7
    virtual bool isNetworkComponent() const;

    // vIndex: 8
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag(struct cereal::ReflectionCtx const&) const;

    // vIndex: 9
    virtual void initializeFromNetwork(class CompoundTag const&, struct cereal::ReflectionCtx const&);

    // vIndex: 10
    virtual void handleVersionBasedInitialization(class SemVersion const&);

    MCAPI static std::string const NameID;

    // NOLINTEND
};
