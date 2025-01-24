#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ext/json_schema/JSONSchemaBody.h"
#include "mc/deps/cereal/ext/json_schema/JSONSchemaInfo.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
namespace cereal { struct SchemaDescription; }
namespace cereal::ext::internal { struct OutRefsMap; }
namespace cereal::internal { struct SchemaInfo; }
// clang-format on

namespace cereal::ext::internal {

struct JSONSchemaDef : public ::cereal::ext::internal::JSONSchemaInfo, public ::cereal::ext::internal::JSONSchemaBody {
public:
    // prevent constructor by default
    JSONSchemaDef& operator=(JSONSchemaDef const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI JSONSchemaDef(::cereal::ext::internal::JSONSchemaDef const&);

    MCAPI explicit JSONSchemaDef(::cereal::internal::SchemaInfo const& info);

    MCAPI JSONSchemaDef(::cereal::SchemaDescription const& schemaInfo, ::cereal::ext::internal::OutRefsMap& outRefs);

    MCAPI void normalizeRefs(
        ::cereal::ext::internal::OutRefsMap&                               outRefs,
        ::std::map<::std::string, ::cereal::ext::internal::JSONSchemaDef>& defsMap
    );

    MCAPI ~JSONSchemaDef();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cereal::ext::internal::JSONSchemaDef const&);

    MCAPI void* $ctor(::cereal::internal::SchemaInfo const& info);

    MCAPI void* $ctor(::cereal::SchemaDescription const& schemaInfo, ::cereal::ext::internal::OutRefsMap& outRefs);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cereal::ext::internal
