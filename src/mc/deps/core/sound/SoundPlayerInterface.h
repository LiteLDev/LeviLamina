#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class SoundPlayerInterface : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    SoundPlayerInterface& operator=(SoundPlayerInterface const&);
    SoundPlayerInterface(SoundPlayerInterface const&);
    SoundPlayerInterface();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0() = 0;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1() = 0;

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2() = 0;

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3() = 0;

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4() = 0;

    // vIndex: 5, symbol: __unk_vfn_5
    virtual void __unk_vfn_5() = 0;

    // vIndex: 6, symbol: __unk_vfn_6
    virtual void __unk_vfn_6() = 0;

    // vIndex: 7, symbol: __unk_vfn_7
    virtual void __unk_vfn_7() = 0;

    // vIndex: 8, symbol: __unk_vfn_8
    virtual void __unk_vfn_8() = 0;

    // vIndex: 9, symbol: __unk_vfn_9
    virtual void __unk_vfn_9() = 0;

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10() = 0;

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11() = 0;

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12() = 0;

    // vIndex: 13, symbol: __unk_vfn_13
    virtual void __unk_vfn_13() = 0;

    // vIndex: 14, symbol: __unk_vfn_14
    virtual void __unk_vfn_14();

    // vIndex: 15, symbol:
    // ?getCurrentlyPlayingMusicName@NullSoundPlayer@@UEAA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    virtual class Core::PathBuffer<std::string> const getCurrentlyPlayingMusicName() = 0;

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16() = 0;

    // vIndex: 17, symbol:
    // ?registerLoop@NullSoundPlayer@@UEAA_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$function@$$A6AXAEAULoopingSoundState@@@Z@3@MM@Z
    virtual uint64 registerLoop(std::string const&, std::function<void(struct LoopingSoundState&)>, float, float) = 0;

    // vIndex: 18, symbol: __unk_vfn_18
    virtual void __unk_vfn_18() = 0;

    // vIndex: 19, symbol: __unk_vfn_19
    virtual void __unk_vfn_19() = 0;

    // vIndex: 20, symbol: __unk_vfn_20
    virtual void __unk_vfn_20() = 0;

    // vIndex: 21, symbol: __unk_vfn_21
    virtual void __unk_vfn_21() = 0;

    // vIndex: 22, symbol:
    // ?tryGetPlayingSoundAttributes@NullSoundPlayer@@UEBA?AV?$optional@UPlayingSoundAttributes@@@std@@_K@Z
    virtual std::optional<struct PlayingSoundAttributes> tryGetPlayingSoundAttributes(uint64) const = 0;

    // vIndex: 23, symbol:
    // ?tryGetLoopingSoundAttributes@NullSoundPlayer@@UEBA?AV?$optional@ULoopingSoundAttributes@@@std@@_K@Z
    virtual std::optional<struct LoopingSoundAttributes> tryGetLoopingSoundAttributes(uint64) const = 0;

    // NOLINTEND
};
