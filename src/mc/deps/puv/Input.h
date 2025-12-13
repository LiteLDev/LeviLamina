#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
        ::ll::UntypedStorage<1, 1> mUnk489f9a;
        ::ll::UntypedStorage<8, 8> mUnk9320ae;
        // NOLINTEND

    public:
        // prevent constructor by default
        Data& operator=(Data const&);
        Data(Data const&);
        Data();
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Input() = default;

    // vIndex: 1
    virtual ::SemVersion version() const = 0;

    // vIndex: 2
    virtual ::Puv::Input::Data data() const = 0;

    // vIndex: 3
    virtual ::Puv::Logger const& getErrors() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Puv::Logger const& $getErrors() const;
    // NOLINTEND
};

} // namespace Puv
