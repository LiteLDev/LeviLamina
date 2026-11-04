#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/InputFormat.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace Json { class Value; }
namespace Puv { class Logger; }
namespace cereal { class DynamicValue; }
// clang-format on

namespace Puv {

class Input {
public:
    // Input inner types declare
    // clang-format off
    struct Data;
    // clang-format on

    // Input inner types define
    struct Data {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::Puv::InputFormat> mFormat;
        ::ll::TypedStorage<8, 8, void const*>        mPtr;
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Input() = default;

    virtual ::SemVersion version() const = 0;

    virtual ::Puv::Input::Data data() const = 0;

    virtual ::Puv::Logger const& getErrors() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Puv::Logger const& $getErrors() const;


    // NOLINTEND
};

} // namespace Puv
