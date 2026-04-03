#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Detail { class IdType; }
namespace cohtml { class Binder; }
// clang-format on

namespace OreUI::Detail {

class ICallable {
public:
    // ICallable inner types define
    enum class Dummy : int {};

    using ErrorType = int;

    using NameType = char const* const;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ICallable() = default;

    virtual char const* const name() const = 0;

    virtual ::OreUI::Detail::IdType id() const = 0;

    virtual void bind(::cohtml::Binder*, void*) = 0;

    virtual void success() = 0;

    virtual void fail(int) = 0;

    virtual void fail() = 0;

    virtual void progress(uchar) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI::Detail
