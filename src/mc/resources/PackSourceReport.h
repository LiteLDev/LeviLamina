#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class PackReport;
struct PackIdVersion;
// clang-format on

class PackSourceReport {
public:
    // PackSourceReport inner types declare
    // clang-format off
    struct Impl;
    // clang-format on

    // PackSourceReport inner types define
    struct Impl {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnk314a24;
        ::ll::UntypedStorage<8, 24> mUnk9c710b;
        // NOLINTEND

    public:
        // prevent constructor by default
        Impl& operator=(Impl const&);
        Impl(Impl const&);
        Impl();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk99296d;
    // NOLINTEND

public:
    // prevent constructor by default
    PackSourceReport& operator=(PackSourceReport const&);
    PackSourceReport();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PackSourceReport(::std::unique_ptr<::PackSourceReport::Impl> impl);

    MCNAPI PackSourceReport(::PackSourceReport&& rhs);

    MCNAPI PackSourceReport(::PackSourceReport const& rhs);

    MCNAPI void addReport(::PackIdVersion const& packId, ::PackReport&& report);

    MCNAPI bool hasErrors() const;

    MCNAPI void merge(::PackSourceReport&& other);

    MCNAPI ::PackSourceReport& operator=(::PackSourceReport&& rhs);

    MCNAPI ~PackSourceReport();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::unique_ptr<::PackSourceReport::Impl> impl);

    MCNAPI void* $ctor(::PackSourceReport&& rhs);

    MCNAPI void* $ctor(::PackSourceReport const& rhs);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
