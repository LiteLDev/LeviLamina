#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ContentTierInfo;
namespace mce { class UUID; }
// clang-format on

class IPackManagerContentQueries {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPackManagerContentQueries() = default;

    virtual ::ContentTierInfo getContentTierInfo() const = 0;

    virtual ::std::string const* getStoreCatalogItemAvailableDateByPackIdentityAndType(::mce::UUID const&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
