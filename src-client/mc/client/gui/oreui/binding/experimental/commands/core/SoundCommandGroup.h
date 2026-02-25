#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/experimental/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/experimental/methods/CallableImpl.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class SoundPlayerInterface;
namespace OreUI::Experimental { class ClientDependencies; }
// clang-format on

namespace OreUI::Experimental {

class SoundCommandGroup : public ::OreUI::Experimental::CommandGroupBase<::OreUI::Experimental::SoundCommandGroup> {
public:
    // SoundCommandGroup inner types define
    using SoundHandle = uint64;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::SoundPlayerInterface>> mPlayer;
    ::ll::TypedStorage<8, 136, ::OreUI::Experimental::Detail::CallableImpl<uint64, ::std::string, float, float>> mPlay;
    ::ll::TypedStorage<8, 136, ::OreUI::Experimental::Detail::CallableImpl<void, uint64, float>> mFadeOut;
    ::ll::TypedStorage<8, 136, ::OreUI::Experimental::Detail::CallableImpl<bool, uint64>>        mIsPlaying;
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
    MCAPI explicit SoundCommandGroup(::OreUI::Experimental::ClientDependencies const& client);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::Experimental::ClientDependencies const& client);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI::Experimental
