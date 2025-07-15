#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class IceControllerInterface; }
namespace cricket { struct IceControllerFactoryArgs; }
// clang-format on

namespace cricket {

class IceControllerFactoryInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IceControllerFactoryInterface() = default;

    // vIndex: 1
    virtual ::std::unique_ptr<::cricket::IceControllerInterface> Create(::cricket::IceControllerFactoryArgs const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cricket
