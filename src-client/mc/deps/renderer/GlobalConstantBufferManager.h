#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Singleton.h"

// auto generated forward declare list
// clang-format off
namespace mce { class ConstantBufferContainer; }
// clang-format on

namespace mce {

class GlobalConstantBufferManager : public ::mce::Singleton<::mce::GlobalConstantBufferManager> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::mce::ConstantBufferContainer>> mConstantBufferContainers;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GlobalConstantBufferManager();

    MCAPI ::mce::ConstantBufferContainer& findConstantBufferContainer(::std::string const& constantBufferName);

    MCAPI void setDirty();

    MCAPI ~GlobalConstantBufferManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace mce
