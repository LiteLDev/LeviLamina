#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class AmbientSoundServerComponent;
class EntityContext;
struct DynamicAmbientSound;
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct AmbientSoundIntervalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkc810b5;
    ::ll::UntypedStorage<4, 4>  mUnkae8549;
    ::ll::UntypedStorage<8, 32> mUnke1c8c2;
    ::ll::UntypedStorage<8, 24> mUnk21c040;
    // NOLINTEND

public:
    // prevent constructor by default
    AmbientSoundIntervalDefinition& operator=(AmbientSoundIntervalDefinition const&);
    AmbientSoundIntervalDefinition(AmbientSoundIntervalDefinition const&);
    AmbientSoundIntervalDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addDynamic(::DynamicAmbientSound const& definition);

    MCNAPI void initialize(::EntityContext& entity, ::AmbientSoundServerComponent& component) const;

    MCNAPI ~AmbientSoundIntervalDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::AmbientSoundIntervalDefinition>>&
            root
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
