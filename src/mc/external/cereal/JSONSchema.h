#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ext/json_schema/JSONSchemaDef.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
namespace cereal { struct SchemaDescription; }
namespace cereal::ext::internal { struct OutRefsMap; }
// clang-format on

namespace cereal::ext {

struct JSONSchema : public ::cereal::ext::internal::JSONSchemaDef {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk15868f;
    ::ll::UntypedStorage<8, 32> mUnkab4a80;
    ::ll::UntypedStorage<8, 24> mUnk83b6c7;
    // NOLINTEND

public:
    // prevent constructor by default
    JSONSchema& operator=(JSONSchema const&);
    JSONSchema(JSONSchema const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI JSONSchema();

    MCAPI JSONSchema(::cereal::ext::JSONSchema&&);

    MCAPI void makeAndNormalizeDefs(
        ::cereal::ext::internal::OutRefsMap&              outRefs,
        ::std::vector<::cereal::SchemaDescription> const& descriptions
    );

    MCAPI ~JSONSchema();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static ::cereal::ext::JSONSchema
    fromDescriptions(::std::vector<::cereal::SchemaDescription> const& descriptions, uint64 pos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::cereal::ext::JSONSchema&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cereal::ext
