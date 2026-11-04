#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct PersonaCharacter;
namespace persona { struct PersonaCharacterHandle; }
// clang-format on

namespace persona {

class ICharacterCollection {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::PersonaCharacter& getCharacter(::std::string const& characterName) = 0;

    virtual ::PersonaCharacter& getCharacter(::persona::PersonaCharacterHandle const& handle) = 0;

    virtual void removeCharacter(::std::string const& characterName) = 0;

    virtual void removeCharacter(::persona::PersonaCharacterHandle const& handle) = 0;
    // NOLINTEND
};

} // namespace persona
