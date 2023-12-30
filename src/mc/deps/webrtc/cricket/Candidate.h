#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class SocketAddress; }
// clang-format on

namespace cricket {

class Candidate {
public:
    // NOLINTBEGIN
    // symbol: ??0Candidate@cricket@@QEAA@XZ
    MCAPI Candidate();

    // symbol: ??0Candidate@cricket@@QEAA@AEBV01@@Z
    MCAPI Candidate(class cricket::Candidate const&);

    // symbol:
    // ??0Candidate@cricket@@QEAA@HV?$basic_string_view@DU?$char_traits@D@std@@@std@@AEBVSocketAddress@rtc@@I000I0GG@Z
    MCAPI Candidate(
        int,
        std::string_view,
        class rtc::SocketAddress const&,
        uint,
        std::string_view,
        std::string_view,
        std::string_view,
        uint,
        std::string_view,
        ushort,
        ushort
    );

    // symbol: ?GetPriority@Candidate@cricket@@QEBAIIHH@Z
    MCAPI uint GetPriority(uint, int, int) const;

    // symbol: ?IsEquivalent@Candidate@cricket@@QEBA_NAEBV12@@Z
    MCAPI bool IsEquivalent(class cricket::Candidate const&) const;

    // symbol: ?MatchesForRemoval@Candidate@cricket@@QEBA_NAEBV12@@Z
    MCAPI bool MatchesForRemoval(class cricket::Candidate const&) const;

    // symbol: ?ToSanitizedCopy@Candidate@cricket@@QEBA?AV12@_N0@Z
    MCAPI class cricket::Candidate ToSanitizedCopy(bool, bool) const;

    // symbol: ??9Candidate@cricket@@QEBA_NAEBV01@@Z
    MCAPI bool operator!=(class cricket::Candidate const&) const;

    // symbol: ??4Candidate@cricket@@QEAAAEAV01@AEBV01@@Z
    MCAPI class cricket::Candidate& operator=(class cricket::Candidate const&);

    // symbol: ??8Candidate@cricket@@QEBA_NAEBV01@@Z
    MCAPI bool operator==(class cricket::Candidate const&) const;

    // symbol: ?set_password@Candidate@cricket@@QEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI void set_password(std::string_view);

    // symbol: ?set_username@Candidate@cricket@@QEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI void set_username(std::string_view);

    // symbol: ??1Candidate@cricket@@QEAA@XZ
    MCAPI ~Candidate();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?ToStringInternal@Candidate@cricket@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCAPI std::string ToStringInternal(bool) const;

    // symbol:
    // ?Assign@Candidate@cricket@@CAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@4@@Z
    MCAPI static void Assign(std::string&, std::string_view);

    // NOLINTEND
};

}; // namespace cricket
