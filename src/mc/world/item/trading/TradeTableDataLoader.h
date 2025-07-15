#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/puv/LoadResult.h"

// auto generated forward declare list
// clang-format off
class LinkedAssetValidator;
namespace Bedrock::Resources { class MinecraftDocumentInput; }
namespace SharedTypes::v1_21_30 { struct TradeTableData; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class TradeTableDataLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 192> mUnk91c026;
    // NOLINTEND

public:
    // prevent constructor by default
    TradeTableDataLoader& operator=(TradeTableDataLoader const&);
    TradeTableDataLoader(TradeTableDataLoader const&);
    TradeTableDataLoader();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TradeTableDataLoader(
        ::cereal::ReflectionCtx const&                     ctx,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator
    );

    MCNAPI ::Puv::LoadResult<::SharedTypes::v1_21_30::TradeTableData>
    load(::Bedrock::Resources::MinecraftDocumentInput const& input) const;

    MCNAPI ~TradeTableDataLoader();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::cereal::ReflectionCtx const& ctx, ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
