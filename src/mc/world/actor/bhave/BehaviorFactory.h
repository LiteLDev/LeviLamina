#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BehaviorDefinition;
class BehaviorNode;
class BehaviorTreeDefinitionPtr;
namespace Json { class Value; }
// clang-format on

class BehaviorFactory {
public:
    // BehaviorFactory inner types define
    using DefinitionCreator = ::std::function<::std::unique_ptr<::BehaviorDefinition>()>;

    using NodeCreator = ::std::function<::std::unique_ptr<::BehaviorNode>()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::std::string,
            ::std::pair<
                ::std::function<::std::unique_ptr<::BehaviorDefinition>()>,
                ::std::function<::std::unique_ptr<::BehaviorNode>()>>>>
        mFactoryPairs;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _initNodes();

    MCAPI ::std::unique_ptr<::BehaviorDefinition>
    loadNodeDefinition(::std::string const& name, ::Json::Value root, ::BehaviorTreeDefinitionPtr& ptr) const;

    MCAPI void registerNodePair(
        ::std::string const&                                       id,
        ::std::function<::std::unique_ptr<::BehaviorDefinition>()> definitionCreator,
        ::std::function<::std::unique_ptr<::BehaviorNode>()>       nodeCreator
    );

    MCAPI ::std::unique_ptr<::BehaviorDefinition> tryGetDefinition(::std::string const& id) const;
    // NOLINTEND
};
