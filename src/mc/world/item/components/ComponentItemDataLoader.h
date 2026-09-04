#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/puv/LoadResult.h"
#include "mc/resources/PackLoadInfo.h"
#include "mc/world/item/components/CerealComponentItemDataLoader.h"

// auto generated forward declare list
// clang-format off
class BedrockLoadContext;
class SemVersion;
struct ComponentItemDataAll_Latest;
namespace Json { class Value; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ComponentItemDataLoader {
public:
    // ComponentItemDataLoader inner types define
    using Validator = ::std::function<void(::Puv::LoadResult<::ComponentItemDataAll_Latest>&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::cereal::ReflectionCtx const>>             mCtx;
    ::ll::TypedStorage<8, 256, ::CerealComponentItemDataLoader>                                         mLoader;
    ::ll::TypedStorage<8, 96, ::PackLoadInfo>                                                           mPackLoadInfo;
    ::ll::TypedStorage<8, 64, ::std::function<void(::Puv::LoadResult<::ComponentItemDataAll_Latest>&)>> mValidatorFn;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemDataLoader();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ComponentItemDataLoader(
        ::BedrockLoadContext const&                                              bedrockLoadContext,
        ::PackLoadInfo const&                                                    packLoadInfo,
        ::cereal::ReflectionCtx const&                                           ctx,
        ::std::function<void(::Puv::LoadResult<::ComponentItemDataAll_Latest>&)> validatorFn
    );

    MCAPI ::Puv::LoadResult<::ComponentItemDataAll_Latest>
    load(::Json::Value const& input, ::SemVersion const& documentVersion) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::BedrockLoadContext const&                                              bedrockLoadContext,
        ::PackLoadInfo const&                                                    packLoadInfo,
        ::cereal::ReflectionCtx const&                                           ctx,
        ::std::function<void(::Puv::LoadResult<::ComponentItemDataAll_Latest>&)> validatorFn
    );
    // NOLINTEND
};
