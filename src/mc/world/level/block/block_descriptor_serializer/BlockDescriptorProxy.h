#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockDescriptor.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Legacy { struct BlockDescriptor; }
// clang-format on

namespace BlockDescriptorSerializer {

struct BlockDescriptorProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk64c69c;
    ::ll::UntypedStorage<8, 24> mUnk331105;
    ::ll::UntypedStorage<8, 32> mUnk5e2bf7;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockDescriptorProxy& operator=(BlockDescriptorProxy const&);
    BlockDescriptorProxy(BlockDescriptorProxy const&);
    BlockDescriptorProxy();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BlockDescriptorProxy(::SharedTypes::Legacy::BlockDescriptor desc);

    MCNAPI BlockDescriptorProxy(::std::string name, ::std::vector<::BlockDescriptor::State> states, ::std::string tags);

    MCNAPI ::BlockDescriptorSerializer::BlockDescriptorProxy&
    operator=(::BlockDescriptorSerializer::BlockDescriptorProxy&&);

    MCNAPI ~BlockDescriptorProxy();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::Legacy::BlockDescriptor desc);

    MCNAPI void* $ctor(::std::string name, ::std::vector<::BlockDescriptor::State> states, ::std::string tags);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace BlockDescriptorSerializer
