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
    // JSONSchemaDef inner types define
    using DefsMap = ::std::unordered_map<::std::string, ::cereal::ext::internal::JSONSchemaDef>;

public:
    // prevent constructor by default
    JSONSchemaDef();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit JSONSchemaDef(::cereal::internal::SchemaInfo const& info);

    MCAPI JSONSchemaDef(::cereal::SchemaDescription const& schemaInfo, ::cereal::ext::internal::OutRefsMap& outRefs);

    MCAPI void normalizeRefs(
        ::cereal::ext::internal::OutRefsMap&                                         outRefs,
        ::std::unordered_map<::std::string, ::cereal::ext::internal::JSONSchemaDef>& defsMap
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cereal::internal::SchemaInfo const& info);

    MCAPI void* $ctor(::cereal::SchemaDescription const& schemaInfo, ::cereal::ext::internal::OutRefsMap& outRefs);
    // NOLINTEND
};

} // namespace cereal::ext::internal
