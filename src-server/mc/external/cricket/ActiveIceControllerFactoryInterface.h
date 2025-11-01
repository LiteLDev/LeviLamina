#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class ActiveIceControllerInterface; }
namespace cricket { struct ActiveIceControllerFactoryArgs; }
// clang-format on

namespace cricket {

class ActiveIceControllerFactoryInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActiveIceControllerFactoryInterface() = default;

    // vIndex: 1
    virtual ::std::unique_ptr<::cricket::ActiveIceControllerInterface> Create(::cricket::ActiveIceControllerFactoryArgs const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
