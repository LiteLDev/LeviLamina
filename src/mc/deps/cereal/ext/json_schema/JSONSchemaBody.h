#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ext/json_schema/JSONSchemaValidation.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class DynamicValue; }
namespace cereal { struct SchemaDescription; }
namespace cereal::ext::internal { struct JSONSchemaDef; }
namespace cereal::ext::internal { struct OutRefsMap; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace cereal::ext::internal {

struct JSONSchemaBody : public ::cereal::ext::internal::JSONSchemaValidation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk1b79c8;
    ::ll::UntypedStorage<1, 2>  mUnk9bbde5;
    ::ll::UntypedStorage<8, 32> mUnk813aa7;
    ::ll::UntypedStorage<8, 32> mUnk2db52f;
    ::ll::UntypedStorage<8, 24> mUnkafc4ae;
    ::ll::UntypedStorage<8, 16> mUnk200d94;
    ::ll::UntypedStorage<8, 16> mUnkdb80fe;
    ::ll::UntypedStorage<8, 16> mUnk3b0c00;
    ::ll::UntypedStorage<8, 32> mUnkdb5419;
    ::ll::UntypedStorage<8, 40> mUnkeb7b38;
    ::ll::UntypedStorage<8, 24> mUnk3c894b;
    // NOLINTEND

public:
    // prevent constructor by default
    JSONSchemaBody();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI JSONSchemaBody(::cereal::ext::internal::JSONSchemaBody&&);

    MCAPI JSONSchemaBody(::cereal::ext::internal::JSONSchemaBody const&);

    MCAPI void fill(::cereal::internal::ConstraintDescription const& constraint);

    MCAPI void fillBody(::cereal::SchemaDescription const& schemaInfo, ::cereal::ext::internal::OutRefsMap& outRefs);

    MCAPI ::cereal::ext::internal::JSONSchemaBody& operator=(::cereal::ext::internal::JSONSchemaBody const&);

    MCAPI ::cereal::ext::internal::JSONSchemaBody& operator=(::cereal::ext::internal::JSONSchemaBody&&);

    MCAPI ~JSONSchemaBody();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void overwriteIfAny(
        ::std::shared_ptr<::cereal::ext::internal::JSONSchemaDef>&          that,
        ::std::shared_ptr<::cereal::internal::ConstraintDescription> const& other
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cereal::ext::internal::JSONSchemaBody&&);

    MCAPI void* $ctor(::cereal::ext::internal::JSONSchemaBody const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cereal::ext::internal
