#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/puv/LoadResult.h"

// auto generated forward declare list
// clang-format off
class BlockDefinitionGroup;
class IPackLoadContext;
struct BlockDefinition;
namespace Bedrock::Resources { class MinecraftDocumentInput; }
// clang-format on

class BlockDefinitionLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 192> mUnkdaeef1;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockDefinitionLoader& operator=(BlockDefinitionLoader const&);
    BlockDefinitionLoader(BlockDefinitionLoader const&);
    BlockDefinitionLoader();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockDefinitionLoader(
        ::gsl::not_null<::BlockDefinitionGroup*>                  group,
        ::gsl::not_null<::Core::PathBuffer<::std::string> const*> heapPathBuffer,
        ::std::string                                             resourcePackLocation,
        ::gsl::not_null<::IPackLoadContext*>                      packLoadContext
    );

    MCAPI ::Puv::LoadResult<::BlockDefinition> load(::Bedrock::Resources::MinecraftDocumentInput const& input) const;

    MCAPI ~BlockDefinitionLoader();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::gsl::not_null<::BlockDefinitionGroup*>                  group,
        ::gsl::not_null<::Core::PathBuffer<::std::string> const*> heapPathBuffer,
        ::std::string                                             resourcePackLocation,
        ::gsl::not_null<::IPackLoadContext*>                      packLoadContext
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
