#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/MediaContentDescription.h"
#include "mc/deps/webrtc/detail/MediaType.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class MediaContentDescription; }
// clang-format on

namespace cricket {

class SctpDataContentDescription : public ::cricket::MediaContentDescription {
public:
    // prevent constructor by default
    SctpDataContentDescription& operator=(SctpDataContentDescription const&);
    SctpDataContentDescription(SctpDataContentDescription const&);
    SctpDataContentDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SctpDataContentDescription@cricket@@UEAA@XZ
    virtual ~SctpDataContentDescription() = default;

    // vIndex: 1, symbol: ?type@SctpDataContentDescription@cricket@@UEBA?AW4MediaType@2@XZ
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
    // ?set_protocol@SctpDataContentDescription@cricket@@UEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    virtual void set_protocol(std::string_view);

    // vIndex: 12, symbol: ?CloneInternal@SctpDataContentDescription@cricket@@EEBAPEAV12@XZ
    virtual class cricket::SctpDataContentDescription* CloneInternal() const;

    // symbol: ?as_sctp@SctpDataContentDescription@cricket@@UEAAPEAV12@XZ
    MCVAPI class cricket::SctpDataContentDescription* as_sctp();

    // symbol: ?as_sctp@SctpDataContentDescription@cricket@@UEBAPEBV12@XZ
    MCVAPI class cricket::SctpDataContentDescription const* as_sctp() const;

    // NOLINTEND
};

}; // namespace cricket
