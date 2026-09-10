#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/DescriptionConfig.h"
#include "mc/deps/core/file/Path.h"

// auto generated forward declare list
// clang-format off
struct JSONSchemaProperty;
namespace Core { class PathView; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes {

class JSONSchemaDumper {
public:
    // JSONSchemaDumper inner types define
    using DumpCallback = ::std::function<void(::Core::PathView const&, ::std::string_view)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::cereal::ReflectionCtx const*>> mCerealContext;
    ::ll::TypedStorage<8, 32, ::Core::Path>                                   mBaseFolder;
    ::ll::TypedStorage<4, 16, ::cereal::DescriptionConfig>                    mDescriptionConfig;
    ::ll::TypedStorage<8, 32, ::std::string>                                  mMinecraftVersion;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI void dump(::std::function<void(::Core::PathView const&, ::std::string_view)> func);

    MCAPI ::SharedTypes::JSONSchemaDumper& minecraftVersion(::std::string version);
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI static ::Core::Path
    buildSchemaOutputPath(::Core::PathView const baseFolder, ::JSONSchemaProperty const& property);
#endif
    // NOLINTEND
};

} // namespace SharedTypes
