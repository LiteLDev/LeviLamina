#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorDefinitionDescriptor {
public:
    // NOLINTBEGIN
    MCAPI ActorDefinitionDescriptor();

    MCAPI ActorDefinitionDescriptor(class ActorDefinitionDescriptor&&);

    MCAPI ActorDefinitionDescriptor(class ActorDefinitionDescriptor const&);

    MCAPI class ActorDefinitionDescriptor& combine(class ActorDefinitionDescriptor const& rhs);

    MCAPI bool contains(class ActorDefinitionDescriptor const& rhs) const;

    MCAPI std::optional<struct ActorDefinitionAttribute> findAttributeByName(std::string const& attributeName) const;

    MCAPI bool hasComponent(class HashedString const& name) const;

    MCAPI bool hasJumpSubComponent();

    MCAPI bool hasMovementSubComponent();

    MCAPI bool hasNavigationSubComponent();

    MCAPI class ActorDefinitionDescriptor& operator=(class ActorDefinitionDescriptor&&);

    MCAPI class ActorDefinitionDescriptor& operator=(class ActorDefinitionDescriptor const&);

    MCAPI bool overlaps(class ActorDefinitionDescriptor const& rhs) const;

    MCAPI class ActorDefinitionDescriptor& subtract(class ActorDefinitionDescriptor const& rhs);

    MCAPI ~ActorDefinitionDescriptor();

    MCAPI static bool
    executeEvent(class Actor& entity, std::string const& name, class VariantParameterList const& list);

    MCAPI static bool executeTrigger(
        class Actor&                        entity,
        class ActorDefinitionTrigger const& trigger,
        class VariantParameterList const&   list
    );

    MCAPI static void forceExecuteTrigger(
        class Actor&                        entity,
        class ActorDefinitionTrigger const& trigger,
        class VariantParameterList const&   list
    );

    MCAPI static void forceExecuteTriggerChain(
        class Actor&                                                  entity,
        class ActorDefinitionTrigger const&                           trigger,
        std::vector<std::pair<std::string const, std::string const>>& eventStack,
        class VariantParameterList const&                             list
    );

    MCAPI static bool hasEvent(class Actor const&, std::string const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static bool _executeEvent(
        class Actor&                                                  entity,
        std::string const&                                            name,
        std::vector<std::pair<std::string const, std::string const>>& eventStack,
        class VariantParameterList const&                             list
    );

    MCAPI static void _forceExecuteTrigger(
        class Actor&                                                  entity,
        class ActorDefinitionTrigger const&                           trigger,
        std::vector<std::pair<std::string const, std::string const>>& eventStack,
        class VariantParameterList const&                             list
    );

    // NOLINTEND
};
