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
    JSONSchemaDef();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JSONSchemaDef(::cereal::ext::internal::JSONSchemaDef const&);

    MCNAPI explicit JSONSchemaDef(::cereal::internal::SchemaInfo const& info);

    MCNAPI JSONSchemaDef(::cereal::SchemaDescription const& schemaInfo, ::cereal::ext::internal::OutRefsMap& outRefs);

    MCNAPI void normalizeRefs(::cereal::ext::internal::OutRefsMap& outRefs, ::std::unordered_map<::std::string, ::cereal::ext::internal::JSONSchemaDef>& defsMap);

    MCNAPI ~JSONSchemaDef();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cereal::ext::internal::JSONSchemaDef const&);

    MCNAPI void* $ctor(::cereal::internal::SchemaInfo const& info);

    MCNAPI void* $ctor(::cereal::SchemaDescription const& schemaInfo, ::cereal::ext::internal::OutRefsMap& outRefs);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
