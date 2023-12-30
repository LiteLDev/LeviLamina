#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/cricket/MediaType.h"

namespace cricket {

class AudioContentDescription {
public:
    // prevent constructor by default
    AudioContentDescription& operator=(AudioContentDescription const&);
    AudioContentDescription(AudioContentDescription const&);
    AudioContentDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AudioContentDescription@cricket@@UEAA@XZ
    virtual ~AudioContentDescription() = default;

    // vIndex: 1, symbol: ?type@AudioContentDescription@cricket@@UEBA?AW4MediaType@2@XZ
    virtual ::cricket::MediaType type() const;

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol: __unk_vfn_5
    virtual void __unk_vfn_5();

    // vIndex: 6, symbol: __unk_vfn_6
    virtual void __unk_vfn_6();

    // vIndex: 7, symbol: __unk_vfn_7
    virtual void __unk_vfn_7();

    // vIndex: 8, symbol: __unk_vfn_8
    virtual void __unk_vfn_8();

    // vIndex: 9, symbol: __unk_vfn_9
    virtual void __unk_vfn_9();

    // vIndex: 10, symbol: ?has_codecs@SctpDataContentDescription@cricket@@UEBA_NXZ
    virtual bool has_codecs() const;

    // vIndex: 11, symbol:
    // ?set_protocol@MediaContentDescription@cricket@@UEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    virtual void set_protocol(std::string_view);

    // vIndex: 12, symbol: ?CloneInternal@AudioContentDescription@cricket@@EEBAPEAV12@XZ
    virtual class cricket::AudioContentDescription* CloneInternal() const;

    // symbol: ?as_audio@AudioContentDescription@cricket@@UEAAPEAV12@XZ
    MCVAPI class cricket::AudioContentDescription* as_audio();

    // symbol: ?as_audio@AudioContentDescription@cricket@@UEBAPEBV12@XZ
    MCVAPI class cricket::AudioContentDescription const* as_audio() const;

    // NOLINTEND
};

}; // namespace cricket
