#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/puv/LoadResult.h"

// auto generated forward declare list
// clang-format off
class BlockDefinitionGroup;
class PackLoadContext;
struct BlockDefinition;
namespace Bedrock::Resources { class MinecraftDocumentInput; }
// clang-format on

class BlockDefinitionLegacyLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 256, ::Puv::SlicedLoader<::BlockDefinition, nullptr_t, nullptr_t, ::BlockDefinition>> mLoader;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockDefinitionLegacyLoader();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockDefinitionLegacyLoader(
        ::gsl::not_null<::BlockDefinitionGroup*>                  group,
        ::gsl::not_null<::Core::PathBuffer<::std::string> const*> heapPathBuffer,
        ::std::string                                             resourcePackLocation,
        ::gsl::not_null<::PackLoadContext*>                       packLoadContext
    );

    MCAPI ::Puv::LoadResult<::BlockDefinition> load(::Bedrock::Resources::MinecraftDocumentInput const& input) const;

    MCAPI ~BlockDefinitionLegacyLoader();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::gsl::not_null<::BlockDefinitionGroup*>                  group,
        ::gsl::not_null<::Core::PathBuffer<::std::string> const*> heapPathBuffer,
        ::std::string                                             resourcePackLocation,
        ::gsl::not_null<::PackLoadContext*>                       packLoadContext
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
