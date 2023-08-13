#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

class SoundPlayerInterface : public ::Bedrock::EnableNonOwnerReferences {

public:
    // prevent constructor by default
    SoundPlayerInterface& operator=(SoundPlayerInterface const&) = delete;
    SoundPlayerInterface(SoundPlayerInterface const&)            = delete;
    SoundPlayerInterface()                                       = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0() = 0;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1() = 0;
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2() = 0;
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3() = 0;
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4() = 0;
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5() = 0;
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6() = 0;
    /**
     * @vftbl 7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7() = 0;
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8() = 0;
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9() = 0;
    /**
     * @vftbl 10
     * @symbol __unk_vfn_10
     */
    virtual void __unk_vfn_10() = 0;
    /**
     * @vftbl 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11() = 0;
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12() = 0;
    /**
     * @vftbl 13
     * @symbol __unk_vfn_13
     */
    virtual void __unk_vfn_13() = 0;
    /**
     * @vftbl 14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl 15
     * @symbol
     * ?getCurrentlyPlayingMusicName\@NullSoundPlayer\@\@UEAA?BV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    virtual class Core::PathBuffer<std::string> const getCurrentlyPlayingMusicName() = 0;
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16() = 0;
    /**
     * @vftbl 17
     * @symbol
     * ?registerLoop\@NullSoundPlayer\@\@UEAA_KAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$function\@$$A6AXAEAULoopingSoundState\@\@\@Z\@3\@MM\@Z
     */
    virtual uint64_t registerLoop(std::string const&, std::function<void(struct LoopingSoundState&)>, float, float) = 0;
    /**
     * @vftbl 18
     * @symbol __unk_vfn_18
     */
    virtual void __unk_vfn_18() = 0;
    /**
     * @vftbl 19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19() = 0;
    /**
     * @vftbl 20
     * @symbol __unk_vfn_20
     */
    virtual void __unk_vfn_20() = 0;
    /**
     * @vftbl 21
     * @symbol __unk_vfn_21
     */
    virtual void __unk_vfn_21() = 0;
    /**
     * @vftbl 22
     * @symbol
     * ?tryGetPlayingSoundAttributes\@NullSoundPlayer\@\@UEBA?AV?$optional\@UPlayingSoundAttributes\@\@\@std\@\@_K\@Z
     */
    virtual std::optional<struct PlayingSoundAttributes> tryGetPlayingSoundAttributes(uint64_t) const = 0;
    /**
     * @vftbl 23
     * @symbol
     * ?tryGetLoopingSoundAttributes\@NullSoundPlayer\@\@UEBA?AV?$optional\@ULoopingSoundAttributes\@\@\@std\@\@_K\@Z
     */
    virtual std::optional<struct LoopingSoundAttributes> tryGetLoopingSoundAttributes(uint64_t) const = 0;
    // NOLINTEND
};
