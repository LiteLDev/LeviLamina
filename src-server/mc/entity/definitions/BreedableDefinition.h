#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class ItemDescriptor;
struct BreedableType;
struct EnvironmentRequirement;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BreedableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkc3ef0a;
    ::ll::UntypedStorage<1, 1> mUnk1b873f;
    ::ll::UntypedStorage<1, 1> mUnk899edb;
    ::ll::UntypedStorage<1, 1> mUnka9d998;
    ::ll::UntypedStorage<1, 1> mUnk65f5b5;
    ::ll::UntypedStorage<1, 1> mUnke323bb;
    ::ll::UntypedStorage<1, 1> mUnk7654d6;
    ::ll::UntypedStorage<4, 4> mUnkf3f68f;
    ::ll::UntypedStorage<4, 4> mUnkabab37;
    ::ll::UntypedStorage<8, 24> mUnka7b953;
    ::ll::UntypedStorage<8, 16> mUnk31b5b3;
    ::ll::UntypedStorage<8, 24> mUnk68a570;
    ::ll::UntypedStorage<8, 64> mUnkb3b590;
    ::ll::UntypedStorage<8, 24> mUnk64149d;
    ::ll::UntypedStorage<4, 12> mUnk5e7ad9;
    ::ll::UntypedStorage<1, 1> mUnk494446;
    ::ll::UntypedStorage<4, 8> mUnkb060cf;
    ::ll::UntypedStorage<4, 8> mUnk4f1ebf;
    ::ll::UntypedStorage<4, 12> mUnk625dc7;
    ::ll::UntypedStorage<8, 16> mUnkfac445;
    ::ll::UntypedStorage<8, 56> mUnk8b89e2;
    // NOLINTEND

public:
    // prevent constructor by default
    BreedableDefinition& operator=(BreedableDefinition const&);
    BreedableDefinition(BreedableDefinition const&);
    BreedableDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addBreedItem(::ItemDescriptor const& itemDescriptor);

    MCNAPI void addBreedableType(::BreedableType const& breedType);

    MCNAPI void addEnvironmentRequirement(::EnvironmentRequirement const& envReq);

    MCNAPI void addParentCentricAttributeBlending(::std::string const& attributesToUseParentCentricBlendingFor);

    MCNAPI void setMutationStrategy(::std::string const& strategyCased);

    MCNAPI ~BreedableDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::BreedableDefinition>>& root);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
