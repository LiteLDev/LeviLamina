#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class AngerLevelComponent;
class EntityContext;
class SoundDefinition;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class AngerLevelDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk46a660;
    ::ll::UntypedStorage<4, 4> mUnk26bb70;
    ::ll::UntypedStorage<4, 4> mUnk8d98e4;
    ::ll::UntypedStorage<4, 4> mUnk53b4ae;
    ::ll::UntypedStorage<1, 1> mUnkaf65ef;
    ::ll::UntypedStorage<4, 4> mUnk194bba;
    ::ll::UntypedStorage<8, 24> mUnkef5ae5;
    ::ll::UntypedStorage<4, 4> mUnk18eb2d;
    ::ll::UntypedStorage<8, 64> mUnk743d5b;
    // NOLINTEND

public:
    // prevent constructor by default
    AngerLevelDefinition& operator=(AngerLevelDefinition const&);
    AngerLevelDefinition(AngerLevelDefinition const&);
    AngerLevelDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addOnIncreaseSoundDefinition(::SoundDefinition const& soundDefinition);

    MCNAPI void initialize(::EntityContext& entity, ::AngerLevelComponent& component) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::AngerLevelDefinition>>& root);
    // NOLINTEND

};
