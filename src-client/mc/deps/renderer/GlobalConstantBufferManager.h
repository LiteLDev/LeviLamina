#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Singleton.h"

// auto generated forward declare list
// clang-format off
namespace mce { struct ConstantBufferContainer; }
// clang-format on

namespace mce {

class GlobalConstantBufferManager : public ::mce::Singleton<::mce::GlobalConstantBufferManager> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::mce::ConstantBufferContainer>> mConstantBufferContainers;
    // NOLINTEND
};

} // namespace mce
