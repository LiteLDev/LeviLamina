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

class UnsupportedContentDescription : public ::cricket::MediaContentDescription {
public:
    // prevent constructor by default
    UnsupportedContentDescription& operator=(UnsupportedContentDescription const&);
    UnsupportedContentDescription(UnsupportedContentDescription const&);
    UnsupportedContentDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1UnsupportedContentDescription@cricket@@UEAA@XZ
    virtual ~UnsupportedContentDescription() = default;

    // vIndex: 1, symbol: ?type@UnsupportedContentDescription@cricket@@UEBA?AW4MediaType@2@XZ
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

    // vIndex: 10, symbol: ?has_codecs@UnsupportedContentDescription@cricket@@UEBA_NXZ
    virtual bool has_codecs() const;

    // vIndex: 12, symbol: ?CloneInternal@UnsupportedContentDescription@cricket@@EEBAPEAV12@XZ
    virtual class cricket::UnsupportedContentDescription* CloneInternal() const;

    // symbol: ?as_unsupported@UnsupportedContentDescription@cricket@@UEAAPEAV12@XZ
    MCVAPI class cricket::UnsupportedContentDescription* as_unsupported();

    // symbol: ?as_unsupported@UnsupportedContentDescription@cricket@@UEBAPEBV12@XZ
    MCVAPI class cricket::UnsupportedContentDescription const* as_unsupported() const;

    // NOLINTEND
};

}; // namespace cricket
