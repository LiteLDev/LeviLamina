#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class BreedableComponent;
class EntityContext;
class ItemDescriptor;
struct BreedableType;
struct EnvironmentRequirement;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BreedableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkc3ef0a;
    ::ll::UntypedStorage<1, 1>  mUnk1b873f;
    ::ll::UntypedStorage<4, 4>  mUnkf3f68f;
    ::ll::UntypedStorage<4, 4>  mUnkabab37;
    ::ll::UntypedStorage<1, 1>  mUnk899edb;
    ::ll::UntypedStorage<1, 1>  mUnka9d998;
    ::ll::UntypedStorage<8, 24> mUnka7b953;
    ::ll::UntypedStorage<8, 16> mUnk31b5b3;
    ::ll::UntypedStorage<8, 24> mUnk68a570;
    ::ll::UntypedStorage<8, 64> mUnkb3b590;
    ::ll::UntypedStorage<8, 24> mUnk64149d;
    ::ll::UntypedStorage<4, 12> mUnk5e7ad9;
    ::ll::UntypedStorage<4, 4>  mUnk494446;
    ::ll::UntypedStorage<4, 8>  mUnkb060cf;
    ::ll::UntypedStorage<4, 8>  mUnk4f1ebf;
    ::ll::UntypedStorage<4, 12> mUnk625dc7;
    ::ll::UntypedStorage<1, 1>  mUnke323bb;
    ::ll::UntypedStorage<1, 1>  mUnk7654d6;
    ::ll::UntypedStorage<8, 16> mUnkfac445;
    // NOLINTEND

public:
    // prevent constructor by default
    BreedableDefinition& operator=(BreedableDefinition const&);
    BreedableDefinition(BreedableDefinition const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BreedableDefinition();

    MCAPI void addBreedItem(::ItemDescriptor const& itemDescriptor);

    MCAPI void addBreedableType(::BreedableType const& breedType);

    MCAPI void addEnvironmentRequirement(::EnvironmentRequirement const& envReq);

    MCAPI void addParentCentricAttributeBlending(::std::string const& attributesToUseParentCentricBlendingFor);

    MCAPI void initialize(::EntityContext&, ::BreedableComponent& component) const;

    MCAPI void setMutationStrategy(::std::string const& strategyCased);

    MCAPI ~BreedableDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::BreedableDefinition>>& root
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
