#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class PaperDollRenderer;
class PropertyBag;
// clang-format on

namespace GeometryAtlas {

class PaperDollHandle {
public:
    // PaperDollHandle inner types declare
    // clang-format off
    struct Impl;
    // clang-format on

    // PaperDollHandle inner types define
    struct Impl {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<
            8,
            64,
            ::brstd::move_only_function<
                void(::brstd::function_ref<void(::PaperDollRenderer&) const, void(::PaperDollRenderer&)>) const>>
                                                                                    mVisitorImpl;
        ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::PropertyBag>>> mBag;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::GeometryAtlas::PaperDollHandle::Impl>> mImpl;
    // NOLINTEND

public:
    // prevent constructor by default
    PaperDollHandle();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PaperDollHandle(
        ::brstd::move_only_function<
            void(::brstd::function_ref<void(::PaperDollRenderer&) const, void(::PaperDollRenderer&)>) const>
                                         visitorImpl,
        ::std::unique_ptr<::PropertyBag> bag
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::brstd::move_only_function<
            void(::brstd::function_ref<void(::PaperDollRenderer&) const, void(::PaperDollRenderer&)>) const>
                                         visitorImpl,
        ::std::unique_ptr<::PropertyBag> bag
    );
    // NOLINTEND
};

} // namespace GeometryAtlas
