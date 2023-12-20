#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class MediaContentDescription; }
// clang-format on

namespace cricket {

class ContentInfo {
public:
    // prevent constructor by default
    ContentInfo& operator=(ContentInfo const&);
    ContentInfo();

public:
    // NOLINTBEGIN
    // symbol: ??0ContentInfo@cricket@@QEAA@AEBV01@@Z
    MCAPI ContentInfo(class cricket::ContentInfo const&);

    // symbol: ?media_description@ContentInfo@cricket@@QEAAPEAVMediaContentDescription@2@XZ
    MCAPI class cricket::MediaContentDescription* media_description();

    // symbol: ?media_description@ContentInfo@cricket@@QEBAPEBVMediaContentDescription@2@XZ
    MCAPI class cricket::MediaContentDescription const* media_description() const;

    // symbol: ??1ContentInfo@cricket@@QEAA@XZ
    MCAPI ~ContentInfo();

    // NOLINTEND
};

}; // namespace cricket
