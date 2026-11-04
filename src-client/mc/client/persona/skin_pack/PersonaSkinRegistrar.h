#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IPersonaImageProvider;
class IPersonaPieceProvider;
class ISkinRepository;
class PersonaGeometryBuilder;
class SkinHandle;
struct PersonaCharacter;
// clang-format on

class PersonaSkinRegistrar {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IPersonaPieceProvider&>                               mPieceProvider;
    ::ll::TypedStorage<8, 8, ::PersonaGeometryBuilder&>                              mGeometryBuilder;
    ::ll::TypedStorage<8, 8, ::IPersonaImageProvider&>                               mImageProvider;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::ISkinRepository>>> mSkinRepository;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaSkinRegistrar& operator=(PersonaSkinRegistrar const&);
    PersonaSkinRegistrar(PersonaSkinRegistrar const&);
    PersonaSkinRegistrar();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SkinHandle getSkinHandleFromCharacter(::PersonaCharacter const& newCharacter);

    MCNAPI void registerSkinForCharacter(::PersonaCharacter& character);
    // NOLINTEND
};
