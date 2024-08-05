#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class BehaviorFactory {
public:
    // prevent constructor by default
    BehaviorFactory& operator=(BehaviorFactory const&);
    BehaviorFactory(BehaviorFactory const&);

public:
    // NOLINTBEGIN
    MCAPI BehaviorFactory();

    MCAPI std::unique_ptr<class BehaviorDefinition>
    loadNodeDefinition(std::string const& name, class Json::Value root, class BehaviorTreeDefinitionPtr& ptr) const;

    MCAPI void registerNodePair(
        std::string const&                                         id,
        std::function<std::unique_ptr<class BehaviorDefinition>()> definitionCreator,
        std::function<std::unique_ptr<class BehaviorNode>()>       nodeCreator
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _initNodes();

    // NOLINTEND
};
