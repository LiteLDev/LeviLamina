#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LoadResult.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Resources { class MinecraftDocumentInput; }
namespace SharedTypes::v1_21_30 { struct TradeTableData; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class TradeTableDataLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 208> mUnk71be79;
    // NOLINTEND

public:
    // prevent constructor by default
    TradeTableDataLoader& operator=(TradeTableDataLoader const&);
    TradeTableDataLoader(TradeTableDataLoader const&);
    TradeTableDataLoader();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit TradeTableDataLoader(::cereal::ReflectionCtx const& ctx);

    MCNAPI ::Puv::LoadResult<::SharedTypes::v1_21_30::TradeTableData>
    load(::Bedrock::Resources::MinecraftDocumentInput const& input) const;

    MCNAPI ~TradeTableDataLoader();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cereal::ReflectionCtx const& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
