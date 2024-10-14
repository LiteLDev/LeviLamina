#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class ContentIdentity {
public:
    // NOLINTBEGIN
    MCAPI ContentIdentity();

    MCAPI ContentIdentity(class ContentIdentity&&);

    MCAPI ContentIdentity(class ContentIdentity const&);

    MCAPI explicit ContentIdentity(class mce::UUID const& uuid);

    MCAPI std::string asString() const;

    MCAPI class mce::UUID const& getAsUUID() const;

    MCAPI bool isValid() const;

    MCAPI bool operator!=(class ContentIdentity const& rhs) const;

    MCAPI class ContentIdentity& operator=(class ContentIdentity&& rhs);

    MCAPI class ContentIdentity& operator=(class ContentIdentity const& rhs);

    MCAPI bool operator==(class ContentIdentity const& rhs) const;

    MCAPI static class ContentIdentity fromString(std::string const& uuidString);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI static class ContentIdentity& EMPTY();

    // NOLINTEND
};
