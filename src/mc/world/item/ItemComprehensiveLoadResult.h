#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/Value.h"
#include "mc/world/item/components/ComponentItemDataAll_Latest.h"

// auto generated forward declare list
// clang-format off
class BedrockLoadContext;
class SemVersion;
struct PackLoadInfo;
namespace Puv { class Input; }
namespace Puv { class Logger; }
namespace SharedTypes::v1_26_30 { struct ItemDocument; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ItemComprehensiveLoadResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Json::Value>                   mItemJson;
    ::ll::TypedStorage<8, 2592, ::ComponentItemDataAll_Latest> mPuvResult;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ~ItemComprehensiveLoadResult();
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ItemComprehensiveLoadResult parse(
        ::Puv::Input const&            input,
        ::Puv::Logger&                 logger,
        bool                           isComponentBased,
        ::SemVersion const&            documentVersion,
        ::BedrockLoadContext const*    bedrockLoadContext,
        ::PackLoadInfo const*          packLoadInfo,
        ::cereal::ReflectionCtx const* ctx
    );

    MCAPI static ::SharedTypes::v1_26_30::ItemDocument upgrade(::ItemComprehensiveLoadResult&& oldData);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
    // NOLINTEND
};
