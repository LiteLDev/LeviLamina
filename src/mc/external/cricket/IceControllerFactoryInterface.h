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
    virtual ~IceControllerFactoryInterface() = default;

    virtual ::std::unique_ptr<::cricket::IceControllerInterface> Create(::cricket::IceControllerFactoryArgs const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cricket
