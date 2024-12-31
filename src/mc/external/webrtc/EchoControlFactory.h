#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class EchoControl; }
// clang-format on

namespace webrtc {

class EchoControlFactory {
public:
    // prevent constructor by default
    EchoControlFactory& operator=(EchoControlFactory const&);
    EchoControlFactory(EchoControlFactory const&);
    EchoControlFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ::std::unique_ptr<::webrtc::EchoControl> Create(int, int, int) = 0;

    // vIndex: 1
    virtual ~EchoControlFactory() = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
