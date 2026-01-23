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
    ::ll::UntypedStorage<8, 32> mUnk4ac68d;
    ::ll::UntypedStorage<8, 32> mUnk160668;
    ::ll::UntypedStorage<8, 72> mUnka0304c;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JSONSchema();

    MCNAPI JSONSchema(::cereal::ext::JSONSchema&&);

    MCNAPI JSONSchema(::cereal::ext::JSONSchema const&);

    MCNAPI void makeAndNormalizeDefs(
        ::cereal::ext::internal::OutRefsMap&              outRefs,
        ::std::vector<::cereal::SchemaDescription> const& descriptions
    );

    MCNAPI ::cereal::ext::JSONSchema& operator=(::cereal::ext::JSONSchema&&);

    MCNAPI ::cereal::ext::JSONSchema& operator=(::cereal::ext::JSONSchema const&);

    MCNAPI ~JSONSchema();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCNAPI static ::cereal::ext::JSONSchema
    fromDescriptions(::std::vector<::cereal::SchemaDescription> const& descriptions, uint64 pos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::cereal::ext::JSONSchema&&);

    MCNAPI void* $ctor(::cereal::ext::JSONSchema const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cereal::ext
