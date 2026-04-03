#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"

// auto generated forward declare list
// clang-format off
class Keymapping;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

class RemappingLayoutRawIndex {
public:
    // RemappingLayoutRawIndex inner types define
    using RefreshKeymappingPublisher =
        ::Bedrock::PubSub::Publisher<void(::std::optional<uint64>), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::vector<::Keymapping>&> mKeymappings;
    ::ll::TypedStorage<8, 8, ::std::vector<::Keymapping>&> mDefaultMappings;
    ::ll::TypedStorage<
        8,
        16,
        ::std::shared_ptr<
            ::Bedrock::PubSub::
                Publisher<void(::std::optional<uint64>), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>>
        mRefreshKeymappingsPublisher;
    // NOLINTEND

public:
    // prevent constructor by default
    RemappingLayoutRawIndex& operator=(RemappingLayoutRawIndex const&);
    RemappingLayoutRawIndex(RemappingLayoutRawIndex const&);
    RemappingLayoutRawIndex();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void defaultKeyAtIndex(uint64 index);

    MCAPI bool isKeymappingDefault(uint64 index) const;

    MCAPI void unassignDuplicateKeys(uint64 index);

    MCAPI void unassignKeyAtIndex(uint64 index);
    // NOLINTEND
};
