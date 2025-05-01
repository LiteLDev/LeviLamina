#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/BlockDescriptor.h"

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
    MCNAPI void fromMap(::std::map<::std::string, ::SharedTypes::Legacy::BlockDescriptor::Compound> const& proxyMap);

    MCNAPI ::BlockDescriptorSerializer::StatesProxy& operator=(::BlockDescriptorSerializer::StatesProxy&&);

    MCNAPI ~StatesProxy();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCNAPI static ::std::map<::std::string, ::SharedTypes::Legacy::BlockDescriptor::Compound>
    toMap(::BlockDescriptorSerializer::StatesProxy const& instance);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace BlockDescriptorSerializer
