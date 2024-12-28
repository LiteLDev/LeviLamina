#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_50/BlockDescriptor.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace BlockDescriptorSerializer {

struct StatesProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk34053b;
    // NOLINTEND

public:
    // prevent constructor by default
    StatesProxy& operator=(StatesProxy const&);
    StatesProxy(StatesProxy const&);
    StatesProxy();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void fromMap(::std::map<::std::string, ::SharedTypes::v1_20_50::BlockDescriptor::Compound> const& proxyMap);

    MCAPI ::BlockDescriptorSerializer::StatesProxy& operator=(::BlockDescriptorSerializer::StatesProxy&&);

    MCAPI ~StatesProxy();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static ::std::map<::std::string, ::SharedTypes::v1_20_50::BlockDescriptor::Compound>
    toMap(::BlockDescriptorSerializer::StatesProxy const& instance);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace BlockDescriptorSerializer
