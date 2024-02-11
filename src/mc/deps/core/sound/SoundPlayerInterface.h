#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
namespace Core { class Path; }
// clang-format on

class SoundPlayerInterface : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    SoundPlayerInterface& operator=(SoundPlayerInterface const&);
    SoundPlayerInterface(SoundPlayerInterface const&);
    SoundPlayerInterface();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SoundPlayerInterface@@UEAA@XZ
    virtual ~SoundPlayerInterface() = default;

    // vIndex: 15, symbol:
    // ?getCurrentlyPlayingMusicName@NullSoundPlayer@@UEAA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    virtual class Core::PathBuffer<std::string> const getCurrentlyPlayingMusicName() = 0;

    // vIndex: 17, symbol:
    // ?registerLoop@NullSoundPlayer@@UEAA_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$function@$$A6AXAEAULoopingSoundState@@@Z@3@MM@Z
    virtual uint64 registerLoop(
        std::string const&                             name,
        std::function<void(struct LoopingSoundState&)> getSoundState,
        float,
        float
    ) = 0;

    // vIndex: 23, symbol:
    // ?tryGetPlayingSoundAttributes@NullSoundPlayer@@UEBA?AV?$optional@UPlayingSoundAttributes@@@std@@_K@Z
    virtual std::optional<struct PlayingSoundAttributes> tryGetPlayingSoundAttributes(uint64 handle) const = 0;

    // vIndex: 24, symbol:
    // ?tryGetLoopingSoundAttributes@NullSoundPlayer@@UEBA?AV?$optional@ULoopingSoundAttributes@@@std@@_K@Z
    virtual std::optional<struct LoopingSoundAttributes> tryGetLoopingSoundAttributes(uint64 handle) const = 0;

    // NOLINTEND
};
