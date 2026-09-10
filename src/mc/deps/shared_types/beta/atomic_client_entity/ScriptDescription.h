#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Beta::AtomicClientEntity {

struct ScriptDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mInitialize;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mPreAnimation;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mAnimate;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool operator==(::SharedTypes::Beta::AtomicClientEntity::ScriptDescription const&) const;

    MCAPI ~ScriptDescription();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::Beta::AtomicClientEntity
