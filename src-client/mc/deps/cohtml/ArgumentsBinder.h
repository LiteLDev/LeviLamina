#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cohtml { class Binder; }
// clang-format on

namespace cohtml {

class ArgumentsBinder {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ArgumentsBinder() = default;

    virtual ::cohtml::Binder* GetArgument(int) = 0;

    virtual ::cohtml::Binder* ResultBegin() = 0;

    virtual void ResultEnd() = 0;

    virtual void ResultVoid() = 0;

    virtual int GetArgumentsCount() const = 0;

    virtual bool HasError() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cohtml
