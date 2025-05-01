#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ShooterDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnkc8dfdf;
    ::ll::UntypedStorage<8, 24>  mUnk6332f2;
    ::ll::UntypedStorage<8, 176> mUnk3826c3;
    ::ll::UntypedStorage<4, 4>   mUnke363c3;
    ::ll::UntypedStorage<4, 4>   mUnk570bee;
    ::ll::UntypedStorage<1, 1>   mUnk3b23d7;
    // NOLINTEND

public:
    // prevent constructor by default
    ShooterDefinition& operator=(ShooterDefinition const&);
    ShooterDefinition(ShooterDefinition const&);
    ShooterDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addSoundByName(::std::string const& name);

    MCNAPI void setActorDefByName(::std::string const& name);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::ShooterDefinition>>& root);
    // NOLINTEND
};
