#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/persona/ProfileType.h"

// auto generated forward declare list
// clang-format off
class IPersonaRepository;
class PersonaAppearance;
class SkinHandle;
namespace persona { struct PersonaCharacterHandle; }
// clang-format on

class IPersonaClient {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPersonaClient() = default;

    virtual void createUpdatePersonaFromAppearance(
        ::PersonaAppearance const&,
        ::persona::ProfileType,
        ::std::function<void(::SkinHandle)>,
        ::persona::PersonaCharacterHandle const&,
        bool,
        bool
    ) = 0;

    virtual ::persona::PersonaCharacterHandle getCurrentCharacterHandle() const = 0;

    virtual ::IPersonaRepository const& getPersonaRepository() const = 0;

    virtual ::SkinHandle const& getSelectedSkinHandle() const = 0;

    virtual bool isSelectedSkinPlatformLocked() const = 0;

    virtual void savePersona(::persona::PersonaCharacterHandle const& characterHandle) = 0;

    virtual void sendNewPlayerSkinPacket(
        ::persona::ProfileType const profileType,
        ::std::string const&         oldSkinName,
        bool                         isClassicSkin
    ) = 0;

    virtual void setPersonaLegacySlotSkin(::SkinHandle const& skin) const = 0;

    virtual void
    updateCharacterSkinData(::persona::PersonaCharacterHandle const& characterHandle, ::SkinHandle const& handle) = 0;
    // NOLINTEND
};
