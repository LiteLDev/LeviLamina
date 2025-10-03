#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/puv/LoadResult.h"
#include "mc/deps/puv/SlicedLoader.h"

// auto generated forward declare list
// clang-format off
class BedrockLoadContext;
class LinkedAssetValidator;
namespace Bedrock::Resources { class MinecraftDocumentInput; }
namespace SharedTypes::v1_21_30 { struct TradeTableData; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class TradeTableDataLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        192,
        ::Puv::SlicedLoader<::SharedTypes::v1_21_30::TradeTableData, ::BedrockLoadContext, nullptr_t>>
        mLoader;
    // NOLINTEND

public:
    // prevent constructor by default
    TradeTableDataLoader();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TradeTableDataLoader(
        ::cereal::ReflectionCtx const&                     ctx,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator
    );

    MCAPI ::Puv::LoadResult<::SharedTypes::v1_21_30::TradeTableData>
    load(::Bedrock::Resources::MinecraftDocumentInput const& input) const;

    MCAPI ~TradeTableDataLoader();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cereal::ReflectionCtx const& ctx, ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
