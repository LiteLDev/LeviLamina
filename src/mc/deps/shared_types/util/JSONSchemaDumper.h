#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/DescriptionConfig.h"

// auto generated forward declare list
// clang-format off
struct JSONSchemaProperty;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes {

class JSONSchemaDumper {
public:
    // JSONSchemaDumper inner types define
    using DumpCallback = ::std::function<void(::JSONSchemaProperty const&, ::std::string_view)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::cereal::ReflectionCtx const*>> mCerealContext;
    ::ll::TypedStorage<4, 16, ::cereal::DescriptionConfig>                    mDescriptionConfig;
    ::ll::TypedStorage<8, 32, ::std::string>                                  mMinecraftVersion;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI void dump(::std::function<void(::JSONSchemaProperty const&, ::std::string_view)> func);

    MCAPI ::SharedTypes::JSONSchemaDumper& minecraftVersion(::std::string version);
#endif
    // NOLINTEND
};

} // namespace SharedTypes
