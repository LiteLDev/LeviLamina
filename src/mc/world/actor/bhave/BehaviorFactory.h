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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk745c73;
    // NOLINTEND

public:
    // prevent constructor by default
    BehaviorFactory& operator=(BehaviorFactory const&);
    BehaviorFactory(BehaviorFactory const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BehaviorFactory();

    MCAPI void _initNodes();

    MCAPI ::std::unique_ptr<::BehaviorDefinition>
    loadNodeDefinition(::std::string const& name, ::Json::Value root, ::BehaviorTreeDefinitionPtr& ptr) const;

    MCAPI void registerNodePair(
        ::std::string const&                                       id,
        ::std::function<::std::unique_ptr<::BehaviorDefinition>()> definitionCreator,
        ::std::function<::std::unique_ptr<::BehaviorNode>()>       nodeCreator
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
