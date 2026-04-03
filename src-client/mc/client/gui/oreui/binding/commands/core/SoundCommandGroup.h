#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class SoundPlayerInterface;
namespace OreUI { class ClientDependencies; }
// clang-format on

namespace OreUI {

class SoundCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::SoundCommandGroup> {
public:
    // SoundCommandGroup inner types define
    using SoundHandle = uint64;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::SoundPlayerInterface>>               mPlayer;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<uint64, ::std::string, float, float>> mPlay;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, uint64, float>>                 mFadeOut;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<bool, uint64>>                        mIsPlaying;
    // NOLINTEND

public:
    // prevent constructor by default
    SoundCommandGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SoundCommandGroup() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SoundCommandGroup(::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
