#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http {

class HttpErrorCategory {
public:
    // prevent constructor by default
    HttpErrorCategory& operator=(HttpErrorCategory const&);
    HttpErrorCategory(HttpErrorCategory const&);
    HttpErrorCategory();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HttpErrorCategory() = default;

    // vIndex: 1
    virtual char const* name() const;

    // vIndex: 2
    virtual std::string message(int errorValue) const;

    // vIndex: 3
    virtual std::error_condition default_error_condition(int errorValue) const;

    // vIndex: 4
    virtual bool equivalent(int, std::error_condition const&) const;

    // vIndex: 5
    virtual bool equivalent(std::error_code const& code, int condition) const;

    // vIndex: 6
    virtual void __unk_vfn_6();

    // vIndex: 7
    virtual std::error_code start(std::optional<uint64> size);

    // vIndex: 8
    virtual std::error_code write(gsl::span<uchar const>);

    // vIndex: 9
    virtual void complete();

    // vIndex: 10
    virtual void cancel();

    // vIndex: 11
    virtual std::string const& getLoggableDestination() const;

    // vIndex: 12
    virtual gsl::span<uchar const> getLoggableData() const;

    MCAPI static std::error_category const& get();

    // NOLINTEND
};

}; // namespace Bedrock::Http
