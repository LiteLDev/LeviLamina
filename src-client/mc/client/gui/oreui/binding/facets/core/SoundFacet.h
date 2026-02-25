#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class SoundPlayerInterface;
// clang-format on

namespace OreUI {

class SoundFacet : public ::OreUI::FacetBase<::OreUI::SoundFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::SoundPlayerInterface>> mSoundPlayer;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SoundFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void fadeOut(uint64 soundHandle, float duration);

    MCAPI bool isPlaying(uint64 soundHandle) const;

    MCAPI uint64 play(::std::string const& soundEventName, float volume, float pitch);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
