#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/block/block_descriptor_serializer/StatesProxy.h"
#include "mc/world/level/block/block_descriptor_serializer/TagsProxy.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Legacy { struct BlockDescriptor; }
// clang-format on

namespace BlockDescriptorSerializer {

struct BlockDescriptorProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mName;
    ::ll::TypedStorage<8, 24, ::BlockDescriptorSerializer::StatesProxy> mStates;
    ::ll::TypedStorage<8, 32, ::BlockDescriptorSerializer::TagsProxy> mTags;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockDescriptorProxy& operator=(BlockDescriptorProxy const&);
    BlockDescriptorProxy(BlockDescriptorProxy const&);
    BlockDescriptorProxy();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BlockDescriptorProxy(::SharedTypes::Legacy::BlockDescriptor desc);

    MCAPI BlockDescriptorProxy(::std::string name, ::std::vector<::BlockDescriptor::State> states, ::std::string tags);

    MCAPI ::BlockDescriptorSerializer::BlockDescriptorProxy& operator=(::BlockDescriptorSerializer::BlockDescriptorProxy&&);

    MCAPI ~BlockDescriptorProxy();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::Legacy::BlockDescriptor desc);

    MCAPI void* $ctor(::std::string name, ::std::vector<::BlockDescriptor::State> states, ::std::string tags);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};

}
