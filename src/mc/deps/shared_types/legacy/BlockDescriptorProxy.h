#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/BlockDescriptor.h"

namespace SharedTypes::Legacy::BlockDescriptorSerializer {

struct BlockDescriptorProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                                               mName;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::SharedTypes::Legacy::BlockDescriptor::Compound>> mStates;
    ::ll::TypedStorage<8, 32, ::std::string>                                                               mTags;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockDescriptorProxy();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockDescriptorProxy(::SharedTypes::Legacy::BlockDescriptorSerializer::BlockDescriptorProxy const&);

    MCFOLD ::SharedTypes::Legacy::BlockDescriptorSerializer::BlockDescriptorProxy&
    operator=(::SharedTypes::Legacy::BlockDescriptorSerializer::BlockDescriptorProxy&&);

    MCFOLD ::SharedTypes::Legacy::BlockDescriptorSerializer::BlockDescriptorProxy&
    operator=(::SharedTypes::Legacy::BlockDescriptorSerializer::BlockDescriptorProxy const&);

    MCAPI ~BlockDescriptorProxy();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::SharedTypes::Legacy::BlockDescriptorSerializer::BlockDescriptorProxy const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::Legacy::BlockDescriptorSerializer
