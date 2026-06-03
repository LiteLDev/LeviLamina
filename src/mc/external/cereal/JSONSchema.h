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
    // JSONSchema inner types define
    using JSONSchemaDef = ::cereal::ext::internal::JSONSchemaDef;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>       mSchemaUrl;
    ::ll::TypedStorage<8, 32, ::std::string>       mIdentifier;
    ::ll::TypedStorage<8, 32, ::std::string>       mFormatVersion;
    ::ll::TypedStorage<8, 32, ::std::string>       mMinecraftVersion;
    ::ll::TypedStorage<4, 8, ::std::optional<int>> mProtocolVersion;
    ::ll::TypedStorage<
        8,
        72,
        ::std::optional<::std::unordered_map<::std::string, ::cereal::ext::internal::JSONSchemaDef>>>
        mDefs;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI JSONSchema();

    MCAPI JSONSchema(::cereal::ext::JSONSchema&&);

    MCAPI JSONSchema(::cereal::ext::JSONSchema const&);

    MCAPI void makeAndNormalizeDefs(
        ::cereal::ext::internal::OutRefsMap&              outRefs,
        ::std::vector<::cereal::SchemaDescription> const& descriptions
    );

    MCAPI ::cereal::ext::JSONSchema& operator=(::cereal::ext::JSONSchema&&);

    MCAPI ::cereal::ext::JSONSchema& operator=(::cereal::ext::JSONSchema const&);

    MCAPI ~JSONSchema();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif

    MCAPI static ::cereal::ext::JSONSchema
    fromDescriptions(::std::vector<::cereal::SchemaDescription> const& descriptions, uint64 pos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::cereal::ext::JSONSchema&&);

    MCAPI void* $ctor(::cereal::ext::JSONSchema const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cereal::ext
